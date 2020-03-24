#include "Monom.h"
#include <iostream>
#include <cstdlib>
//using namespace std;

int Monom::convolution_calculate(std::string s, int max_degree, int n) { //вычисление свертки 
	convolution = 0;
	int* pow;
	pow = new int[n];//степени
	std::string var = "x";
	std::string pv = "";
	int pos;
	for (int i = n - 1; i >= 0; i--) {
		var = "x" + std::to_string(i);//var=xi
		pos = int(s.find(var));
		pow[i] = 0;
		if (pos >= 0) {
			s.erase(pos, var.size());
			if ((s.size() >= pos) && (s[pos] != '^')) {
				pow[i] = 1;
			}
			else if (pos <= s.size() && (s[pos] == '^')) {
				s.erase(pos, 1);//убиваем крышечку
				pv = "";//степень
				while ((s.size() >= pos) && ((s[pos] - '0') >= 0) && ((s[pos] - '0') <= 9)) {
					pv += s[pos];
					s.erase(pos, 1);
				}
				if (pv != "") pow[i] = stoi(pv);//кладем в массив степеней нашу степень
			}
		}
		if (pow[i] >= max_degree)  convolution = -1;
	}
	if (convolution != -1) {
		for (int i = n - 1; i > 0; i--) {
			convolution = (convolution + pow[i]) * max_degree;
		}
		convolution += pow[0];
	}
	return convolution;
}

double Monom::coeff_calculate(std::string s) {
	coeff = 1;
	if (s[0] == '-1') {
		coeff = -1;
		s.erase(0, 1);
	}
	else if (s[0] == '+') {
		coeff = 1;
		s.erase(0, 1);
	}
	else if (s[0] == 'x') coeff = 1;
	std::string str = "";//в str будет храниться коэффициент
	while ((s.size() != 0) && (s[0] != 'x')) {
		str += s[0];
		s.erase(0, 1);
	}
	if (str != "") {
		coeff *= atof(str.c_str());
	}
	return coeff;
}

void Monom::get_pow(int n, int max_degree, int* pow) {
	int s_f = convolution;
	for (int i = 0; i < n; i++) {
		pow[i] = s_f % max_degree;
		s_f = s_f / max_degree;
	}
}

Monom::Monom(double _coeff, int _convolution) {
	coeff = _coeff;
	convolution = _convolution;
	next = this;
}

Monom::~Monom() {
	next = nullptr;
}

Monom::Monom(std::string s, int max_degree, int n) {//конструктор через строку
	coeff = coeff_calculate(s);
	convolution = convolution_calculate(s, max_degree, n);
	next = this;
}

Monom::Monom(const Monom& tmp) {
	coeff = tmp.coeff;
	convolution = tmp.convolution;
	next = this;
}

Monom& Monom::operator=(const Monom& tmp) {
	coeff = tmp.coeff;
	convolution = tmp.convolution;
	next = this;
	return *this;
}

Monom Monom::Multipl(Monom tmp, int max_degree, int n) {
	int* pow_first;
	pow_first = new int[n];
	int* pow_second;
	pow_second = new int[n];
	Monom res;
	res.convolution = 0;
	(*this).get_pow(n, max_degree, pow_first);
	tmp.get_pow(n, max_degree, pow_second);
	for (int i = 0; i < n; i++) {
		pow_first[i] += pow_second[i];
		if (pow_first[i] >= max_degree) res.convolution = -1;
	}
	res.coeff = coeff * tmp.coeff;
	if (res.convolution != -1) {
		for (int i = n - 1; i > 0; i--) {
			res.convolution = (res.convolution + pow_first[i]) * max_degree;
		}
		res.convolution += pow_first[0];
	}
	return res;
}

std::string Monom::calculate(int max_degree, int n) {
	std::string ans;
	if (coeff > 0) ans += '+';
	if (coeff != 1) ans += std::to_string(coeff);
	int* pow = new int[n];
	get_pow(n, max_degree, pow);
	for (int i = 0; i < n; i++) {
		std::string var = 'x' + std::to_string(i);
		if (pow[i] == 0) continue;
		ans += var;
		if (pow[i] == 1) continue;
		ans += '^' + std::to_string(pow[i]);
	}
	return ans;
}

double Monom::get_coeff() {
	return this->coeff;
}

int Monom::get_convolution() {
	return this->convolution;
}

Monom* Monom::get_next()
{
	return next;
}

void Monom::set_next(Monom* t) {
	this->next = t;
}

void Monom::set_coeff(double _coeff) {
	coeff = _coeff;
}

void Monom::set_convolution(int _convolution) {
	convolution = _convolution;
}

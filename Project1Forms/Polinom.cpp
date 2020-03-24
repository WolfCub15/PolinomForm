#include "Polinom.h"
#include <iostream>

void delenie_stroki_razn_delit(std::string* w, std::string st, int& k) {
	w[k].push_back(st[0]);
	for (int i = 1; i < st.size(); i++) {
		if (st[i] == '+') {
			if (w[k].size() > 0) {
				k++;
			}
			w[k] += st[i];
		}
		else if (st[i] == '-') {
			if (w[k].size() > 0) {
				k++;
			}
			w[k] += st[i];
		}
		else {
			w[k].push_back(st[i]);
		}
		//cout << " " << w[k] << endl;
	}
	if (w[k].size()) k++;
}
Polinom::Polinom(std::string str, int _count, int _maxpw) {
	count = _count;
	max_deg = _maxpw;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ') {
			str.erase(i, 1);
		}
	}
	int k = 0;
	std::string* w = new std::string[(str.size() + 1) / 2];
	delenie_stroki_razn_delit(w, str, k);
	for (int i = 0; i < k; i++) {
		Monom mon(w[i], max_deg, count);
		lc.AddMonom(mon);
	}
}

Polinom::Polinom(const Polinom& tmp) {
	count = tmp.count;
	max_deg = tmp.max_deg;
	lc = tmp.lc;
}

Polinom::~Polinom() {}

Polinom& Polinom::operator=(const Polinom& tmp) {
	if (this == &tmp) return *this;
	count = tmp.count;
	lc = tmp.lc;
	max_deg = tmp.max_deg;
	return *this;
}

void Polinom::AddMonomToPolinom(Monom tmp) {
	lc.AddMonom(tmp);
}

void Polinom::DelMonom(Monom tmp){
	lc.DelMonom(tmp);
}

Polinom Polinom::operator+(const Polinom tmp) {
	Polinom result(*this);
	result.lc = result.lc + tmp.lc;
	return result;
}

Polinom Polinom::operator-(const Polinom tmp) {
	Polinom result(*this);
	result.lc = result.lc - tmp.lc;
	return result;
}

Polinom Polinom::operator*(const Polinom tmp) {
	Polinom result(*this);
	result.lc = result.lc.Multipl(tmp.lc, max_deg, count);
	return result;
}

Polinom Polinom::operator*(const double k) {
	Polinom result(*this);
	result.lc = result.lc * k;
	return result;
}

std::string Polinom::PolinomToString() {
	std::string result;
	result = lc.ToString(max_deg, count);
	return result;
}

int Polinom::get_count() {
	return count;
}

int Polinom::get_max_deg() {
	return max_deg;
}

void Polinom::set_count(int _count) {
	count = _count;
}

void Polinom::set_max_deg(int _max_deg) {
	max_deg = _max_deg;
}

#pragma once
#include <string>
#include <ostream>
class Monom {
private:
	double coeff;
	int convolution;
	Monom* next;
	int convolution_calculate(std::string s, int max_degree, int n);
	double coeff_calculate(std::string s);
	void get_pow(int n, int max_degree, int* pow);
public:
	Monom(double _coeff = 1, int convolution = 0);
	~Monom();
	Monom(const Monom& tmp);
	Monom& operator =(const Monom& tmp);
	Monom(std::string s, int max_degree, int n);//конструктор через строку
	Monom Multipl(Monom tmp, int max_degree, int n);//умножение мономов
	std::string calculate(int max_degree, int n);//вычисление монома
	double get_coeff();//получить коэффициент монома
	int get_convolution();//получить свертку
	Monom* get_next();//получить указатель на следующий элемент
	void set_next(Monom* t);//изменить указатель
	void set_coeff(double _coeff);//изменить коэффициент
	void set_convolution(int _convolution);//изменить свертку
	/*friend ostream& operator<<(ostream& out, Monom& tmp) {
		out << tmp.coeff << "   " << tmp.convolution;
		return out;
	}*/
};



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
	Monom(std::string s, int max_degree, int n);
	Monom(const Monom& tmp);
	Monom& operator =(const Monom& tmp);
	Monom Multipl(Monom tmp, int max_degree, int n);
	std::string calculate(int max_degree, int n);
	double get_coeff();
	int get_convolution();
	Monom* get_next();
	void set_next(Monom* t);
	void set_coeff(double _coeff);
	void set_convolution(int _convolution);
	/*friend ostream& operator<<(ostream& out, Monom& tmp) {
		out << tmp.coeff << "   " << tmp.convolution;
		return out;
	}*/
};



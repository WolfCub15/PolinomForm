#pragma once
#include "ListCircle.h"
class Polinom {
private:
	int count;
	int max_deg;
	ListCircle lc;
public:
	Polinom(std::string str = "", int _count = 3, int _max_deg = 10);
	Polinom(const Polinom& tmp);
	~Polinom();
	Polinom& operator=(const Polinom& tmp);
	void AddMonomToPolinom(Monom tmp);
	void DelMonom(Monom tmp);
	Polinom operator+(const Polinom tmp);
	Polinom operator-(const Polinom tmp);
	Polinom operator*(const Polinom tmp);
	Polinom operator*(const double k);
	std::string PolinomToString();
	int get_count();
	int get_max_deg();
	void set_count(int _count);
	void set_max_deg(int _max_deg);
};


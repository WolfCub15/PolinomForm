#pragma once
#include "Monom.h"
class ListCircle {
private:
	Monom* first;
public:
	ListCircle();
	ListCircle(const ListCircle& tmp);
	~ListCircle();
	ListCircle& operator=(const ListCircle& tmp);
	void AddMonom(Monom tmp);
	void DelMonom(Monom tmp);
	ListCircle operator+(const ListCircle tmp);
	ListCircle operator-(const ListCircle tmp);
	ListCircle operator*(const double k);
	ListCircle Multipl(ListCircle tmp, int max_degree, int n);
	std::string ToString(int max_degree, int n);
};



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
	void AddMonom(Monom tmp);//добавление монома
	void DelMonom(Monom tmp);//удаление монома
	ListCircle operator+(const ListCircle tmp);//сложение 
	ListCircle operator-(const ListCircle tmp);//вычитание
	ListCircle operator*(const double k);//умножение на число 
	ListCircle Multipl(ListCircle tmp, int max_degree, int n);//умножение двух списков
	std::string ToString(int max_degree, int n);//перевод в строку
};



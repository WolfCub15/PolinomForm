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

	void AddMonomToPolinom(Monom tmp);//добавить моном в полином
	void DelMonom(Monom tmp);//удалить моном из полинома
	Polinom operator+(const Polinom tmp);//сложение двух полиномов
	Polinom operator-(const Polinom tmp);//вычитание двух полиномов
	Polinom operator*(const Polinom tmp);//умножение двух полиномов
	Polinom operator*(const double k);//умножение полинома на число
	std::string PolinomToString();//преобразование полинома в строку
	int get_count();//получить count
	int get_max_deg();//получить максимальную степень
	void set_count(int _count);//поменять count
	void set_max_deg(int _max_deg);//изменить максимальную степень
};


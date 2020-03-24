#include "ListCircle.h"

ListCircle::ListCircle() {
	first = new Monom(0, -1);
	first->set_next(first);
}

ListCircle::ListCircle(const ListCircle& tmp) {
	if (tmp.first->get_next() == tmp.first) {
		first = new Monom(0, -1);
		first->set_next(first);
	}
	else {
		first = new Monom((*tmp.first));
		Monom* curr = tmp.first->get_next();
		Monom* last = first;
		while (curr != tmp.first) {
			Monom* copy_curr = new Monom((*curr));
			last->set_next(copy_curr);
			last = last->get_next();
			curr = curr->get_next();
		}
		last->set_next(first);
	}
}

ListCircle::~ListCircle() {
	Monom* curr = first;
	while (curr->get_next() != first) {
		curr = curr->get_next();
	}
	curr->set_next(nullptr);
	delete first;
}

ListCircle& ListCircle::operator=(const ListCircle& tmp) {
	if (this == &tmp) return *this;
	Monom* curr = first;
	while (curr->get_next() != first) {
		curr = curr->get_next();
	}
	curr->set_next(nullptr);
	delete first;
	first = new Monom((*tmp.first));
	Monom* current = tmp.first->get_next();
	Monom* last = first;
	while (current != tmp.first) {
		Monom* copy_current = new Monom((*current));
		last->set_next(copy_current);
		last = last->get_next();
		current = current->get_next();
	}
	last->set_next(first);
	return *this;
}

void ListCircle::AddMonom(Monom tmp) {
	if (first->get_next() == first) {
		Monom* t = new Monom(tmp);
		t->set_next(first);
		first->set_next(t);
	}
	else {
		Monom* curr = first->get_next();
		while (curr != first) {
			if (curr->get_convolution() == tmp.get_convolution()) {
				double K = (curr->get_coeff() + tmp.get_coeff());
				if (K == 0) {
					Monom* del = first;
					while (del->get_next() != curr) {
						del = del->get_next();
					}
					del->set_next(curr->get_next());
					curr->set_next(nullptr);
					delete curr;
					return;
				}
				else {
					curr->set_coeff(K);
					return;
				}
			}
			curr = curr->get_next();
		}
		Monom* current = first;
		while (current->get_next() != first) {
			current = current->get_next();
		}
		Monom* end = new Monom(tmp);
		end->set_next(first);
		current->set_next(end);
	}
}

void ListCircle::DelMonom(Monom tmp){
	Monom* curr = first->get_next();
	while (curr != first) {
		if (curr->get_convolution() == tmp.get_convolution()) {
			Monom* _curr = first;
			while (_curr->get_next() != curr) {
				_curr = _curr->get_next();
			}
			_curr->set_next(curr->get_next());
			curr->set_next(nullptr);
			delete curr;
			return;
		}
		curr = curr->get_next();
	}
}

ListCircle ListCircle::operator+(const ListCircle tmp) {
	ListCircle result;
	Monom* curr = first->get_next();
	while (curr != first) {
		result.AddMonom(*curr);
		curr = curr->get_next();
	}
	Monom* _curr = tmp.first->get_next();
	while (_curr != tmp.first) {
		result.AddMonom(*_curr);
		_curr = _curr->get_next();
	}
	return result;
}

ListCircle ListCircle::operator-(const ListCircle tmp) {
	ListCircle result;
	Monom* curr = first->get_next();
	while (curr != first) {
		result.AddMonom(*curr);
		curr = curr->get_next();
	}
	Monom* _curr = tmp.first->get_next();
	while (_curr != tmp.first) {
		double K = -_curr->get_coeff();
		_curr->set_coeff(K);
		result.AddMonom(*_curr);
		_curr = _curr->get_next();
	}
	return result;
}

ListCircle ListCircle::operator*(const double k) {
	ListCircle result(*this);
	Monom* curr = result.first->get_next();
	while (curr != result.first) {
		curr->set_coeff(curr->get_coeff() * k);
		curr = curr->get_next();
	}
	return result;
}

ListCircle ListCircle::Multipl(ListCircle tmp, int max_degree, int n) {
	ListCircle result;
	Monom* curr = first->get_next();
	while (curr != first) {
		Monom* _curr = tmp.first->get_next();
		while (_curr != tmp.first) {
			Monom res = curr->Multipl((*_curr), max_degree, n);
			result.AddMonom(res);
			_curr = _curr->get_next();
		}
		curr = curr->get_next();
	}
	return result;
}

std::string ListCircle::ToString(int max_degree, int n) {
	std::string ans = "";
	Monom* curr = first->get_next();
	while (curr != first) {
		ans += curr->calculate(max_degree, n);
		curr = curr->get_next();
	}
	return ans;
}

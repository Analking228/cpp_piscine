#include "span.hpp"

Span::Span(unsigned int bruh) : _Num(bruh) {
}

Span::Span(const Span& other) : _Num(other._Num), _Ctr(other._Ctr){

}

const char*		Span::NumbersNotEnoughtException::what() const throw() {
	return "Error: not enough numbers in container";
}

const char*		Span::RangeOutOfException::what() const throw() {
	return "Error: out of range!";
}

void			Span::addNumber(int num) {
	if(_Ctr.size() < _Num)
		_Ctr.push_back(num);
	else
		throw RangeOutOfException();
}

int				Span::shortestSpan() const{
	if (_Ctr.size() > 1) {
		int		min = _Ctr.at(0);
		int		min2 = _Ctr.at(1);
		for (unsigned long i = 1; i < _Ctr.size(); i++) {
			if (_Ctr.at(i) < min) {
				min2 = min;
				min = _Ctr.at(i);
			}
		}
		return min2 - min;
	}
	else
		throw NumbersNotEnoughtException();
}

int				Span::longestSpan() const{
	if (_Ctr.size() > 1) {
		int		min = _Ctr.at(0);
		int		max = _Ctr.at(1);
		for (unsigned long i = 1; i < _Ctr.size(); i++) {
			if (_Ctr.at(i) < min)
				min = _Ctr.at(i);
			if (_Ctr.at(i) > max)
				max = _Ctr.at(i);
		}
		return max - min;
	}
	else
		throw NumbersNotEnoughtException();
}

Span&			Span::operator=(const Span& other) {
	_Num = other._Num;
	_Ctr = other._Ctr;
	return *this;
}

Span::~Span() {

}
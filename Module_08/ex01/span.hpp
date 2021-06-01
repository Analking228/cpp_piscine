#pragma once
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <iomanip>

class Span {
private:
	unsigned int		_Num;
	std::vector<int>	_Ctr;

public:
	Span(unsigned int);
	~Span();

	Span(const Span&);
	Span&				operator=(const Span&);

	void				addNumber(int);
	int					shortestSpan() const;
	int					longestSpan() const;

	class NumbersNotEnoughtException : public std::exception {
		virtual const char*	what() const throw();
	};
	class RangeOutOfException : public std::exception {
		virtual const char* what() const throw();
	};

};

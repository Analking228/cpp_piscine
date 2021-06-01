#pragma once

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <iomanip>

class ValueWrongException : public std::exception {
	virtual const char*	what() const throw() {
		return "Error: value does not exist!";
	}
};

template <typename T>
void						easyfind(T& list, int num) {
	typename T::iterator	it;

	it = std::find(list.begin(), list.end(), num);
	if (it == list.end())
		throw ValueWrongException();
	else
		std::cout << "Value exists!" << std::endl;
}
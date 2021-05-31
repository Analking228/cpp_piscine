#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void		swap(T& a, T& b) {
	T		c;

	c = a;
	a = b;
	b = c;
}

template <typename T>
const T&	min(const T& a, const T& b) {
	if (a < b)
		return a;
	return b;
}

template <typename T>
const T&	max(T const& a, T const& b) {
	if (a > b)
		return a;
	return b;
}

#endif
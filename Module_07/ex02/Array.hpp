#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T> class Array {

private:
	T*				_Array;
	unsigned int	_Num;

public:
	Array() : _Array(nullptr), _Num(0) {}
	~Array() {
		delete [] _Array;
	}
	Array(unsigned int n) {
		_Array = new T[n]();
		_Num = n;
	}

	Array(const Array& other) {
		*this = other;
	}
	Array&			operator=(const Array& other) {
		_Num = other._Num;
		delete [] _Array;
		_Array = new T[_Num];
		for (int i = 0; i < this->_Num; i++)
			this->_Array[i] = other._Array[i];
		return *this;
	}

	class IndexInvalidException : public std::exception {
		virtual const char*	what() const throw() {
			return "Error: wrong index!";
		}
	};

	T&				operator[](unsigned int n) {
		if (n >= _Num)
			throw IndexInvalidException();
		return (this->_Array[n]);
	}
	unsigned int	size() const{
		return (this->_Num);
	}

};

#endif
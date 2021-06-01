#pragma once
#define MUTANT_HPP

#include <iostream>
#include <algorithm>
#include <iterator>
#include <stack>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T> {

public:
	MutantStack() : std::stack<T>::stack() {}
	virtual			~MutantStack() {}

	MutantStack(MutantStack const& other) : std::stack<T>::stack(other) {}
	MutantStack&	operator=(MutantStack const& other) {
		*this = other;
		return(*this);
	}

	class iterator : public std::iterator<std::bidirectional_iterator_tag, T> {
	private:
		T*			_Pointer;
	public:
		iterator() : _Pointer(nullptr) {}
		iterator(T *pointer) : _Pointer(pointer) {}
		~iterator() {}

		iterator(iterator const& other) {
			*this = other;
		}
		iterator&	operator=(iterator const& other) {
			_Pointer = other._Pointer;
			return(*this);
		}
		
		bool		operator==(iterator const& other) {
			return other._Pointer == _Pointer;
		}
		bool		operator!=(iterator const& other) {
			return other._Pointer != _Pointer;
		}
		iterator&	operator--() {
			++_Pointer;
			return *this;
		}
		iterator&	operator++() {
			--_Pointer;
			return *this;
		}
		iterator	operator++(int) {
			iterator ptr = *this;
			++(*this);
			return ptr;
		}
		iterator	operator--(int) {
			iterator ptr = *this;
			--(*this);
			return ptr;
		}
		T&			operator*() {
			return *this->_Pointer;
		}
	};

	iterator		begin() {
		return iterator(&this->top());
	}
    iterator		end() {
		return iterator(&this->top() - this->size());
	}
};

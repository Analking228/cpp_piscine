#include "mutantstack.hpp"

// template <typename T>
// MutantStack<T>::MutantStack() : std::stack<T>::stack() {
// }

// template <typename T>
// MutantStack<T>::MutantStack(const MutantStack& other) : std::stack<T>::stack (other) {
// }

// template <typename T>
// MutantStack<T>::iterator::iterator() : _Pointer(nullptr) {
// }

// template <typename T>
// MutantStack<T>::iterator::iterator(T* pointer) : _Pointer(pointer) {
// }

// template <typename T>
// MutantStack<T>::iterator::~iterator() {
// }

// template <typename T>
// MutantStack<T>::iterator::iterator(const iterator& other) : _Pointer(other._Pointer) {
// }

// template <typename T>
// typename MutantStack<T>::iterator&		MutantStack<T>::iterator::operator=(iterator const& other) {
// 	_Pointer = other._Pointer;
// 	return(*this);
// }

// template <typename T>
// bool	MutantStack<T>::iterator::operator==(const iterator& other) {
// 	return _Pointer == other._Pointer;
// }

// template <typename T>
// bool	MutantStack<T>::iterator::operator!=(const iterator& other) {
// 	return _Pointer != other._Pointer;
// }

// template <typename T>
// typename MutantStack<T>::iterator&	MutantStack<T>::iterator::operator--() {
// 	_Pointer--;
// 	return *this;
// }

// template <typename T>
// typename MutantStack<T>::iterator&	MutantStack<T>::iterator::operator++() {
// 	_Pointer++;
// 	return *this;
// }

// template <typename T>
// typename MutantStack<T>::iterator	MutantStack<T>::iterator::operator--(int) {
// 	iterator	ptr = *this;
// 	--(*this);
// 	return ptr;
// }

// template <typename T>
// typename MutantStack<T>::iterator	MutantStack<T>::iterator::operator++(int) {
// 	iterator	ptr = *this;
// 	++(*this);
// 	return ptr;
// }

// template <typename T>
// T&							MutantStack<T>::iterator::operator*() {
// 	return *this->_Pointer;
// }

// template <typename T>
// typename MutantStack<T>::iterator	MutantStack<T>::begin() {
// 	return iterator(&this->top());
// }

// template <typename T>
// typename MutantStack<T>::iterator	MutantStack<T>::end() {
// 	return iterator(&this->top() - this->size());
// }

// template <typename T>
// MutantStack<T>&				MutantStack<T>::operator=(MutantStack const& other) {
// 	*this = other;
// 	return(*this);
// }

// template <typename T>
// MutantStack<T>::~MutantStack() {	
// }

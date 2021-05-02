#include "Fixed.class.hpp"

Fixed::Fixed() : fixPointVal(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : fixPointVal(other.fixPointVal) {

	std::cout << "Copy constructor called" << std::endl;
}

int		Fixed::getRawBits() const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->fixPointVal;
}

Fixed&	Fixed::operator=(const Fixed& fixed) {

	this->fixPointVal = fixed.fixPointVal;
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

Fixed::~Fixed() {

	std::cout << "Default destructor called" << std::endl;
}
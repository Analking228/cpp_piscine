#include "Fixed.class.hpp"

Fixed::Fixed() : Value(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : Value(other.Value) {

	std::cout << "Copy constructor called" << std::endl;
}

int				Fixed::getRawBits() {

	std::cout << "getRawBits member function called" << std::endl;
	return this->Value;
}

void			Fixed::setRawBits(const int raw) {

	this->Value = raw;
}

Fixed::Fixed(const int n) {

	this->Value = n * (1 << this->fbits);
	std::cout << "Contsructor from int called" << std::endl;
}

Fixed::Fixed(const float n) {

	this->Value = (int)roundf(n * (1 << this->fbits));
	std::cout << "Contsructor from float called" << std::endl;
}

Fixed&			Fixed::operator = (const Fixed& fixed) {

	this->Value = fixed.Value;
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

std::ostream&	operator << (std::ostream &out, const Fixed& val) {

	out << val.toFloat() << std::endl;
	return (out);
}

float			Fixed::toFloat() const{

	float		value = (float)this->Value / (1 << this->fbits);
	return (value);	
}

int				Fixed::toInt() const{

	int			value = this->Value / (1 << this->fbits);
	return (value);
}

Fixed::~Fixed() {

	std::cout << "Default destructor called" << std::endl;
}
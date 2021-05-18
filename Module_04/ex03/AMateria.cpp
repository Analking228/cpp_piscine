#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) : _Type(type), _Xp(0) {

}

AMateria::AMateria(const AMateria& other) : _Type(other._Type), _Xp(other._Xp) {

}

const std::string&		AMateria::getType() const{

	return _Type;
}

unsigned int			AMateria::getXP() const{

	return _Xp;
}

void					AMateria::use(ICharacter& target) {

	(void)target;
	_Xp += 10;
}

AMateria&				AMateria::operator=(const AMateria& other) {

	_Type = other._Type;
	_Xp = other._Xp;
	return *this;
}

AMateria::~AMateria() {

}
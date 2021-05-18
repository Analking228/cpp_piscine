#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& other) : AMateria(other) {}

AMateria*				Cure::clone() const{

	return new Cure();
}

void					Cure::use(ICharacter& target) {

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl; 
	_Xp += 10;
}

Cure&					Cure::operator=(const Cure& other) {

	_Type = other._Type;
	_Xp = other._Xp;
	return *this;
}

Cure::~Cure() {}
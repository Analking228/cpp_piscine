#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice& other) : AMateria(other) {}

AMateria*				Ice::clone() const{

	return new Ice();
}

void					Ice::use(ICharacter& target) {

	std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
	_Xp += 10;
}

Ice&					Ice::operator=(const Ice& other) {

	_Type = other._Type;
	_Xp = other._Xp;
	return *this;
}

Ice::~Ice() {}
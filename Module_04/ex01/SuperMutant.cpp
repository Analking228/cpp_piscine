#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(80, "Super Mutant") {

	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& other) : Enemy(other) {

	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

void				SuperMutant::takeDamage(int dmg) {

	Enemy::takeDamage(dmg - 3);
	if (!(this->getHP()))
		delete this;
}

SuperMutant&		SuperMutant::operator=(const SuperMutant& other) {

	this->__HP = other.__HP;
	this->__Type = other.__Type;
	return *this;
}

SuperMutant::~SuperMutant() {

	std::cout << "Aaargh..." << std::endl;
}
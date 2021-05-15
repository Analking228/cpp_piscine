#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {

	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& other) : Enemy(other) {

	std::cout << "* click click click *" << std::endl;
}

void				RadScorpion::takeDamage(int dmg) {

	Enemy::takeDamage(dmg);
	if (!(this->getHP()))
		delete this;
}

RadScorpion&		RadScorpion::operator=(const RadScorpion& other) {

	this->__HP = other.__HP;
	this->__Type = other.__Type;
	return *this;
}

RadScorpion::~RadScorpion() {

	std::cout << "* SPROTCH *" << std::endl;
}
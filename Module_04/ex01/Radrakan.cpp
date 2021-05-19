#include "Radrakan.hpp"

Radrakan::Radrakan() : Enemy(20, "Radrakan") {

	std::cout << "* Chik-chirik *" << std::endl;
}

Radrakan::Radrakan(const Radrakan& other) : Enemy(other) {

	std::cout << "* Chik-chirik *" << std::endl;
}

void				Radrakan::takeDamage(int dmg) {

	Enemy::takeDamage(dmg + 5);
	if (!(this->getHP()))
		delete this;
}

Radrakan&		Radrakan::operator=(const Radrakan& other) {

	this->__HP = other.__HP;
	this->__Type = other.__Type;
	return *this;
}

Radrakan::~Radrakan() {

	std::cout << "Mh... Yumy!" << std::endl;
}
#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("PowerFist", 50, 8) {

}

PowerFist::PowerFist(const PowerFist& other) : AWeapon(other) {

}

void				PowerFist::attack() const{

	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist&			PowerFist::operator=(const PowerFist& other) {

	this->__Name = other.__Name;
	this->__AP = other.__AP;
	this->__Dmg = other.__Dmg;
	return *this;
}

PowerFist::~PowerFist() {

}
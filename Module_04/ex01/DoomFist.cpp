#include "DoomFist.hpp"

DoomFist::DoomFist() : AWeapon("DoomFist", 1, 8) {

}

DoomFist::DoomFist(const DoomFist& other) : AWeapon(other) {

}

void				DoomFist::attack() const{

	std::cout << "* pschhh... SBAM! *" << std::endl;
}

DoomFist&			DoomFist::operator=(const DoomFist& other) {

	this->__Name = other.__Name;
	this->__AP = other.__AP;
	this->__Dmg = other.__Dmg;
	return *this;
}

DoomFist::~DoomFist() {

}
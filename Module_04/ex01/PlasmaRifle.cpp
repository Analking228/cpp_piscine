#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("PlasmaRifle", 5, 21) {

}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& other) : AWeapon(other) {

}

void				PlasmaRifle::attack() const{

	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle&		PlasmaRifle::operator=(const PlasmaRifle& other) {

	this->__Name = other.__Name;
	this->__AP = other.__AP;
	this->__Dmg = other.__Dmg;
	return *this;
}

PlasmaRifle::~PlasmaRifle(){

}

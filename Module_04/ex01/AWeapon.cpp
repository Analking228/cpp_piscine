#include "AWeapon.hpp"

AWeapon::AWeapon() {

}

AWeapon::AWeapon(const AWeapon& other) : __Name(other.__Name), __AP(other.__AP), __Dmg(other.__Dmg){

}

AWeapon::AWeapon(const std::string& name, int apcost, int damage) : __Name(name), __AP(apcost), __Dmg(damage) {

}

const std::string		AWeapon::getName() const{

	return this->__Name;
}

const int				AWeapon::getDamage() const{

	return this->__Dmg;
}

const int				AWeapon::getAPCost() const{

	return this->__AP;
}

AWeapon::~AWeapon() {

}
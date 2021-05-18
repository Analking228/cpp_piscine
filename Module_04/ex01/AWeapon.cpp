#include "AWeapon.hpp"

AWeapon::AWeapon() {

}

AWeapon::AWeapon(const AWeapon& other) : __Name(other.__Name), __Dmg(other.__Dmg), __AP(other.__AP) {

}

AWeapon::AWeapon(const std::string& name, int apcost, int damage) : __Name(name), __Dmg(damage),  __AP(apcost) {

}

const std::string&		AWeapon::getName() const{

	return this->__Name;
}

int				AWeapon::getDamage() const{

	return this->__Dmg;
}

int				AWeapon::getAPCost() const{

	return this->__AP;
}

AWeapon::~AWeapon() {

}
#include "Character.hpp"

Character::Character(const std::string& name) : __Name(name), __SumAP(40), __Weapon(NULL){

}

Character::Character(const Character& other) : __Name(other.__Name), __SumAP(other.__SumAP), __Weapon(other.__Weapon) {

}

const std::string&			Character::getName() const{

	return this->__Name;
}

const int					Character::getAP() const{

	return this->__SumAP;
}

const AWeapon*				Character::getWeapon() const{

	return this->__Weapon;
}

void						Character::equip(const AWeapon* weapon) {

	this->__Weapon = weapon;
}

void						Character::attack(Enemy* enemy) {

	if (this->takeAP()){

		enemy->takeDamage(this->__Weapon->getDamage());
		std::cout << this->getName() << " attacks " << enemy->getType()
		<< " with a " << this->__Weapon->getName() << std::endl;
	}
	else
		std::cout << this->getName() << " just stands nearby " << enemy->getType()
		<< " with a " << this->__Weapon->getName() << std::endl;
}

int						Character::takeAP() {

	this->__SumAP -= this->__Weapon->getAPCost();
	if (this->__SumAP >= 0)
		return 1;
	this->__SumAP += this->__Weapon->getAPCost();
	return 0;
}

void					Character::recoverAP(int ap) {

	this->__SumAP += ap;
	std::cout << this->getName() << " recovers " << ap
		<< " AP " << std::endl;
}

Character&				Character::operator=(const Character& other) {

	this->__Name = other.__Name;
	this->__SumAP = other.__SumAP;
	this->__Weapon = other.__Weapon;
	return *this;
}

std::ostream&			operator<<(std::ostream& out, const Character& point) {

	if (point.getWeapon())
		out << point.getName() << " has " << point.getAP() <<  " AP and wields a "
		<< point.getWeapon()->getName() << std::endl;
	else
		out << point.getName() << " has " << point.getAP() <<  " AP and is unarmed"
		<< std::endl;
	return out;
}

Character::~Character()
{
}
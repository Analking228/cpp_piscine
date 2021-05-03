#include "FragTrap.hpp"

FragTrap::FragTrap() : __Name("FlexTrap") {

	this->__HitPoints = 100;
	this->__MaxHP = 100;
	this->__EnergyPoints = 100;
	this->__MaxEP = 100;
	this->__Level = 1;
	this->__MeeleAttackDamage = 30;
	this->__RangedAttackDamage = 20;
	this->__ArmorReduction = 5;
}

FragTrap::~FragTrap() {

	std::cout << this->__Name << " has been Destroyed" << std::endl;
}
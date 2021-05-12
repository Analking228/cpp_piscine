#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : __Name("Standart Dummy"){

	__HitPoints = 100;
	__MaxHP = 100;
	__EnergyPoints = 100;
	__MaxEP = 100;
	__Level = 1;
	__MeeleAttackDamage = 30;
	__RangedAttackDamage = 20;
	__ArmorReduction = 5;
	std::cout << "Base Class constructed" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : __Name(name){

	__HitPoints = 100;
	__MaxHP = 100;
	__EnergyPoints = 100;
	__MaxEP = 100;
	__Level = 1;
	__MeeleAttackDamage = 30;
	__RangedAttackDamage = 20;
	__ArmorReduction = 5;
	std::cout << "Base constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : __Name(other.__Name){

	this->__HitPoints = other.__HitPoints;
	this->__MaxHP = other.__MaxHP;
	this->__EnergyPoints = other.__EnergyPoints;
	this->__MaxEP = other.__MaxEP;
	this->__Level = other.__Level;
	this->__MeeleAttackDamage = other.__MeeleAttackDamage;
	this->__RangedAttackDamage = other.__RangedAttackDamage;
	this->__ArmorReduction = other.__ArmorReduction;
	std::cout << "Base Copy called" << std::endl;
}

void		ClapTrap::rangedAttack(const std::string& target){

	std::cout << "ShoeBox " << this->__Name << " attacks {" << target << "} at range, causing "
	<< this->__RangedAttackDamage << " points of damage!" << std::endl;
}
void		ClapTrap::meleeAttack(const std::string& target){

	std::cout << "ShoeBox " << this->__Name << " attacks {" << target << "} at melee, causing "
	<< this->__MeeleAttackDamage << " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount){

	this->__HitPoints -= (amount - __ArmorReduction);
	if (this->__HitPoints < 0){
		this->__HitPoints = 0;
		std::cout << this->__Name << " - Oh no It damaged me so hard... I have "
		<< this->__HitPoints << " Am..." << std::endl;
		return ;
	}
	std::cout << "ShoeBox " << this->__Name << " takes damage " << amount
	<< " and now have "<< this->__HitPoints << " only!" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount){

	this->__HitPoints += amount;
	if (this->__HitPoints > this->__MaxHP)
		this->__HitPoints = this->__MaxHP;
	std::cout << "ShoeBox " << this->__Name << " repairing " << amount
	<< " HP and now have"<< this->__HitPoints << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other){

	__Name = other.__Name;
	__HitPoints = other.__HitPoints;
	__MaxHP = other.__MaxHP;
	__EnergyPoints = other.__EnergyPoints;
	__MaxEP = other.__MaxEP;
	__Level = other.__Level;
	__MeeleAttackDamage = other.__MeeleAttackDamage;
	__RangedAttackDamage = other.__RangedAttackDamage;
	__ArmorReduction = other.__ArmorReduction;
	return (*this);
}

ClapTrap::~ClapTrap () {

	std::cout << "CL4P-TP Destroyed" << std::endl;
}
#include "ClapTrap.class.hpp"

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

ClapTrap::ClapTrap(const std::string& name) : 
			__Name(name),
			__HitPoints(100),
			__MaxHP(100),
			__EnergyPoints(100),
			__MaxEP(100),
			__Level(1),
			__MeeleAttackDamage(30),
			__RangedAttackDamage(20),
			__ArmorReduction(5)
			{
	std::cout << "Base class constructor called" << std::endl;
}


ClapTrap::ClapTrap(const std::string& name,
			const int& hp,
			const int& mhp,
			const int& lvl,
			const int& ep,
			const int& mep,
			const int& mad,
			const int& rad,
			const int& ar) : 
			__Name(name),
			__HitPoints(hp),
			__MaxHP(mhp),
			__EnergyPoints(ep),
			__MaxEP(mep),
			__Level(lvl),
			__MeeleAttackDamage(mad),
			__RangedAttackDamage(rad),
			__ArmorReduction(ar)
			{

	std::cout << "Base class naming constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) :
				__Name(other.__Name),
				__HitPoints(other.__HitPoints),
				__MaxHP(other.__MaxHP),
				__EnergyPoints(other.__EnergyPoints),
				__MaxEP(other.__MaxEP),
				__Level(other.__Level),
				__MeeleAttackDamage(other.__MeeleAttackDamage),
				__RangedAttackDamage(other.__RangedAttackDamage),
				__ArmorReduction(other.__ArmorReduction){

	std::cout << "Base class copy constructor called" << std::endl;
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

std::string	ClapTrap::getName() const{

	return this->__Name;
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
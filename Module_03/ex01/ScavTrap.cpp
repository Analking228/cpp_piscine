#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : __Name("Door Waiter") {

	__HitPoints = 100;
	__MaxHP = 100;
	__EnergyPoints = 50;
	__MaxEP = 50;
	__Level = 1;
	__MeeleAttackDamage = 20;
	__RangedAttackDamage = 15;
	__ArmorReduction = 3;
	std::cout << __Name << " bot, class: SC4V-TP" << "\n"
	<< "{" << __HitPoints << "} HP" << "\n"
	<< "{" << __EnergyPoints << "} Energy" << "\n"
	<< "{" << __Level << "} Level" << "\n"
	<< "{" << __MeeleAttackDamage << "} MeleeAttack" << "\n"
	<< "{" << __RangedAttackDamage << "} RangeAttack" << "\n"
	<< "{" << __ArmorReduction << "} Armour" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : __Name(name) {

	__HitPoints = 100;
	__MaxHP = 100;
	__EnergyPoints = 50;
	__MaxEP = 50;
	__Level = 1;
	__MeeleAttackDamage = 20;
	__RangedAttackDamage = 15;
	__ArmorReduction = 3;
	std::cout << "Yes!  My name is " << __Name << " and I'm Waiter" << "\n"
	<< "But U will open door by yourself!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {

	__Name = other.__Name;
	__HitPoints = other.__HitPoints;
	__MaxHP = other.__MaxHP;
	__EnergyPoints = other.__EnergyPoints;
	__MaxEP = other.__MaxEP;
	__Level = other.__Level;
	__MeeleAttackDamage = other.__MeeleAttackDamage;
	__RangedAttackDamage = other.__RangedAttackDamage;
	__ArmorReduction = other.__ArmorReduction;
	std::cout << "I'm a just coppy of another waiter " << __Name << "\n"
	<< "my name is " << __Name << "(copy)" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other) {

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

void		ScavTrap::rangedAttack(const std::string& target){

	std::cout << "SC4V-TP(useless doorwaiter) " << this->__Name << " attacks {" << target << "} at range, causing "
	<< this->__RangedAttackDamage << " points of damage!" << std::endl;
}
void		ScavTrap::meleeAttack(const std::string& target){

	std::cout << "SC4V-TP(useless doorwaiter) " << this->__Name << " attacks {" << target << "} at melee, causing "
	<< this->__MeeleAttackDamage << " points of damage!" << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount){

	this->__HitPoints -= (amount - __ArmorReduction);
	if (this->__HitPoints < 0){
		this->__HitPoints = 0;
		std::cout << this->__Name << " - Oh no It damaged me so hard... I have "
		<< this->__HitPoints << " Am..." << std::endl;
		return ;
	}
	std::cout << "SC4V-TP(useless doorwaiter) " << this->__Name << " takes damage " << amount
	<< " and now have "<< this->__HitPoints << " only!" << std::endl;
}

void		ScavTrap::beRepaired(unsigned int amount){

	this->__HitPoints += amount;
	if (this->__HitPoints > this->__MaxHP)
		this->__HitPoints = this->__MaxHP;
	std::cout << "SC4V-TP(useless doorwaiter) " << this->__Name << " repairing " << amount
	<< " HP and have "<< this->__HitPoints << " now!" << std::endl;
}

void		ScavTrap::challengeNewcomer(void) {

	std::cout << "Oh now... strange door waiter opened it's SOUND SYSTEM" << "\n";
	this->__EnergyPoints -= 25;
	if (this->__EnergyPoints < 0){
		this->__EnergyPoints += 25;
		std::cout << "SC4V-TP(useless doorwaiter) " << this->__Name << " is tring to challange "
		<< "someone who opens door, but have not enough energy and just stands" << std::endl;
		return ;
	}
	std::string const    attacks[9] = {
			"I bet your brain feels as good as new, seeing that you've never used it!",
			"You must have a low opinion of people if you think they're your equals!",
			"If we were to kill everybody who hates you, it wouldn't be murder; it would be genocide!",
			"People say that you are the perfect idiot. I say that you are not perfect, but you are doing alright!",
			"Ordinarily people live and learn. You just live!",
			"I thought of you all day today when I was at the zoo!",
			"Your conversation is like the waves of the sea. It makes me sick!",
			"I can always tell when you are lying. Your lips move!"
			"ULTRA SPINNING ATTACK"
        };
	std::cout << "SC4V-TP(useless doorwaiter) " << this->__Name << "\n" 
	<< attacks[std::rand() % 8] << "\n"
	<< "And now have "<< this->__EnergyPoints << " EP" << std::endl;
}

ScavTrap::~ScavTrap() {

	std::cout << __Name << " Punished... Hurray!" << std::endl;
}
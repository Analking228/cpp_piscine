# include "FragTrap.class.hpp"

FragTrap::FragTrap() : __Name("FlexTrap"), 
	__HitPoints(100),
	__MaxHP(100),
	__EnergyPoints(100),
	__MaxEP(100),
	__Level(1),
	__MeeleAttackDamage(30),
	__RangedAttackDamage(20),
	__ArmorReduction(5) {
	std::cout << __Name << " bot, class: FR4G-TP" << "\n"
	<< "{" << __HitPoints << "} HP" << "\n"
	<< "{" << __EnergyPoints << "} Energy" << "\n"
	<< "{" << __Level << "} Level" << "\n"
	<< "{" << __MeeleAttackDamage << "} MeleeAttack" << "\n"
	<< "{" << __RangedAttackDamage << "} RangeAttack" << "\n"
	<< "{" << __ArmorReduction << "} Armour" << std::endl;
}

FragTrap::~FragTrap() {

	std::cout << this->__Name << " has been Destroyed" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : __Name(name) {

	this->__HitPoints = 100;
	this->__MaxHP = 100;
	this->__EnergyPoints = 100;
	this->__MaxEP = 100;
	this->__Level = 1;
	this->__MeeleAttackDamage = 30;
	this->__RangedAttackDamage = 20;
	this->__ArmorReduction = 5;
	std::cout << "Now you can call me " << this->__Name
	<< ". Yes! I got my OWN name" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : __Name(other.__Name + std::string("(copy)")){

	this->__HitPoints = other.__HitPoints;
	this->__MaxHP = other.__MaxHP;
	this->__EnergyPoints = other.__EnergyPoints;
	this->__MaxEP = other.__MaxEP;
	this->__Level = other.__Level;
	this->__MeeleAttackDamage = other.__MeeleAttackDamage;
	this->__RangedAttackDamage = other.__RangedAttackDamage;
	this->__ArmorReduction = other.__ArmorReduction;
	std::cout << "Created " << this->__Name << " -- Yes... I am just a copy..." << std::endl;
}

void		FragTrap::rangedAttack(const std::string& target){

	std::cout << "FR4G-TP " << this->__Name << " attacks {" << target << "} at range, causing "
	<< this->__RangedAttackDamage << " points of damage!" << std::endl;
}
void		FragTrap::meleeAttack(const std::string& target){

	std::cout << "FR4G-TP " << this->__Name << " attacks {" << target << "} at melee, causing "
	<< this->__MeeleAttackDamage << " points of damage!" << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount){

	this->__HitPoints -= (amount - __ArmorReduction);
	if (this->__HitPoints < 0){
		this->__HitPoints = 0;
		std::cout << this->__Name << " - Oh no It damaged me so hard... I have "
		<< this->__HitPoints << " Am..." << std::endl;
		return ;
	}
	std::cout << "FR4G-TP " << this->__Name << " takes damage " << amount
	<< " and now have "<< this->__HitPoints << " only!" << std::endl;
}

void		FragTrap::beRepaired(unsigned int amount){

	this->__HitPoints += amount;
	if (this->__HitPoints > this->__MaxHP)
		this->__HitPoints = this->__MaxHP;
	std::cout << "FR4G-TP " << this->__Name << " repairing " << amount
	<< " HP and now have"<< this->__HitPoints << std::endl;
}



void		FragTrap::vaulthunter_dot_exe(std::string const & target){

	this->__EnergyPoints -= 25;
	if (this->__EnergyPoints < 0){
		this->__EnergyPoints += 25;
		std::cout << "FR4G-TP " << this->__Name << " is attaking {" <<  target
		<< "} but have not enough energy and just stands" << std::endl;
		return ;
	}
	std::string const    attacks[9] = {
			"Repeater pistol",
			"Revolver",
			"Submachine guns",
			"Combat rifle",
			"Shotgun",
			"Sniper rifle",
			"Rocket launcher",
			"Eridian weapon"
			"ULTRA SPINNING ATTACK"
        };
	std::cout << "FR4G-TP " << this->__Name << " is attaking {" <<  target << "} using " 
	<< attacks[std::rand() % 8] << " HP and now have "<< this->__EnergyPoints << " EP" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other){

	this->__Name = other.__Name;
	this->__HitPoints = other.__HitPoints;
	this->__MaxHP = other.__MaxHP;
	this->__EnergyPoints = other.__EnergyPoints;
	this->__MaxEP = other.__MaxEP;
	this->__Level = other.__Level;
	this->__MeeleAttackDamage = other.__MeeleAttackDamage;
	this->__RangedAttackDamage = other.__RangedAttackDamage;
	this->__ArmorReduction = other.__ArmorReduction;
	return (*this);
}

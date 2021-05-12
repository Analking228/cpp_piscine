#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap::ClapTrap("Shoe_box_ULTRA", 100, 100, 1, 100, 100, 30, 20 , 5) {

	std::cout << "U just made " << __Name << "! U so unlucky..." << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap::ClapTrap(name, 100, 100, 1, 100, 100, 30, 20 , 5) {

	std::cout << "ShoeBox class FR4G-TP (" << __Name << ") \n";
	std::cout <<  "HP {" << __HitPoints << "} \n";
	__EnergyPoints = 100;
	std::cout << "EP {" << __EnergyPoints << "} \n";
	__MaxEP = 100;
	std::cout << "Level {" << __Level << "}\n";
	__MeeleAttackDamage = 30;
	std::cout << "Melee Damage {"<< __MeeleAttackDamage << "}\n";
	__RangedAttackDamage = 20;
	std::cout << "Ranged Damge {"<< __RangedAttackDamage << "}\n";
	__ArmorReduction = 5;
	std::cout << "Armour {" << __ArmorReduction << "}\n";
	std::cout << "Now you can call me " << __Name
	<< ". Yes! I got my OWN name" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){

	std::cout << "Created " << this->__Name << "(copy) -- Yes... I am just a copy..." << std::endl;
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

FragTrap::~FragTrap() {

	std::cout << this->__Name << " has been Destroyed" << std::endl;
}

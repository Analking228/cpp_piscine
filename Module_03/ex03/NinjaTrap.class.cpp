#include "NinjaTrap.class.hpp"

NinjaTrap::NinjaTrap() : ClapTrap("Hell's boss", 60, 60, 1, 120, 120, 50, 5, 0) {

	std::cout << "Anyone... Please... Tell me that {" << __Name <<
	"} not a real BOSS..." << "\n";
	std::cout << "stats:" << "\n" << "HP: " << __HitPoints << "\n";
	std::cout << "EP: " << __EnergyPoints << "\n";
	std::cout << "Level: " << __Level << "\n";
	std::cout << "Melee Attack: " << __MeeleAttackDamage << "\n";
	std::cout << "Range Attack: " << __RangedAttackDamage << "\n";
	std::cout << "YES I'M THE MAIN RAID BOSS!!!" << std::endl;
}

NinjaTrap::NinjaTrap(const std::string& name) : ClapTrap(name, 60, 60, 1, 120, 120, 50, 5, 0) {

	std::cout << "NOW IT'S A RAID BOSS NAMED {" << __Name << "}" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& other) : ClapTrap(other) {

	std::cout << "DANGEROUS SHOEBOX {" << __Name << "} COPIED" << std::endl;
}

void		NinjaTrap::ninjaShoebox(const NinjaTrap& target) {

	std::cout << "{" << target.getName() << "} ENERGY! " << (__EnergyPoints = 0) << "\n";
	std::cout << "{" << target.getName() << "} HP! " << (__HitPoints = 0) << "\n";
	std::cout << "WHAAA?! It SELFDESTROYED! What's going on?!" << std::endl;
}

void		NinjaTrap::ninjaShoebox(const ClapTrap& target) {

	std::cout << "Lookout {" << target.getName() << "} !!!" << "\n";
	std::cout << "Oh... It missed up... Nevermind!" << std::endl;
}

void		NinjaTrap::ninjaShoebox(const FragTrap& target) {

	std::cout << "Lookout {" << target.getName() << "} !!!" << "\n";
	std::cout << "Backflip!?" << std::endl;
}

void		NinjaTrap::ninjaShoebox(const ScavTrap& target) {

	std::cout << "Lookout {FR4G-TP} !!!" << "\n";
	std::cout << __Name << ": I WIL JUST STAND, " << target.getName() << "!" << std::endl;
}

NinjaTrap&	NinjaTrap::operator=(const NinjaTrap& other){

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

NinjaTrap::~NinjaTrap () {

	std::cout << "SEPUKU!" << std::endl;
}

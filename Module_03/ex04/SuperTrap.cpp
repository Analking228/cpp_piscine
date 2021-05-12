# include "SuperTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap("Super", 100, 100, 1, 120, 120, 60, 20, 5) {

	std::cout << "{" << __Name << "} has been cereated" << "\n";
	std::cout <<  "HP {" << __HitPoints << "} \n";
	std::cout << "EP {" << __EnergyPoints << "} \n";
	std::cout << "Level {" << __Level << "}\n";
	std::cout << "Melee Damage {"<< __MeeleAttackDamage << "}\n";
	std::cout << "Ranged Damge {"<< __RangedAttackDamage << "}\n";
	std::cout << "Armour {" << __ArmorReduction << "}\n";
	std::cout << "Super shoebox is ready to destroy!" << std::endl;
}

SuperTrap::SuperTrap(const std::string& name) : ClapTrap(name, 100, 100, 1, 120, 120, 60, 20, 5) {

	std::cout << "{" << __Name << "} has been cereated" << "\n";
	std::cout <<  "HP {" << __HitPoints << "} \n";
	std::cout << "EP {" << __EnergyPoints << "} \n";
	std::cout << "Level {" << __Level << "}\n";
	std::cout << "Melee Damage {"<< __MeeleAttackDamage << "}\n";
	std::cout << "Ranged Damge {"<< __RangedAttackDamage << "}\n";
	std::cout << "Armour {" << __ArmorReduction << "}\n";
	std::cout << "Super shoebox is ready to destroy!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& other) : ClapTrap(other) {

	std::cout << "copied" << std::endl;
}

void	SuperTrap::rangedAttack(const std::string& target) {

	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(const std::string& target) {

	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::takeDamage(unsigned int amount) {

	FragTrap::takeDamage(amount);
}

void	SuperTrap::beRepaired(unsigned int amount) {

	FragTrap::beRepaired(amount);
}

SuperTrap::~SuperTrap() {

	std::cout << "Super class has been destroyed" << std::endl;
}
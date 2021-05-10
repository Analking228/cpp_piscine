#include "NinjaTrap.class.hpp"

int		main(void){

	ScavTrap	dummy("SC$V-TP");
	FragTrap	dummy2("FR4G-TP");
	ClapTrap	dummy3("CL4P-TP");
	NinjaTrap	ninja("INAC");
	NinjaTrap	copy(ninja);

	ninja.meleeAttack("VoluteHunters");
	ninja.rangedAttack("AMOGUS");
	ninja.ninjaShoebox(dummy);
	std::cout << "\n";
	ninja.ninjaShoebox(dummy2);
	std::cout << "\n";
	ninja.ninjaShoebox(dummy3);
	std::cout << "\n";
	ninja.ninjaShoebox(copy);
	std::cout << std::endl;
}

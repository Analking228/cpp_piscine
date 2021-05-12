#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main(void){

	ScavTrap	waiter;
	FragTrap	trap2("Johny");
	ScavTrap	Waiter2("Dumy");
	ScavTrap	Waiter3(Waiter2);
	ScavTrap	Waiter4("Name that will changed");

	srand(static_cast<unsigned int>(time(0)));

	Waiter4 = waiter;
	trap2.meleeAttack("AYE");
	std::cout << std::endl;
	trap2.meleeAttack("CL4P-TP");
	waiter.meleeAttack("FR4G-TP");
	std::cout << std::endl;
	trap2.rangedAttack("CL4P-TP");
	Waiter2.rangedAttack("FR4G-TP");
	std::cout << std::endl;
	trap2.takeDamage(50);
	Waiter2.takeDamage(20);
	std::cout << std::endl;
	trap2.beRepaired(40);
	Waiter2.beRepaired(10);
	std::cout << std::endl;
	trap2.vaulthunter_dot_exe("That guy behind the door");
	Waiter3.challengeNewcomer();
	std::cout << std::endl;
	Waiter4.challengeNewcomer();
	std::cout << std::endl;
	Waiter3.challengeNewcomer();
	std::cout << std::endl;
	Waiter3.challengeNewcomer();
}

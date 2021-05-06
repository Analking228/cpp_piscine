#include "FragTrap.class.hpp"

int		main(void){

	FragTrap	trap;
	FragTrap	trap2("Johny");
	FragTrap	trap3(trap);
	FragTrap	trap4 = trap2;

	srand(static_cast<unsigned int>(time(0)));
	
	trap2.meleeAttack("Strange nude guy with sh*tgun");
	std::cout << std::endl;
	trap3.rangedAttack("Amother FR4G-TP");
	std::cout << std::endl;
	trap.takeDamage(40);
	std::cout << std::endl;
	trap4.beRepaired(20);
	std::cout << std::endl;
	std::cout << "lol" << std::endl;
	std::cout << std::endl;
	trap.vaulthunter_dot_exe("Yetty");
	std::cout << std::endl;
	trap.vaulthunter_dot_exe("Yetty");
	std::cout << std::endl;
	trap.vaulthunter_dot_exe("Yetty");
	std::cout << std::endl;
	trap.vaulthunter_dot_exe("Yetty");
	std::cout << std::endl;
	trap.vaulthunter_dot_exe("baby Yetty");
	std::cout << std::endl;
	return (0);
}

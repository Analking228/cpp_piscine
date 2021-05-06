#include "FragTrap.class.hpp"

int		main(void){

	FragTrap	trap;
	FragTrap	trap2("Johny");
	FragTrap	trap3(trap);
	FragTrap	trap4 = trap2;

	srand(static_cast<unsigned int>(time(0)));
	
	trap2.meleeAttack("Strange nude guy with sh*tgun");
	trap3.rangedAttack("Amother FR4G-TP");
	trap4.beRepaired(100);
	std::cout << "lol" << std::endl;
	trap.vaulthunter_dot_exe("Yetty");
	trap.vaulthunter_dot_exe("Yetty");
	trap.vaulthunter_dot_exe("Yetty");
	trap.vaulthunter_dot_exe("Yetty");
	trap.vaulthunter_dot_exe("baby Yetty");
	trap.takeDamage(150);
	return (0);
}

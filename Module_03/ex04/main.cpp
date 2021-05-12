#include "SuperTrap.hpp"


int		main(void){

	FragTrap	frag("Bob");
	SuperTrap	super;
	SuperTrap	s("Alex");
	SuperTrap	s2(s);

	srand(static_cast<unsigned int>(time(0)));
	
	s.meleeAttack("Aloha");
	std::cout << "\n";
	s2.rangedAttack("Lala");
	std::cout << "\n";
	super.takeDamage(25);
	std::cout << "\n";
	s2.ninjaShoebox(frag);
	std::cout << "\n";
	s2.vaulthunter_dot_exe("Strange nude guy");
	std::cout << std::endl;
}

#include "ZombieHorde.hpp"

int		main(void){

	ZombieHorde	*horde = new ZombieHorde(20);
	
	horde->announce();
	delete(horde);
	return (0);
}
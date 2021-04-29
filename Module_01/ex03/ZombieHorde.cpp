#include "ZombieHorde.hpp"

void	ZombieHorde::announce(){

	for (int i = 0; i < this->nbr; i++){
		horde[i].announce();
	}
}

ZombieHorde::ZombieHorde(int const n) : horde(new Zombie[n]), nbr(n){

	std::cout << "THE HORDE is nearby" << std::endl;
}

ZombieHorde::~ZombieHorde(){

	delete [] horde;
	std::cout << "THE HORDE has been flamed";
}

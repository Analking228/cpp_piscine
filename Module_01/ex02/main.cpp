#include "ZombieEvent.hpp"

int		main(void){

	ZombieEvent event;
	Zombie		*dump;
	Zombie		*troll = new Zombie();

	dump = event.newZombie("Albert");
	dump->announce();
	delete (dump);
	troll->announce();
	event.setZombieType(troll, "Prisoner");
	troll->announce();
	delete (troll);
	event.randomChump();
	return (0);
}
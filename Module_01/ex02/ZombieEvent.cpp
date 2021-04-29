#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(){
}

void	ZombieEvent::randomChump(){

	Zombie	*tmp = new Zombie;

	tmp->announce();
	delete (tmp);
}

void	ZombieEvent::setZombieType(Zombie *tmp, std::string const type){

	tmp->setType(type);
}

Zombie*	ZombieEvent::newZombie(std::string const name){

	Zombie*		tmp = new Zombie();

	tmp->setName(name);
	return tmp;
}

ZombieEvent::~ZombieEvent(){
}
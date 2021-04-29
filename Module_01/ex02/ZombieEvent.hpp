#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
public:
	Zombie*	newZombie(std::string const name);
	void	setZombieType(Zombie *tmp, std::string const type);
	void	randomChump();
	ZombieEvent();
	~ZombieEvent();
};

#endif
#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie*	horde;
	int		nbr;
public:
	void	announce();
	ZombieHorde(int const n);
	~ZombieHorde();
};

#endif
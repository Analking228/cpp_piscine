#ifndef RADRAKAN_HPP
# define RADRAKAN_HPP

# include "Enemy.hpp"

class Radrakan : public Enemy {

public:
	Radrakan();
	virtual ~Radrakan();

	Radrakan(const Radrakan& other);

	Radrakan&		operator=(const Radrakan& other);

	virtual void		takeDamage(int dmg);

};

#endif
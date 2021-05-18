#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy{

public:
	RadScorpion();
	virtual ~RadScorpion();

	RadScorpion(const RadScorpion& other);

	RadScorpion&		operator=(const RadScorpion& other);

	virtual void		takeDamage(int dmg);

};

#endif
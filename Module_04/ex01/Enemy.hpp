#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy {

protected:
	std::string			__Type;
	int					__HP;

public:
	~Enemy();
	
	Enemy(int hp, const std::string& type);
	Enemy(const Enemy& other);

	Enemy&				operator=(const Enemy& other);

	std::string			getType() const;
	int					getHP() const;

	virtual void		takeDamage(int dmg) = 0;

};

#endif
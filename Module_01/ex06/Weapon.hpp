#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon {
private:
	std::string	type;
public:
	Weapon();
	~Weapon();
	Weapon(std::string const&);
	void		setType(std::string const&);
	std::string	get_type();
};

#endif
#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "HumanA.hpp"

class HumanB {
private:
    std::string     name;
    Weapon*         weapon;

public:
	HumanB();
	~HumanB();
    
	HumanB(std::string);
    void            attack();
    void            setWeapon(Weapon &type);
};

#endif
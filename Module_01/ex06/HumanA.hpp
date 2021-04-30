#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
    std::string     name;
    Weapon&         weapon;

public:
	HumanA();
	~HumanA();

    HumanA(std::string const&name, Weapon &type);
    void            attack();
};

#endif
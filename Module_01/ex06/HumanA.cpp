#include "HumanA.hpp"

HumanA::HumanA(std::string const& name, Weapon &type) : name(name), weapon(type) {
}

void    HumanA::attack() {
    
	std::cout << this->name << " attacks with his " <<
    this->weapon.get_type() << std::endl;
}
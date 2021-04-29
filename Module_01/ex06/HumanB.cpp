#include "HumanB.hpp"
#include "HumanA.hpp"

HumanB::HumanB(std::string name) : name(name) {
}

void    HumanB::setWeapon(Weapon& type) {
    
	this->weapon = &type;
}

void    HumanB::attack() {
    
	std::cout << this->name << " attacks with his " <<
    this->weapon->get_type() << std::endl;
}
# include "Weapon.hpp"

Weapon::Weapon(std::string const& type) : type(type){
}

void        Weapon::setType(std::string const& type) {
	
	this->type = type;
}

std::string Weapon::get_type() {
    
	return this->type;
}

Weapon::Weapon() {
}

Weapon::~Weapon() {
}
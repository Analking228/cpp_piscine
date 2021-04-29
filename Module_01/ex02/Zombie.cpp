#include "Zombie.hpp"

Zombie::Zombie() {
	std::string const	names[9] = {
		"John",
		"Alex",
		"Bob",
		"Kanie",
		"Mark",
		"Antony",
		"Micky",
		"DEVOSTATOR",
		"DESTROYER",
	};
	this->name = names[std::rand() % 8];
	std::string const	types[9] = {
		"Jumper",
		"Runner",
		"Throver",
		"Wormer",
		"bla",
		"BUA",
		"t-1000",
		"Blackholly",
		"Bloody"
	};
	this->type = types[std::rand() % 8];
};

void	Zombie::setName(std::string const name){

	this->name = name;
}

void	Zombie::setType(std::string const type){

	this->type = type;
}

void	Zombie::announce() {
	std::cout << this->name << "(" << this->type << ")" << ": \"I wanna braiiiiiiinnnssss\"" << std::endl;
}

Zombie::~Zombie () {
	std::cout << this->name <<" has been deleted" << std::endl;
}
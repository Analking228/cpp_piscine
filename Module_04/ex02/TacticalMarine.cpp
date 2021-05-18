#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {

	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine& other) : ISpaceMarine(other) {

	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

ISpaceMarine*			TacticalMarine::clone() const{

	return new TacticalMarine(*this);
}

void					TacticalMarine::battleCry() const{

	std::cout << "For the Holy EMPEROR!!!" << std::endl;
}

void					TacticalMarine::rangedAttack() const{

	std::cout << "* attacks with bolter *" << std::endl;
}

void					TacticalMarine::meleeAttack() const{

	std::cout << "* attacks with powersword *" << std::endl;
}

TacticalMarine&		TacticalMarine::operator=(const TacticalMarine& other) {

	if (other.clone())
		return *this;
	return *this;
}

TacticalMarine::~TacticalMarine() {

	std::cout << "Aaargh..." << std::endl;
}
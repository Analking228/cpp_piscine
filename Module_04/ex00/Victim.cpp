#include "Victim.hpp"

Victim::Victim(const std::string& name) : AVictim(name) {

}

Victim::Victim(const Victim& other) : AVictim(other) {

}

Victim&		Victim::operator=(const Victim& other) {

	this->__Name = other.__Name;
	return *this;
}

const std::string& Victim::getName() const{

	return this->__Name;
}

void	Victim::getPolymorphed() const{

	std::cout << __Name << " has been turned into a cute little sheep!" <<std::endl;
}

std::ostream&	operator<<(std::ostream& out, const Victim& point) {

	out << "I'm " << point.getName() <<  " and I like otters!" << std::endl;
	return out;
}

Victim::~Victim() {

}
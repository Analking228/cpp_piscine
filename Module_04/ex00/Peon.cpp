#include "Peon.hpp"

Peon::Peon(const std::string& name) : Victim(name) {

}

Peon::Peon(const Peon& other) : Victim(other) {

}

Peon&				Peon::operator=(const Peon& other) {

	this->__Name = other.__Name;
	return *this;
}

const std::string&	Peon::getName() const{

	return this->__Name;
}

void				Peon::getPolymorphed() const{

	std::cout << __Name << " has been turned into a pink pony!" <<std::endl;
}

std::ostream&		operator<<(std::ostream& out, const Peon& point) {

	out << "I'm " << point.getName() <<  " and I like otters!" << std::endl;
	return out;
}

Peon::~Peon() {

}
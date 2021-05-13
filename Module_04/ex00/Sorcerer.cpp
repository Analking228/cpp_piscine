#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string& name, const std::string& title) : __Name(name), __Title(title) {

	std::cout << __Name << ", " << __Title << ", is born" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& other) : __Name(other.__Name), __Title(other.__Title) {

}

const std::string&		Sorcerer::getName() const{

	return (this->__Name);
}

const std::string&		Sorcerer::getTitle() const{

	return (this->__Title);
}

void			Sorcerer::polymorph(const Victim& dude) const{

	dude.getPolymorphed();
}

Sorcerer&		Sorcerer::operator=(const Sorcerer& other) {

	this->__Name = other.__Name;
	this->__Title = other.__Title;
	return (*this);
}

std::ostream&			operator<<(std::ostream& out, const Sorcerer& point) {

	out << "I am " << point.getName() << ", " << point.getTitle() << ", and I like ponies!" << std::endl;
	return out;
}

Sorcerer::~Sorcerer() {

	std::cout << __Name << ", " << __Title << ", is dead. Consequences will never be the same!" << std::endl;
}
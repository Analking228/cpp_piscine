#include "Brain.hpp"

std::string	Brain::identify() const{

	std::ostringstream os;

	os << this;
	return os.str();
}

Brain::Brain() : lifetime(rand()){

	std::cout << "Brain birth is today. It " << this->lifetime << " years old!" << std::endl;
}

Brain::~Brain(){

}
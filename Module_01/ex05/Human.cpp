#include "Brain.hpp"
#include "Human.hpp"

Brain const&	Human::getBrain() {
    
	return this->brain;
}

std::string		Human::identify() const{
    
	return (this->brain.identify());
}

Human::Human(){
}

Human::~Human(){
}
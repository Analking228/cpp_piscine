#include "Victim.class.hpp"

VictimClass::VictimClass() {

	std::cout << "Some random victim called " <<  this->__Name << " just appeared!" << std::endl;
}

VictimClass::VictimClass(const std::string& name) : __Name(name) {

	std::cout << "Some random victim called " <<  this->__Name << " just appeared!" << std::endl;	
}

VictimClass::VictimClass(const VictimClass& other) : __Name(other.__Name) {

	std::cout << "Some random victim called " <<  this->__Name << " just appeared!" << std::endl;
}

VictimClass::~VictimClass() {

	std::cout << "Victim " << this->__Name << " just died for no apparent reason!" << std::endl;
}
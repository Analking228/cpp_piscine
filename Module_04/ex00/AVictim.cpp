#include "AVictim.hpp"

AVictim::AVictim() {

	std::cout << "Some random victim called " <<  this->__Name << " just appeared!" << std::endl;
}

AVictim::AVictim(const std::string& name) : __Name(name) {

	std::cout << "Some random victim called " <<  this->__Name << " just appeared!" << std::endl;	
}

AVictim::AVictim(const AVictim& other) : __Name(other.__Name) {

	std::cout << "Some random victim called " <<  this->__Name << " just appeared!" << std::endl;
}

AVictim::~AVictim() {

	std::cout << "Victim " << this->__Name << " just died for no apparent reason!" << std::endl;
}
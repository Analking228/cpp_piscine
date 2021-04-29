#include "Pony.hpp"

Pony::Pony(string const n, string const c, int a) : name(n), color(c), age(a){
	
	this->birth_place = "heap";
	this->advantages = "I don't waste memory as my STACKborned sister, and I am more beautiful";
	std::cout << "PONY CONSTRACTION MACHINE HAS BEEN ACTIVATED!" << std::endl;
}

Pony::Pony(void){
	this->name = "AnalDevostator";
	this->color = "Blackholly black";
	this->age = 0;
	this->birth_place = "stack";
	this->advantages = "I was borned more quicky than my  HEAPborned sister, and I will automaticly die after all";
	std::cout << "PONY CONSTRACTION MACHINE HAS BEEN ACTIVATED!" << std::endl;
}

void	Pony::the_sisterstory(void){

	std::cout << "Hi! My name is " << this->name << " and I am PONY!" << std::endl;
	std::cout << "I was born on the " << this->birth_place << " and really proud of this!" << std::endl;
	std::cout << this->advantages << std::endl;
	std::cout << "By the way, I am " << this->age << " years old! Nice to meet you" << std::endl; 
}

Pony::~Pony(){

	std::cout << this->name << " WAS MURDERED!" << std::endl;
}

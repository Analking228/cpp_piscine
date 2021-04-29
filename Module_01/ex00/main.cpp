#include "Pony.hpp"

int		main(void){

	Pony	*heap_sister = new Pony("Demonslayer", "Bloody red", 99999999);
	
	heap_sister->the_sisterstory();

	delete (heap_sister);
	Pony	stack_sister;

	stack_sister.the_sisterstory();
}
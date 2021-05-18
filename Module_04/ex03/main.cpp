#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main() {
	
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->use(0, *bob);

	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->use(1, *bob);

	me->unequip(0);
	me->use(0, *bob); 
	
    delete bob;
    delete me;
    delete src;
    return 0;
}

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main() {

	ISpaceMarine*	bob = new TacticalMarine;
	ISpaceMarine*	alex;
	ISpaceMarine*	jim = new AssaultTerminator;
	ISquad*			vlc = new Squad;

	alex = bob->clone();
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(alex);
	vlc->push(bob);

	for (int i = 0; i < vlc->getCount(); ++i) {

		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	printf("unit = %p\n", vlc->getUnit(100));

	std::cout << vlc->getCount() << std::endl;
	
	delete vlc;
	return 0;
}

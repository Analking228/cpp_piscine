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

	std::cout << vlc->getCount() << std::endl;

	Squad*		sq = new Squad;
	
	sq->push(bob);
	sq->push(jim);
	sq->push(alex);

	delete vlc;
	
	for (int i = 0; i < sq->getCount(); ++i) {

		ISpaceMarine* cur = sq->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	Squad*		sq2 = new Squad;
	std::cout << "here?" << std::endl;
	*sq2 = *sq;

	std::cout << sq->getCount() << std::endl;
	std::cout << sq2->getCount() << std::endl;

	delete sq;
	delete sq2;
	return 0;
}

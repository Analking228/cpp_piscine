#include "Character.hpp"

int main() {

	Character*	me = new Character("me");

	std::cout << *me;

	Enemy*		b = new RadScorpion();
	Enemy*		d = new SuperMutant();

	AWeapon*	pr = new PlasmaRifle();
	AWeapon*	pf = new PowerFist();
	AWeapon*	df = new DoomFist();

	me->equip(pr);
	std::cout << *me;

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	

	me->equip(df);
	std::cout << *me;
	me->attack(d);
	me->recoverAP();
	me->recoverAP();
	me->attack(d);
	me->attack(d);
	me->attack(d);
	me->attack(d);
	me->attack(d);
	me->attack(d);
	me->attack(d);
	me->attack(d);
	me->attack(d);
	me->attack(d);
	me->attack(d);
	me->attack(d);
	me->equip(pf);
	me->attack(d);
	me->equip(df);
	me->attack(d);
	me->attack(d);
	me->attack(d);
	me->attack(d);
	
	delete pr;
	delete pf;
	delete df;
	delete me;
	return 0;
}
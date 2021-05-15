#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>

# include "PlasmaRifle.hpp"
# include "PowerFist.hpp"
# include "RadScorpion.hpp"
# include "SuperMutant.hpp"
# include "DoomFist.hpp"

class Character {

private:
	Character();

	std::string			__Name;
	int					__SumAP;
	const AWeapon*		__Weapon;

public:
	Character(const std::string& name);
	~Character();

	Character(const Character& other);

	Character&			operator=(const Character& other);

	const std::string&	getName() const;
	const int			getAP() const;
	const AWeapon*		getWeapon() const;
	void				equip(const AWeapon* weapon);
	void				attack(Enemy* enemy);
	int					takeAP();
	void				recoverAP();

};

std::ostream&			operator<<(std::ostream& out, const Character& point);

#endif
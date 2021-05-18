#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon {

private:
	AWeapon();

protected:
	std::string		__Name;
	int				__Dmg;
	int				__AP;

public:
	virtual ~AWeapon();

	AWeapon(const AWeapon& other);
	AWeapon(std::string const & name, int apcost, int damage);

	AWeapon&		operator=(const AWeapon& other);

	const std::string&		getName() const;
	int 			getAPCost() const;
	int 			getDamage() const;
	virtual void	attack() const = 0;

};
	


#endif
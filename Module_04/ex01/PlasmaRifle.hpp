#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

public:
	PlasmaRifle();
	~PlasmaRifle();

	PlasmaRifle(const PlasmaRifle& other);

	PlasmaRifle&	operator=(const PlasmaRifle& other);

	virtual void	attack() const;

};

#endif
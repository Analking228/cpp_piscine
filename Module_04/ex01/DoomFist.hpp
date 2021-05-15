#ifndef DOOMFIST_HPP
# define DOOMFIST_HPP

# include "AWeapon.hpp"

class DoomFist : public AWeapon {
public:
	DoomFist();
	~DoomFist();

	DoomFist(const DoomFist& other);

	DoomFist&		operator=(const DoomFist& other);

	virtual void	attack() const;
	
};


#endif
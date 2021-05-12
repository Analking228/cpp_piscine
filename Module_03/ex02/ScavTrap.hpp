#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

private:
	int			__EnergyPoints;
	int			__MaxEP;
	int			__MeeleAttackDamage;
	int			__RangedAttackDamage;
	int			__ArmorReduction;	

public:
	ScavTrap();
	~ScavTrap();

	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& other);
	ScavTrap&	operator=(const ScavTrap& other);
	void		challengeNewcomer(void);

};

#endif
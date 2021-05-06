#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# include "ClapTrap.class.hpp"

class ScavTrap : public ClapTrap{

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
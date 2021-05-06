#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# include "FragTrap.class.hpp"

class ScavTrap{

private:
	int			__HitPoints;
	int			__MaxHP;
	int			__EnergyPoints;
	int			__MaxEP;
	int			__Level;
	std::string	__Name;
	int			__MeeleAttackDamage;
	int			__RangedAttackDamage;
	int			__ArmorReduction;	

public:
	ScavTrap();
	~ScavTrap();

	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& other);
	ScavTrap&	operator=(const ScavTrap& other);
	void		rangedAttack(const std::string& target);
	void		meleeAttack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer(void);
};

#endif
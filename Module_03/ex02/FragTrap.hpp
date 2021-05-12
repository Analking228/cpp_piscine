#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

private:
	std::string	__Name;
	int			__EnergyPoints;
	int			__MaxEP;
	int			__MeeleAttackDamage;
	int			__RangedAttackDamage;
	int			__ArmorReduction;

public:
	FragTrap();
	~FragTrap();

	FragTrap(const std::string& name);
	FragTrap(const FragTrap& other);
	FragTrap&	operator=(const FragTrap& other);
	void		vaulthunter_dot_exe(std::string const & target);

};

#endif
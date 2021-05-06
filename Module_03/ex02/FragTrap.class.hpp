#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

# include "ClapTrap.class.hpp"

class FragTrap : public ClapTrap{

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
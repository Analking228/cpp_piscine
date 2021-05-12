#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime> 

class ClapTrap{

private:
	int			__EnergyPoints;
	int			__MaxEP;
	int			__MeeleAttackDamage;
	int			__RangedAttackDamage;
	int			__ArmorReduction;

protected:
	std::string	__Name;
	int			__HitPoints;
	int			__MaxHP;
	int			__Level;

public:
	ClapTrap();
	~ClapTrap();

	ClapTrap(const ClapTrap& other);
	ClapTrap(const std::string& name);
	ClapTrap&	operator=(const ClapTrap& other);
	void		rangedAttack(const std::string& target);
	void		meleeAttack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

};

#endif
#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime> 

class ClapTrap{

public:

	std::string	__Name;
	int			__HitPoints;
	int			__MaxHP;
	int			__Level;
	int			__EnergyPoints;
	int			__MaxEP;
	int			__MeeleAttackDamage;
	int			__RangedAttackDamage;
	int			__ArmorReduction;
	
	ClapTrap();
	~ClapTrap();

	ClapTrap(const std::string& name,
			const int& hp,
			const int& mhp,
			const int& lvl,
			const int& ep,
			const int& mep,
			const int& mad,
			const int& rad,
			const int& ar);
	ClapTrap(const ClapTrap& other);
	ClapTrap(const std::string& name);
	ClapTrap&		operator=(const ClapTrap& other);
	void			rangedAttack(const std::string& target);
	void			meleeAttack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	std::string		getName() const;

};

#endif
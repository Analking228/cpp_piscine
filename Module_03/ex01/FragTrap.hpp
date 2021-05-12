#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime> 

class FragTrap{

private:
	std::string	__Name;
	int			__HitPoints;
	int			__MaxHP;
	int			__EnergyPoints;
	int			__MaxEP;
	int			__Level;
	
	int			__MeeleAttackDamage;
	int			__RangedAttackDamage;
	int			__ArmorReduction;

public:
	FragTrap();
	~FragTrap();

	FragTrap(const FragTrap& other);
	FragTrap(const std::string& name);
	FragTrap&	operator=(const FragTrap& other);
	void		rangedAttack(const std::string& target);
	void		meleeAttack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		vaulthunter_dot_exe(std::string const & target);

};

#endif
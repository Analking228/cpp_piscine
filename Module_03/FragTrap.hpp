#include <iostream>

class FragTrap{

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
	FragTrap();
	~FragTrap();

	FragTrap(const FragTrap& other);
	void		FragTrap::rangedAttack(const std::string& target);
	void		FragTrap::meleeAttack(const std::string& target);
	void		FragTrap::takeDamage(unsigned int amount);
	void		FragTrap::beRepaired(unsigned int amount);
};
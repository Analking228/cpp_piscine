#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap {

public:
	NinjaTrap();
	~NinjaTrap();

	NinjaTrap(const std::string& name);
	NinjaTrap(const NinjaTrap& other);
	NinjaTrap&		operator=(const NinjaTrap& other);
	void			ninjaShoebox(const NinjaTrap& trap);
	void			ninjaShoebox(const ScavTrap& trap);
	void			ninjaShoebox(const FragTrap& trap);
	void			ninjaShoebox(const ClapTrap& trap);
	virtual void	meleeAttack(const std::string& target);

};

#endif
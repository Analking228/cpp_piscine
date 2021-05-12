#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

public:
	SuperTrap();
	~SuperTrap();

	SuperTrap(const std::string& name);
	SuperTrap(const	SuperTrap& other);
	SuperTrap&			operator=(SuperTrap const &);
	virtual void		rangedAttack(std::string const & target);
	virtual void		meleeAttack(std::string const & target);
	virtual void		takeDamage(unsigned int amount);
	virtual void		beRepaired(unsigned int amount);

};

#endif
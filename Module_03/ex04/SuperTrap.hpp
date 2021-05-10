#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.class.hpp"
# include "NinjaTrap.class.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

public:
	SuperTrap();
	~SuperTrap();

	SuperTrap(const std::string& name);
	SuperTrap&			operator=(SuperTrap const &);
	//virtual int			rangedAttack(std::string const & target);
	//virtual int			meleeAttack(std::string const & target);

};

#endif
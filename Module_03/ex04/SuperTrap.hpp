#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : virtual public FragTrap, virtual public NinjaTrap {

public:
	SuperTrap();
	~SuperTrap();
	
	SuperTrap(SuperTrap const &);
	SuperTrap(std::string const &);
    SuperTrap&          operator=(SuperTrap const &);
    int         rangedAttack(std::string const & target);
    int         meleeAttack(std::string const & target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
    std::string getName() const;
};

#endif
#ifndef NINJATRAP_CLASS_HPP
# define NINJATRAP_CLASS_HPP

# include "FragTrap.class.hpp"
# include "ScavTrap.class.hpp"

class NinjaTrap : public ClapTrap {

public:
	NinjaTrap();
	~NinjaTrap();

	NinjaTrap(const std::string& name);
	NinjaTrap(const NinjaTrap& other);
	NinjaTrap&	operator=(const NinjaTrap& other);
	void		ninjaShoebox(const NinjaTrap& trap);
	void		ninjaShoebox(const ScavTrap& trap);
	void		ninjaShoebox(const FragTrap& trap);
	void		ninjaShoebox(const ClapTrap& trap);

};

#endif
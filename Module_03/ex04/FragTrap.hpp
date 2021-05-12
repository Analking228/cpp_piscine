#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{

public:
	FragTrap();
	~FragTrap();

	FragTrap(const std::string& name);
	FragTrap(const FragTrap& other);
	FragTrap&		operator=(const FragTrap& other);
	void			vaulthunter_dot_exe(std::string const & target);
	virtual void	rangedAttack(const std::string& target);

};

#endif
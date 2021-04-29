#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <ctime>

class Zombie {
public:
	void	announce();
	void	setName(std::string const name);
	void	setType(std::string const name);
	Zombie();
	~Zombie();
private:
    std::string	name;
    std::string	type;
};

#endif
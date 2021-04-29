#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>

class Brain {
private:
	int	lifetime;
public:
	Brain();
	~Brain();

	std::string	identify() const;
};


#endif

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human {
private:
	Brain			brain;
public:
	Human();
	~Human();
	
	std::string		identify() const;
	Brain const&	getBrain();
};

#endif
#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

typedef std::string string;

class Pony
{
private:
	string	name;
	string	color;
	string	birth_place;
	string	advantages;
	int		age;
public:
	Pony();
	Pony(string const n, string const c, int a);
	void	the_sisterstory(void);
	~Pony();
};

#endif
#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>

class Sorcerer
{
private:

	std::string			__Name;
	std::string			__Title;

	Sorcerer();
	
public:
	~Sorcerer();

	Sorcerer(const std::string& name, const std::string& title);
	Sorcerer(const Sorcerer& other);
	
	Sorcerer&			operator=(const Sorcerer& other);
	const std::string&	getName();
	const std::string&	getTitle();
	//void				polymorph();
};

#endif
#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

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
	const std::string&	getName() const;
	const std::string&	getTitle() const;
	void 				polymorph(const Victim&) const;

};

std::ostream&			operator<<(std::ostream& out, const Sorcerer& point);

#endif
#ifndef VICTIM_HPP
# define VICTIM_HPP

# include "Victim.class.hpp"

class Victim : protected VictimClass {

private:
	Victim();

public:
	~Victim();

	Victim(const std::string& name);
	Victim(const Victim& other);
	Victim&						operator=(const Victim& other);
	virtual const std::string&	getName() const;
	virtual void				getPolymorphed() const;

};

std::ostream&						operator<<(std::ostream& out, const Victim& point);

#endif
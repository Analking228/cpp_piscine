#ifndef VICTIM_HPP
# define VICTIM_HPP

# include "AVictim.hpp"

class Victim : protected AVictim {

private:
	Victim();

public:
	virtual	~Victim();

	Victim(const std::string& name);
	Victim(const Victim& other);
	Victim&						operator=(const Victim& other);
	virtual const std::string&	getName() const;
	virtual void				getPolymorphed() const;

};

std::ostream&						operator<<(std::ostream& out, const Victim& point);

#endif
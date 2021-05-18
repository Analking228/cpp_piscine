#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim {

private:
	Peon();

public:
	virtual ~Peon();

	Peon(const std::string& name);
	Peon(const Peon& other);
	Peon&						operator=(const Peon& other);
	virtual const std::string&	getName() const;
	virtual void				getPolymorphed() const;

};

std::ostream&					operator<<(std::ostream& out, const Peon& point);

#endif
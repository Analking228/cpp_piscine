#ifndef VICTIM_CLASS_HPP
# define VICTIM_CLASS_HPP

# include <iostream>

class VictimClass {

protected:
	VictimClass();

	std::string					__Name;

public:
	~VictimClass();
	
	VictimClass(const std::string& name);
	VictimClass(const VictimClass& other);
	VictimClass&				operator=(const VictimClass& other);
	virtual const std::string&	getName() const = 0;
	virtual void				getPolymorphed() const = 0;
};

std::ostream&						operator<<(std::ostream& out, const VictimClass& point);

#endif
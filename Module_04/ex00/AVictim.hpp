#ifndef AVICTIM_HPP
# define AVICTIM_HPP

# include <iostream>

class AVictim {

protected:
	AVictim();

	std::string					__Name;

public:
	virtual	~AVictim();
	
	AVictim(const std::string& name);
	AVictim(const AVictim& other);
	AVictim&				operator=(const AVictim& other);
	virtual const std::string&	getName() const = 0;
	virtual void				getPolymorphed() const = 0;
};

std::ostream&						operator<<(std::ostream& out, const AVictim& point);

#endif
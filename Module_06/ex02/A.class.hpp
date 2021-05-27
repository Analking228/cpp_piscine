#ifndef A_CLASS_HPP
# define A_CLASS_HPP

# include <string>
# include "Base.class.hpp"

class A: public Base {
public:
	A();
	virtual ~A();

	A(const A&);
	A&		operator=(const A&);

};

#endif
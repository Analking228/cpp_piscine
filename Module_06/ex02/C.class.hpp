#ifndef C_CLASS_HPP
# define C_CLASS_HPP

# include <string>
# include "Base.class.hpp"

class C: public Base {
public:
	C();
	virtual ~C();

	C(const C&);
	C&		operator=(const C&);

};

#endif
#ifndef B_CLASS_HPP
# define B_CLASS_HPP

# include <string>
# include "Base.class.hpp"

class B: public Base {
public:
	B();
	virtual ~B();

	B(const B&);
	B&		operator=(const B&);

};

#endif
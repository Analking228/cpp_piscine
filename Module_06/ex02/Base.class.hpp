#ifndef BASE_CLASS_HPP
# define BASE_CLASS_HPP

# include <iostream>
# include <string>

class Base {
public:
	Base();
	virtual ~Base();

	Base(Base const&);
	Base&	operator=(Base const&);

};

#endif
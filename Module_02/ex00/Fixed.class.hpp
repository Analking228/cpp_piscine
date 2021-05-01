#include <iostream>

class Fixed {

private:
	int					fixPointVal;
	static int const	fbits = 8;

public:
	Fixed();
	~Fixed();

	Fixed(Fixed const &fixed);
	Fixed&				operator= (Fixed const &);
	int					getRawBits(void);
};
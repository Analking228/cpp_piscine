#include <iostream>

class Fixed {

private:
	int					fixPointVal;
	static int const	fbits = 8;

public:
	Fixed();
	~Fixed();

	Fixed(const Fixed& other);
	Fixed&				operator= (const Fixed& fixed);
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
};
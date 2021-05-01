#include <iostream>
#include <cmath>

class Fixed {

private:
	int					Value;
	static int const	fbits = 8;

public:
	Fixed();
	~Fixed();

	Fixed(Fixed const &fixed);
	Fixed(int const);
	Fixed(float const);
	Fixed&				operator = (Fixed const &);
	int					toInt() const;
	float				toFloat() const;
	int					getRawBits(void);
	void				setRawBits(int const raw);
};

	std::ostream&		operator << (std::ostream &out, Fixed const &val);

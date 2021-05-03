#include <iostream>
#include <cmath>

class Fixed {

private:
	int					Value;
	static int const	fbits = 8;

public:
	Fixed();
	~Fixed();

	Fixed(const Fixed& other);
	Fixed(const int);
	Fixed(const float);
	Fixed&				operator = (const Fixed&);
	int					toInt() const;
	float				toFloat() const;
	int					getRawBits(void);
	void				setRawBits(const int raw);
};

	std::ostream&		operator << (std::ostream &out, const Fixed& val);

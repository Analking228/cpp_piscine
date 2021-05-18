#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {

private:
	std::string			_Type;
	unsigned int		_Xp;

public:
	Cure();
	virtual ~Cure();

	Cure(const Cure&);

	Cure&				operator=(const Cure&);

	const std::string&	getName() const;
	unsigned int		getXP() const;
	virtual AMateria*	clone() const;
	virtual void		use(ICharacter&);
	
};

#endif
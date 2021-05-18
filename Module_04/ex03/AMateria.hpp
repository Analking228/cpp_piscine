#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {

private:
	AMateria();
	std::string			_Type;
	unsigned int		_Xp;

public:
	AMateria(const std::string& type);
	virtual ~AMateria();
	
	AMateria(const AMateria&);

	AMateria&			operator=(const AMateria&);

	const std::string&	getType() const;
	unsigned int		getXP() const;
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);

};

#endif
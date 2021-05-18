#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {

private:
	std::string			_Type;
	unsigned int		_Xp;

public:
	Ice();
	virtual ~Ice();

	Ice(const Ice&);

	Ice&				operator=(const Ice&);

	const std::string&	getName() const;
	unsigned int		getXP() const;
	virtual AMateria*	clone() const;
	virtual void		use(ICharacter& target);

};

#endif
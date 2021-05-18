#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter {

private:
	Character();
	std::string					_Name;
	AMateria*					_Inv[4];

public:
	Character(const std::string&);
	virtual ~Character();

	Character(const Character&);

	Character&					operator=(const Character&);

	virtual const std::string&	getName() const;
	virtual void				equip(AMateria* m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter& target);

};



#endif
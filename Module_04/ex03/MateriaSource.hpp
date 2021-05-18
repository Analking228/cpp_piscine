#ifndef MATERIASOUREC_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

private:
	AMateria*			_Inv[4];

public:
	MateriaSource();
	virtual ~MateriaSource();

	MateriaSource(const MateriaSource&);

	MateriaSource&		operator=(const MateriaSource&);

	virtual void		learnMateria(AMateria*);
	virtual AMateria*	createMateria(const std::string&);

};


#endif
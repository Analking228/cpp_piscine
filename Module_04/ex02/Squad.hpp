#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "TacticalMarine.hpp"

class Squad : public ISquad {

private:
	ISpaceMarine**			__Squad;
	int						__Brothers;

public:
	Squad();
	virtual ~Squad();

	Squad(const Squad&);
	Squad&					operator=(const Squad&);

	virtual int				getCount() const;
	virtual ISpaceMarine*	getUnit(int) const;
	virtual int				push(ISpaceMarine*);

};

#endif
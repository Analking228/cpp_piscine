#include "Squad.hpp"

Squad::Squad() : __Squad(NULL), __Brothers(0) {
	std::cout << "Marine squad deployed" << std::endl;
}

Squad::Squad(const Squad& other) : __Brothers(other.getCount()) {

	for (int i = 0; i < __Brothers; i++)
		push(other.getUnit(i)->clone());
}

int				Squad::getCount() const{

	return this->__Brothers;
}

ISpaceMarine*	Squad::getUnit(int brother) const{

	if (!(__Brothers) || __Brothers < 0)
		return NULL;
	if (__Brothers < (brother + 1))
		return NULL;
	return &(*__Squad[brother]);
}

int				Squad::push(ISpaceMarine* brother) {

	if (!brother)
        return this->__Brothers;
    if (this->__Squad) {
        
		for (int i = 0; i < __Brothers; i++) {
            if (__Squad[i] == brother)
                return __Brothers;
        }

        ISpaceMarine **newSquad = new ISpaceMarine*[__Brothers + 1];

        for (int i = 0; i < __Brothers; i++)
            newSquad[i] = __Squad[i];
        newSquad[__Brothers] = new TacticalMarine(*brother);
        __Brothers++;
        delete [] __Squad;
        __Squad = newSquad;
    }
    else {
        __Brothers++;
        __Squad = new ISpaceMarine*[__Brothers];
        *__Squad = brother;
    }
    return __Brothers;
}

Squad&			Squad::operator=(const Squad& other) {

	if (__Brothers) {
		for (int i = 0; i < __Brothers; i++)
			delete __Squad[i];
		__Brothers = 0;
	}
	for (int i = 0; i < other.__Brothers; i++)
		push(other.getUnit(i)->clone());
	return *this;
}

Squad::~Squad() {

	for (int i = 0; i < __Brothers; i++)
		delete __Squad[i];
	delete [] __Squad;
}
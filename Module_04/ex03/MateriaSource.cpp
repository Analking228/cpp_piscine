#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {}

MateriaSource::MateriaSource(const MateriaSource& other) {
	
	for (int i = 0; i < 4; i++)
		_Inv[i] = other._Inv[i]->clone();
}

void				MateriaSource::learnMateria(AMateria* materia) {

	for(int i = 0; i < 4; i++)
		if (_Inv[i] == nullptr){
			_Inv[i] = materia->clone();
			return ;
		}
}

AMateria*			MateriaSource::createMateria(const std::string& type) {

	for (int i = 0; i < 4; i++)
		if (_Inv[i] != nullptr)
			if (_Inv[i]->getType() == type)
				return _Inv[i];
	return nullptr;
}

MateriaSource&		MateriaSource::operator=(const MateriaSource& other) {

	for (int i = 0; i < 4; i++) {
		if (_Inv[i])
			delete _Inv[i];
		if (other._Inv[i])
			_Inv[i] = other._Inv[i]->clone();
		else
			_Inv[i] = nullptr;
	}
	return *this;
}

MateriaSource::~MateriaSource() {}
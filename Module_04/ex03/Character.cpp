#include "Character.hpp"

Character::Character(const std::string& name) : _Name(name) {}

Character::Character(const Character& other) : _Name(other._Name) {

	for(int i = 0; i < 4; i++)
		if(other._Inv[i] != nullptr)
			_Inv[i] = other._Inv[i]->clone();
}

const std::string&		Character::getName() const{

	return _Name;
}

void					Character::equip(AMateria* m) {

	for (int i = 0; i < 4; i++)
		if (_Inv[i] == nullptr) {
			_Inv[i] = m->clone();
			return ;
		}
}

void					Character::unequip(int idx) {

	if (idx >= 0 && idx <= 3)
		_Inv[idx] = nullptr;
}

void					Character::use(int idx, ICharacter& target) {

	if (idx >= 0 && idx <= 3 && _Inv[idx])
		_Inv[idx]->use(target);
}

Character&				Character::operator=(const Character& other) {

	for(int i = 0; i < 4; i++)
		if(other._Inv[i] == nullptr) {
			if (_Inv[i])
				delete _Inv[i];
			_Inv[i] = nullptr;
		}
		else {

			if (_Inv[i])
				delete _Inv[i];
			_Inv[i] = other._Inv[i]->clone();
		}
	return *this;
}

Character::~Character() {

	for(int i = 0; i < 4; i++)
		if(_Inv[i] != nullptr)
			delete _Inv[i];
}
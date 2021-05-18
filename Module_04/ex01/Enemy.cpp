#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string& type) : __Type(type), __HP(hp) {

}

Enemy::Enemy(const Enemy& other) : __Type(other.__Type), __HP(other.__HP){

}

int					Enemy::getHP() const{

	return this->__HP;
}

std::string			Enemy::getType() const{

	return this->__Type;
}

void				Enemy::takeDamage(int dmg) {

	if (this->__HP > 0)
		this->__HP -= dmg;
	if (this->__HP < 0)
		this->__HP = 0;
}

Enemy&				Enemy::operator=(const Enemy& other) {

	this->__Type = other.__Type;
	this->__HP = other.__HP;
	return *this;
}

Enemy::~Enemy() {

}
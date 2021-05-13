#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string& type) : __HP(hp), __Type(type) {

}

Enemy::Enemy(const Enemy& other) : __HP(other.__HP), __Type(other.__Type){

}

int					Enemy::getHP() const{

	return this->__HP;
}

std::string			Enemy::getType() const{

	return this->__Type;
}

Enemy&				Enemy::operator=(const Enemy& other) {

	this->__HP = other.__HP;
	this->__Type = other.__Type;
	return *this;
}

Enemy::~Enemy() {

}
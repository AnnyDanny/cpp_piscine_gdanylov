#include <iostream>
#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {
	// std::cout << "Enemy Constructor called." << std::endl;
	return ;
}

Enemy::~Enemy() {
	// std::cout << "Enemy Destructor called" << std::endl;
}

Enemy::Enemy(Enemy const &copy) {
	*this = copy;
}

std::string Enemy::getType() const {
	return this->_type;
}

int Enemy::getHP() const {
	return this->_hp;
}

void Enemy::takeDamage(int amount) {
	if (_hp > 0 && amount > 0) {
		_hp -= amount;		
	}
	_hp = (_hp < 0) ? 0 : _hp;
}

Enemy & Enemy::operator=(const Enemy &over) {
	_hp = over._hp;
	_type = over._type;
	return *this;
}

 void Enemy::setHP(int amount) {
 	_hp += amount;
 }
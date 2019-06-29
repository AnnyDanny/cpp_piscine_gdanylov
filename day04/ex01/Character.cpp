#include "Character.hpp"


Character::Character() : _AP(40), _weapon(NULL) {
	return;
}
Character::Character(const std::string &name ):  _name(name), _AP(40), _weapon(NULL) {
	return;
}
Character::~Character() {
	return;
}

Character::Character(const Character & copy) {
	*this = copy;
}


std::string				Character::getName() const { 
	return this->_name;
}

int	Character::getAP() const { 
	return this->_AP;
}

AWeapon	*Character::getWeapon() const {
	return this->_weapon;
}

void Character::equip(AWeapon *weapon) {
	_weapon = weapon;
}

void Character::recoverAP() {
	_AP += 10;
	_AP = (_AP > 40 ) ? 40 : _AP;
}

Character & Character::operator=(const Character &over) {
	_name = over._name;
	_AP = over._AP;
	_weapon = over._weapon;
	return *this;
}

std::ostream &operator<<(std::ostream &o, const Character &character) {
	o << character.getName() << " has " << character.getAP() << " AP and ";

	if ( character.getWeapon() != NULL ) {
		o << "wields a " << character.getWeapon()->getName() << std::endl;
	}
	else {
		o << "is unarmed" << std::endl;
	}
	return o;
}

void Character::attack(Enemy *enemy) {
	if (enemy->getHP() <= 0)
		return ;
	if ( this->_weapon != NULL && _AP >= _weapon->getAPCost() && enemy->getHP() > 0) {

		std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;

		_AP -= _weapon->getAPCost();
		_weapon->attack();
		int amount = _weapon->getDamage();
		enemy->takeDamage(amount);
	}
	if (enemy->getHP() <= 0)
		delete enemy;
}



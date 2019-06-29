#include <iostream>
#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) {
	// std::cout << "AWeapon Constructor called. Name: " << _name << " Apcost: " << _apcost << " Damage: " << _damage << std::endl;

}

AWeapon::AWeapon(AWeapon const &copy) {
	*this = copy;
}

AWeapon::~AWeapon() {
	// std::cout << "AWeapon Destructor called" << std::endl;

}

AWeapon & AWeapon::operator=(const AWeapon &over) {
    _name = over._name;
    _apcost = over._apcost;
    _damage = over._damage;
    return *this;
}

	std::string AWeapon::getName() const {
		return _name;
	}
    int AWeapon::getAPCost() const {
    	return _apcost;
    }
    int AWeapon::getDamage() const {
    	return _damage;
    }
    // void AWeapon::attack() const = 0 {

    // }
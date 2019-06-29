#include <iostream>
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
	// std::cout << "PlasmaRifle Constructor called." << std::endl;
	return ;
}

PlasmaRifle::~PlasmaRifle() {
	// std::cout << "PlasmaRifle Destructor called." << std::endl;
	return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy) : AWeapon(copy) {
	*this = copy;
}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}


// PlasmaRifle & PlasmaRifle::operator=(const PlasmaRifle &over) {
// 	return AWeapon::operator=(over);
// }
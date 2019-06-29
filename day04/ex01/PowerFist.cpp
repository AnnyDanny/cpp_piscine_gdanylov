#include <iostream>
#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
	// std::cout << "PowerFist Constructor called." << std::endl;
	return ;
}

PowerFist::~PowerFist() {
	// std::cout << "PowerFist Destructor called." << std::endl;
	return;
}

PowerFist::PowerFist(PowerFist const &copy) : AWeapon(copy){
	*this = copy;
}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

// PowerFist & PowerFist::operator=(const PowerFist &over) {
// 	return AWeapon::operator=(over);
// }
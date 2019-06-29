#include <iostream>
#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant( const SuperMutant & copy) : Enemy(copy) {
	*this = copy;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh ..." << std::endl;
}

// SuperMutant & SuperMutant::operator=(const SuperMutant &over) {
// 	return Enemy::operator=(over);
// }


void		SuperMutant::takeDamage(int amount) {
	Enemy::takeDamage((amount - 3));
}
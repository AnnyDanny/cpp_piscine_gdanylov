#include <iostream>
#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion( const RadScorpion & copy) : Enemy(copy){
	*this = copy;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

// RadScorpion & RadScorpion::operator=(const RadScorpion &over) {
// 	return Enemy::operator=(over);
// }

// void RadScorpion::takeDamage(int) {

// }
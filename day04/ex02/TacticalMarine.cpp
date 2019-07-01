#include "TacticalMarine.hpp"
#include <iostream>

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle" << std::endl; 
}

TacticalMarine::~TacticalMarine() {
	std::cout << "“Aaargh ...”" <<std::endl;
	
}

ISpaceMarine* TacticalMarine::clone() const {
	TacticalMarine *tactical = new TacticalMarine;
	*tactical = *this;
	return tactical;
}

void TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT !" <<std::endl;
}

void TacticalMarine::rangedAttack()const {
	std::cout << "* attacks with bolter *" <<std::endl;
}

void TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with chainsword *" <<std::endl;
}

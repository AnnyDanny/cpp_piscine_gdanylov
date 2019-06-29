#include "TacticalMarine.cpp"

TacticalMarine::TacticalMarine() {

}

TacticalMarine::~TacticalMarine() {
	std::cout << "“Aaargh ...”" <<std::endl;
	
}

ISpaceMarine* TacticalMarine::clone() const {
	TacticalMarine *tactical = new TacticalMarine;
	*tactical = *this;
	return tactical;
}

void TacticalMarine::battleCry(){
	std::cout << "For the holy PLOT !" <<std::endl;
}

void TacticalMarine::rangedAttack(){
	std::cout << "* attacks with bolter *" <<std::endl;
}

void TacticalMarine::meleeAttack(){
	std::cout << "* attacks with chainsword *" <<std::endl;
}

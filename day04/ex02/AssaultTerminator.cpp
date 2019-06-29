#include "AssaultTerminator.hpp"

AssultTerminator::AssultTerminator() {
	std::cout << "* teleports from space *" <<std::endl;
	
}

AssultTerminator::~AssultTerminator() {
	std::cout << "I’ll be back .." <<std::endl;
	
}

ISpaceMarine* AssultTerminator::clone() const {
	AssultTerminator *tactical = new AssultTerminator;
	*tactical = *this;
	return tactical;
}

void AssultTerminator::battleCry(){
	std::cout << "This code is unclean. PURIFY IT !" <<std::endl;
}

void AssultTerminator::rangedAttack(){
	std::cout << "* does nothing *" <<std::endl;
}

void AssultTerminator::meleeAttack(){
	std::cout << "* attacks with chainfists *" <<std::endl;
}
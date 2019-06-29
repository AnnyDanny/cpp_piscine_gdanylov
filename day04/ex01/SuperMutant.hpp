#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy {
	public:
	SuperMutant();
	SuperMutant(const SuperMutant &copy);
	~SuperMutant();
	virtual void takeDamage(int);
	// SuperMutant & operator=(const SuperMutant &over);
};



#endif
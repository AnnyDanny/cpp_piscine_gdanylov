#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy {
	public:
	RadScorpion();
	RadScorpion(const RadScorpion &copy);
	~RadScorpion();
	// RadScorpion & operator=(const RadScorpion &over);
	// virtual void takeDamage(int);
};



#endif
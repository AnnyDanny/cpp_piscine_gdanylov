#ifndef POWERFIRST_HPP
#define POWERFIRST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {
	public:
		PowerFist();
		~PowerFist();
		PowerFist(PowerFist const &copy);
		virtual void attack() const;
		// PowerFist & operator=(const PowerFist &over);
};



#endif
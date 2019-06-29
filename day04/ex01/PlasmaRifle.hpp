#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{
	public:
		PlasmaRifle();
		~PlasmaRifle();

		PlasmaRifle(PlasmaRifle const &copy);
		virtual void attack() const;
		// PlasmaRifle & operator=(const PlasmaRifle &over);
};




#endif
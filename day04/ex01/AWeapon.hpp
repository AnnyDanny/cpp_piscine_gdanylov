#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon {
	private:
		std::string _name;
		int _apcost;
		int _damage;
	public:
        AWeapon(std::string const & name, int apcost, int damage);
        ~AWeapon();
         AWeapon(const AWeapon &copy);

        std::string getName() const;
        int getAPCost() const;
        int getDamage() const;

        virtual void attack() const = 0;

         AWeapon & operator=(const AWeapon &over);
};


// У оружия есть имя, количество очков урона, 
// нанесенных при попадании, и стоимость стрельбы в AP (очки действия).
// • Оружие издает определенные звуки и световые эффекты, 
// когда вы атакуете его (). Это будет отложено до наследующих классов.

// Constructor
// Destructor
// Copy constructor
// & Operation overload =

#endif
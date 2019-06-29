#include "AWeapon.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"

int main()
{
	std::cout << std::endl << "*************~~~~~~~~~~BASIC~TESTS~~~~~~~~*************" << std::endl << std::endl;

	Character* zaz = new Character("zaz");
	std::cout << *zaz;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;


	Character *lol = new Character("gdanylov");
	Enemy *supermutant =	new SuperMutant();
	Enemy *scorpio = new RadScorpion();


	AWeapon *w1 = new PowerFist();
	AWeapon *w2 = new PlasmaRifle();

	lol->equip(w1);
	std::cout << std::endl << "*************~~~~~~~~~~SUPERMUTANT~TESTS~~~~~~~~*************" << std::endl << std::endl;
	
	while(supermutant->getHP() > 0 && lol->getAP() > 0)
	{
		lol->attack(supermutant);
		std::cout << *lol;
	}

	std::cout << std::endl << "*************~~~~~~~~~~WE~ARE~OUT~OF~AP~TESTS~~~~~~~~*************" << std::endl << std::endl;

	while(scorpio->getHP() > 0 && lol->getAP() > 0)
	{
		lol->attack(scorpio);
		std::cout << *lol;
	}

	lol->attack(scorpio);
	std::cout << std::endl << "                      Recovery ........                     " << std::endl << std::endl;

	lol->recoverAP();
	lol->recoverAP();
	lol->recoverAP();
	lol->recoverAP();
	lol->recoverAP();
	std::cout << *lol;

	lol->attack(supermutant);
	std::cout << *lol;

	std::cout << std::endl << "*************~~~~~~~~~~~~~~SCORPIO~TESTS~~~~~~~~~~~~*************" << std::endl << std::endl;


	while(scorpio->getHP() > 0 && lol->getAP() > 0)
	{
		lol->attack(scorpio);
		std::cout << *lol;
	}
	std::cout << std::endl << "                      Recovery ........                     " << std::endl << std::endl;
	lol->recoverAP();
	lol->recoverAP();
	lol->recoverAP();
	lol->recoverAP();
	lol->recoverAP();
	std::cout << *lol;

	lol->equip(NULL);
	std::cout << *lol;
	lol->equip(w2);
	std::cout << *lol;


	std::cout << std::endl << "*************~~~~~~~~~~~~~~THE~END~~~~~~~~~~~~~~*************" << std::endl;
	
	return 0;
}

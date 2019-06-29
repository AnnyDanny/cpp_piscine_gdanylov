#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character {

public:
	Character();
	Character(const std::string &name);
	Character(const Character &copy);
	~Character(void);
	std::string			getName( void ) const;
	int					getAP( void ) const;
	AWeapon				*getWeapon( void ) const;
	void				recoverAP( void );
	void				equip(AWeapon *);
	void				attack(Enemy *);
	Character & operator=(const Character &over);

private:
	std::string		_name;
	int				_AP;
	AWeapon			*_weapon;

};

std::ostream & operator<<(std::ostream &o, const Character &over);

#endif	
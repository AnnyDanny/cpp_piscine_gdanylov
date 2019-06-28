#include <iostream>
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


NinjaTrap::NinjaTrap() : ClapTrap() {
	this->level = 1;
  this->dead = false;
  this->hit_points = 100;
  this->max_hit_points = 100;
  this->energy_points = 50;
  this->max_energy_points = 50;
  this->level = 1;
  this->melAttackDam = 20;
  this->rangAttackDam = 15;
  this->armorDamRed = 3;
  std::cout << "NinjaTrap Default constructor." << std::endl;
}

NinjaTrap::NinjaTrap(std::string usname) : ClapTrap() {
	this->name = usname;
  this->dead = false;
  this->hit_points = 100;
  this->max_hit_points = 100;
  this->energy_points = 50;
  this->max_energy_points = 50;
  this->level = 1;
  this->melAttackDam = 20;
  this->rangAttackDam = 15;
  this->armorDamRed = 3;
  std::cout << "NinjaTrap name constructor" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & copy) : ClapTrap() {
	*this = copy;
	std::cout << "NinjaTrap copy Constructor: Next starting." << std::endl;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "NinjaTrap Destructor" << std::endl;
	return ;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & over) {
	if (this != &over) {
		this->name = over.get_name();
	}
	return (*this);
}

void NinjaTrap:: ninjaShoebox(ClapTrap &clapTrap) {
	if ( this->energy_points >= 25 )
  {
    this->energy_points -= 25;
    std::cout << "Ninja ninja-sassinates "  << clapTrap.get_name() << " with unseen cruelty and skill... " << std::endl;
    clapTrap.takeDamage(90);
  }
  else
  {
    std::cout << "Oh maaaan.... I am  out of energy points and cannot hit " << clapTrap.get_name() << "!" << std::endl;
  }
}

void NinjaTrap:: ninjaShoebox(FragTrap &fragTrap) {
  if ( this->energy_points >= 25 )
  {
    this->energy_points -= 25;
    std::cout << "Ninja ninja-sassinates "  << fragTrap.get_name() << " with unseen cruelty and skill... " << std::endl;
    fragTrap.takeDamage(90);
  }
  else
  {
    std::cout << "Oh maaaan.... I am  out of energy points and cannot hit " << fragTrap.get_name() << "!" << std::endl;
  }
}

void NinjaTrap:: ninjaShoebox(ScavTrap &scavTrap) {
  if ( this->energy_points >= 25 )
  {
    this->energy_points -= 25;
    std::cout << "Ninja ninja-sassinates "  << scavTrap.get_name() << " with unseen cruelty and skill... " << std::endl;
    scavTrap.takeDamage(90);
  }
  else
  {
    std::cout << "Oh maaaan.... I am  out of energy points and cannot hit " << scavTrap.get_name() << "!" << std::endl;
  }
}

void NinjaTrap:: ninjaShoebox(NinjaTrap &ninjaTrap) {
  if ( this->energy_points >= 25 )
  {
    this->energy_points -= 25;
    std::cout << "Ninja ninja-sassinates "  << ninjaTrap.get_name() << " with unseen cruelty and skill... " << std::endl;
    ninjaTrap.takeDamage(90);
  }
  else
  {
    std::cout << "Oh maaaan.... I am  out of energy points and cannot hit " << ninjaTrap.get_name() << "!" << std::endl;
  }
}






















#include <iostream>
#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : hit_points(100), max_hit_points(100), energy_points(100), max_energy_points(100),
						melAttackDam(30), rangAttackDam(20), armorDamRed(5) {
	this->level = 1;
	std::cout << "ClapTrap Default constructor: engine started." << std::endl;
}

ClapTrap::ClapTrap(std::string usname) : hit_points(100), max_hit_points(100), energy_points(100), max_energy_points(100),
						melAttackDam(30), rangAttackDam(20), armorDamRed(5) {
	name = usname;
	std::cout << "ClapTrap New Constructor: what is this guy?" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & copy) : hit_points(100), max_hit_points(100), energy_points(100), max_energy_points(100),
						melAttackDam(30), rangAttackDam(20), armorDamRed(5) {
	*this = copy;
	std::cout << "ClapTrap Copy Constructor: Next starting." << std::endl;
}

int ClapTrap::get_hitPoints() const {
	return (this->hit_points);
}

int ClapTrap::get_maxHitPoints() const {
	return (this->max_hit_points);
}

int ClapTrap::get_energyPoints() const {
	return (this->energy_points);
}

int ClapTrap::get_maxEnergyPoints() const {
	return (this->max_energy_points);
}

int ClapTrap::get_melAttackDam() const {
	return (this->melAttackDam);
}

int ClapTrap::get_rangAttackDam() const {
	return (this->rangAttackDam);
}

int ClapTrap::get_armorDamRed() const {
	return (this->armorDamRed);
}

std::string ClapTrap::get_name()  const
{
  return (this->name);
}


ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor" << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & over) {
	this->hit_points = over.get_hitPoints();
	this->max_hit_points = over.get_maxHitPoints();
	this->energy_points = over.get_energyPoints();
	this->max_energy_points = over.get_maxEnergyPoints();
	this->melAttackDam = over.get_melAttackDam();
	this->rangAttackDam = over.get_rangAttackDam();
	this->armorDamRed = over.get_armorDamRed();
	this->name = over.get_name();
	return (*this);
}

void ClapTrap::rangedAttack(std::string const & target) {
	this->hit_points = hit_points - rangAttackDam;
	  std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing "
            << rangAttackDam + armorDamRed << " points of damage!" << std::endl;
    if (hit_points < 0) {
    	this->hit_points = max_hit_points;
    	this->level++;
    	std::cout << "You reached new level! "<< level << " Level! Congrats!" << std::endl;
    }
}

void ClapTrap::meleeAttack(std::string const & target)
{
  this->hit_points = hit_points - melAttackDam;
  std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing "
            << melAttackDam << " points of damage!" << std::endl;
  if (hit_points < 0)
  {
    this->hit_points = max_hit_points;
    this->level++;
    std::cout << "You reached a new " << level << " level!Congrats!" << std::endl;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
	if ((energy_points - (int)amount - armorDamRed) >= 0)
		this->energy_points = energy_points - amount - armorDamRed;
	else
		this->armorDamRed = 0;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if ((int)(energy_points + amount) <= max_energy_points)
		this->energy_points += amount;
	else
		energy_points = max_energy_points;
}























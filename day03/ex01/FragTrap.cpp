#include <iostream>
#include "FragTrap.hpp"


FragTrap::FragTrap() : hit_points(100), max_hit_points(100), energy_points(100), max_energy_points(100),
						melAttackDam(30), rangAttackDam(20), armorDamRed(5) {
	this->level = 1;
	this->dead = false;
	std::cout << "Default constructor: engine started." << std::endl;
}

FragTrap::FragTrap(std::string usname) : hit_points(100), max_hit_points(100), energy_points(100), max_energy_points(100),
						melAttackDam(30), rangAttackDam(20), armorDamRed(5) {
	name = usname;
	this->dead = false;
	std::cout << "New Constructor: what is this guy?" << std::endl;
}

FragTrap::FragTrap(FragTrap const & copy) : hit_points(100), max_hit_points(100), energy_points(100), max_energy_points(100),
						melAttackDam(30), rangAttackDam(20), armorDamRed(5) {
	*this = copy;
	std::cout << "Copy Constructor: Next starting." << std::endl;
}

int FragTrap::get_hitPoints() const {
	return (this->hit_points);
}

int FragTrap::get_maxHitPoints() const {
	return (this->max_hit_points);
}

int FragTrap::get_energyPoints() const {
	return (this->energy_points);
}

int FragTrap::get_maxEnergyPoints() const {
	return (this->max_energy_points);
}

int FragTrap::get_melAttackDam() const {
	return (this->melAttackDam);
}

int FragTrap::get_rangAttackDam() const {
	return (this->rangAttackDam);
}

int FragTrap::get_armorDamRed() const {
	return (this->armorDamRed);
}

std::string FragTrap::get_name()  const
{
  return (this->name);
}


FragTrap::~FragTrap() {
	std::cout << "Destructor" << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & over) {
	this->hit_points = over.get_hitPoints();
	this->dead = over.dead;
	this->max_hit_points = over.get_maxHitPoints();
	this->energy_points = over.get_energyPoints();
	this->max_energy_points = over.get_maxEnergyPoints();
	this->melAttackDam = over.get_melAttackDam();
	this->rangAttackDam = over.get_rangAttackDam();
	this->armorDamRed = over.get_armorDamRed();
	this->name = over.get_name();
	return (*this);
}

void FragTrap::rangedAttack(std::string const & target) {
	this->hit_points = hit_points - rangAttackDam;
	  std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing "
            << rangAttackDam + armorDamRed << " points of damage!" << std::endl;
    if (hit_points < 0) {
    	this->hit_points = max_hit_points;
    	this->level++;
    	std::cout << "You reached new level! "<< level << " Level! Congrats!" << std::endl;
    }
}

void FragTrap::meleeAttack(std::string const & target)
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

void FragTrap::takeDamage(unsigned int amount) {
	if ((energy_points - (int)amount - armorDamRed) >= 0)
		this->energy_points = energy_points - amount - armorDamRed;
	else {
		dead = true;
		this->armorDamRed = 0;
	}
}

void FragTrap::beRepaired(unsigned int amount) {
	if ((int)(energy_points + amount) <= max_energy_points)
		this->energy_points += amount;
	else
		energy_points = max_energy_points;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (this->energy_points >= 25) {
		const char *attacks[] = {"Athena", "Wilhelm", "Nisha", "Claptrap", "Jack", "Aurelia"};
		std::srand(time(0));
		std::cout << "FR4G-TP " << this->name << " attacks " << target << " with " << attacks[rand() % 5] << " at range, causing "
              << melAttackDam << " points of damage!" << std::endl;
        this->energy_points -= 25;
	}
	else {
		beRepaired(50);
		std::cout << "Energy repired on 50 points" << std::endl;
	}
}






















#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"


FragTrap::FragTrap() : ClapTrap() {
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
  std::cout << "FragTrap Default constructor." << std::endl;
}

FragTrap::FragTrap(std::string usname) : ClapTrap() {
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
  std::cout << "FragTrap name constructor" << std::endl;
}

FragTrap::FragTrap(FragTrap const & copy) : ClapTrap() {
	*this = copy;
	std::cout << "FragTrap copy Constructor: Next starting." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor" << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & over) {
	if (this != &over) {
		this->name = over.get_name();
	}
	return (*this);
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






















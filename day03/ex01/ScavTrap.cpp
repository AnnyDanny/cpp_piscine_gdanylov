#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	individuality = 3;
  this->level = 1;
  this->hit_points = 100;
  this->max_hit_points = 100;
  this->energy_points = 50;
  this->max_energy_points = 50;
  this->level = 1;
  this->melAttackDam = 20;
  this->rangAttackDam = 15;
  this->armorDamRed = 3;
  std::cout << "Default daughter constructor." << std::endl;
}

ScavTrap::ScavTrap(std::string usname) {
	name = usname;
  individuality = 8;
  this->hit_points = 100;
  this->max_hit_points = 100;
  this->energy_points = 50;
  this->max_energy_points = 50;
  this->level = 1;
  this->melAttackDam = 20;
  this->rangAttackDam = 15;
  this->armorDamRed = 3;
  std::cout << "Name daughter constructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & copy) {
	std::cout << "Copy daughter constructor." << std::endl;
  *this = copy;
}

ScavTrap::~ScavTrap() {
	std::cout << "Daughter Destructor" << std::endl;
  return ;
}

int ScavTrap::get_hitPoints() const {
	return (this->hit_points);
}

int ScavTrap::get_maxHitPoints() const {
	return (this->max_hit_points);
}

int ScavTrap::get_energyPoints() const {
	return (this->energy_points);
}

int ScavTrap::get_maxEnergyPoints() const {
	return (this->max_energy_points);
}

int ScavTrap::get_melAttackDam() const {
	return (this->melAttackDam);
}

int ScavTrap::get_rangAttackDam() const {
	return (this->rangAttackDam);
}

int ScavTrap::get_armorDamRed() const {
	return (this->armorDamRed);
}

std::string ScavTrap::get_name()  const
{
  return (this->name);
}

ScavTrap & ScavTrap::operator=(ScavTrap const & over) {
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


void ScavTrap::rangedAttack(std::string const & target) {
	this->hit_points = hit_points - rangAttackDam;
	  std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing "
            << rangAttackDam + armorDamRed << " points of damage!" << std::endl;
    if (hit_points < 0) {
    	this->hit_points = max_hit_points;
    	this->level++;
    	std::cout << "You reached new level! "<< level << " Level! Congrats!" << std::endl;
    }
}

void ScavTrap::meleeAttack(std::string const & target)
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

void ScavTrap::takeDamage(unsigned int amount) {
	if ((energy_points - (int)amount - armorDamRed) >= 0)
		this->energy_points = energy_points - amount - armorDamRed;
	else
		this->armorDamRed = 0;
}

void ScavTrap::beRepaired(unsigned int amount) {
	if ((int)(energy_points + amount) <= max_energy_points)
		this->energy_points += amount;
	else
		energy_points = max_energy_points;
}

void ScavTrap::challengeNewcomer() {
	this->individuality--;
  const char *challenges[] = { "The Eat It or Wear It Challenge", "Try Not to Laugh",
  "The Whisper Challenge", "Speed Drawing", " Chubby Bunny", "Innuendo Bingo",
  "The Cinnamon Challenge", "Say Anything", "Bean Boozled Challenge"};
  std::srand(time(0));
  std::cout << "New random challange is: " << challenges[rand() % 9] << std::endl;
}











































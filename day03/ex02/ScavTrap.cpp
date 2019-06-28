#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
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
  std::cout << "ScavTrap Default constructor." << std::endl;
}

ScavTrap::ScavTrap(std::string usname) : ClapTrap() {
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
  std::cout << "ScavTrap Name constructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & copy) : ClapTrap()  {
	std::cout << "ScavTrap Copy constructor." << std::endl;
  *this = copy;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor" << std::endl;
  return ;
}


ScavTrap & ScavTrap::operator=(ScavTrap const & over) {
  if (this != &over) {
	 this->name = over.get_name();
  }
	return (*this);
}

void ScavTrap::challengeNewcomer() {
	this->individuality--;
  const char *challenges[] = { "The Eat It or Wear It Challenge", "Try Not to Laugh",
  "The Whisper Challenge", "Speed Drawing", " Chubby Bunny", "Innuendo Bingo",
  "The Cinnamon Challenge", "Say Anything", "Bean Boozled Challenge"};
  std::srand(time(0));
  std::cout << "New random challange is: " << challenges[rand() % 9] << std::endl;
}











































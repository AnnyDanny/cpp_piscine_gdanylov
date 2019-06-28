#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
  ClapTrap Parent1("Parent");
  ClapTrap Parent2(Parent1);
  ClapTrap Parent3;
  Parent3 = Parent2;

  while (Parent1.level <= 1)
  {
    Parent1.rangedAttack("zombie");
    Parent1.meleeAttack("enemy");
    Parent1.takeDamage(20);
  }
  while (Parent2.level <= 2)
  {
    Parent2.rangedAttack("zombie");
    Parent2.meleeAttack("enemy");
    Parent2.takeDamage(20);
  }
  while (Parent3.level <= 3)
  {
    Parent3.rangedAttack("zombie");
    Parent3.meleeAttack("enemy");
    Parent3.takeDamage(20);
  }

  FragTrap Jack1("Jack");
  FragTrap Jack2(Jack1);
  FragTrap Jack3;
  Jack3 = Jack2;

  while (Jack1.level <= 1)
  {
    Jack1.rangedAttack("zombie");
    Jack1.meleeAttack("enemy");
    Jack1.vaulthunter_dot_exe("random enemy");
    Jack1.takeDamage(20);
  }
  while (Jack2.level <= 2)
  {
    Jack2.rangedAttack("zombie");
    Jack2.meleeAttack("enemy");
    Jack2.vaulthunter_dot_exe("random enemy");
    Jack2.takeDamage(20);
  }
  while (Jack3.level <= 3)
  {
    Jack3.rangedAttack("zombie");
    Jack3.meleeAttack("enemy");
    Jack3.vaulthunter_dot_exe("random enemy");
    Jack3.takeDamage(20);
  }

  ScavTrap Door1("Pomidoor");
  ScavTrap Door2(Door1);
  ScavTrap Door3;
  Door3 = Door2;
  while (Door1.individuality > 2)
  {
    Door1.rangedAttack("IRON door");
    Door1.meleeAttack("WOOD door");
    Door1.challengeNewcomer();
  }
  while (Door2.individuality > 1)
  {
    Door2.rangedAttack("IRON door");
    Door2.meleeAttack("WOOD door");
    Door2.challengeNewcomer();
  }
  while (Door3.individuality > 0)
  {
    Door3.rangedAttack("IRON door");
    Door3.meleeAttack("WOOD door");
    Door3.challengeNewcomer();
  }
  return 0;
}

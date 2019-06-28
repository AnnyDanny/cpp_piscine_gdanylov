#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
  FragTrap Jack1("Jack");
  FragTrap Jack2(Jack1);
  FragTrap Jack3;
  Jack3 = Jack2;

  while (Jack1.level <= 2 && Jack1.dead != true)
  {
    Jack1.rangedAttack("alien rival");
    Jack1.meleeAttack("enemy");
    Jack1.vaulthunter_dot_exe("random enemy");
    Jack1.takeDamage(20);
  }
  while (Jack2.level <= 3 && Jack2.dead != true)
  {
    Jack2.rangedAttack("alien rival");
    Jack2.meleeAttack("enemy");
    Jack2.vaulthunter_dot_exe("random enemy");
    Jack2.takeDamage(20);
  }
  while (Jack3.level <= 4 && Jack3.dead != true)
  {
    Jack3.rangedAttack("alien rival");
    Jack3.meleeAttack("enemy");
    Jack3.vaulthunter_dot_exe("random enemy");
    Jack3.takeDamage(20);
  }
  return 0;
}
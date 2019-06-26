#include <iostream>
#include "Human.hpp"
#include "Brain.hpp"

Human::Human()
{
  std::cout << "Human Constructor called" << std::endl;
}

Human::~Human()
{
  std::cout << "Human Destructor called" << std::endl;
}

std::string Human::identify()
{
  return (br_elem.identify());
}

Brain const &Human::getBrain()
{
  return (br_elem);
}
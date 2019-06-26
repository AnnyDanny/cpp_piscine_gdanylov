#include <cstdlib>
#include <iomanip>
#include <sstream>
#include "Brain.hpp"
#include "Human.hpp"

Brain::Brain()
{
  std::cout << "Brain Constructor called" << std::endl;
  size = 1;
  owner = "human";
}

Brain::~Brain()
{
  std::cout << "Brain Destructor called" << std::endl;
}

std::string Brain::identify() const
{
  int i = 0;
  uintptr_t addr = reinterpret_cast<uintptr_t>(this);
  std::stringstream stream;
  stream << "0x";
  stream << std::hex << addr;
  std::string adress(stream.str());
  while (adress[i])
  {
    if (adress[i] >= 'a' && adress[i] <= 'z' && i != 1)
      adress[i] = (char)adress[i] - 32;
    i++;
  }
  return (adress);
}
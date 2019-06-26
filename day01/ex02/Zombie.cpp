#include "Zombie.hpp"
Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
	std::cout  << "Zombie " << this->name << " has been born!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie has been destroyed!" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}
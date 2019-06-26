#include "Zombie.hpp"


Zombie::Zombie()
{
	std::cout  << " 🧟‍♀️ ";
}

Zombie::~Zombie()
{
	std::cout << "Zombie has been destroyed!" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}
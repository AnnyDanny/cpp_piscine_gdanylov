#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() { 
	std::cout << "ZombieEvent Constructor called" << std::endl;
	return;
}

ZombieEvent::~ZombieEvent() { 
	std::cout << "ZombieEvent Destructor called" << std::endl;
	return;
}

void			ZombieEvent::setZombieType(Zombie* new_zombie)
{
	std::cout << "What is your Zombie?" << std::endl;
	std::cin >> new_zombie->type;
	if (std::cin.fail())
		exit (0);
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *new_zombie;
	new_zombie = new Zombie(name, "NaN");
	setZombieType(new_zombie);
	return new_zombie;
}

std::string ZombieEvent::RandomName()
{
	int len = 6;
	const std::string	alphabet("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
	int i;

	i = 0;

	char r_name[len + 1];
	r_name[len] = '\0';
	for(i = 0; i < len; i++)
	{
		r_name[i] =  alphabet[(get_Rand_Int(52))];
	}
	std::string rand_res(r_name);
	return rand_res;
}

int					ZombieEvent::get_Rand_Int(unsigned int from)
{
	int	i = (rand() % from);
	return ( (i >= 0) ? i : 0 );
}

std::string ZombieEvent::RandomType()
{
	const std::string		zombie_types[9] = 
	{"Vasya", "Petya", "Ivan", "Kolya", "Anton", "Kiril", "Sanya", "Igor", "Ludovik"};
	return zombie_types[get_Rand_Int(9)];
}

Zombie* ZombieEvent::randomChump()
{
	Zombie *rand_zombie;
	std::string name_r(RandomName());
	std::string type_r(RandomType());
	rand_zombie = new Zombie(name_r, type_r);
	return rand_zombie;
}
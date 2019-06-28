#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(std::string usname);
 	ScavTrap(ScavTrap const & copy);

	int individuality;

	void challengeNewcomer();
	ScavTrap & operator=(ScavTrap const & over);

};

#endif
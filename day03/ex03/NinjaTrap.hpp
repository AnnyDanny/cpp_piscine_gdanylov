#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap {
public:
	NinjaTrap();
	~NinjaTrap();
	NinjaTrap(std::string usname);
 	NinjaTrap(NinjaTrap const & copy);

 	void	ninjaShoebox(  ClapTrap & clapTrap);
	void	ninjaShoebox(  FragTrap & fragTrap);
	void	ninjaShoebox(  ScavTrap & scavTrap);
	void	ninjaShoebox(  NinjaTrap & ninjaTrap);

	NinjaTrap & operator=(NinjaTrap const & over);
	
};


#endif
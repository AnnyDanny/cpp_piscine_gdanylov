#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string usname);
 	FragTrap(FragTrap const & copy);
	void vaulthunter_dot_exe(std::string const & target);
	FragTrap & operator=(FragTrap const & over);
	
};




#endif
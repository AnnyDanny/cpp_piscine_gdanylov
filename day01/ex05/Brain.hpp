#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
	Brain();
	~Brain();
	int size;
	std::string owner;
	std::string identify() const;
};

#endif
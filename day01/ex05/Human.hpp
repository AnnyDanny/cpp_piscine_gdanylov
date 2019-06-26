#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include "Brain.hpp"

class Human
{
	public:
		Human();
		~Human();
		const Brain br_elem;
		std::string identify();
		Brain const &getBrain();
};

#endif
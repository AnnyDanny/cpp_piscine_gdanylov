#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <cstdlib>

class Pony {
public:
	Pony(std::string describe, std::string name, bool magicalPony);
	~Pony();
	std::string describe;
	std::string name;
	bool magicalPony;
};

#endif
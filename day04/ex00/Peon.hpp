#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"
#include <iostream>

class Peon : public Victim {
    public:
    Peon(std::string name);
	~Peon();
    void getPolymorphed() const;

};


#endif
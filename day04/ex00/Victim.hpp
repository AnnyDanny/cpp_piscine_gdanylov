#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim {
    public:
    Victim(std::string name);
	virtual ~Victim();

    virtual void getPolymorphed() const;
    std::string GetName() const;

    protected:
    std::string _name;


};

std::ostream& operator<< (std::ostream &o, Victim &over);

#endif
#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"


class Sorcerer {
    public:
    Sorcerer(std::string name, std::string title);
	~Sorcerer();
    Sorcerer(const Sorcerer &copy);

    Sorcerer & operator=(Sorcerer const & over);

    std::string GetName() const;
    std::string GetTitle() const;

    void polymorph(Victim const &) const;

    protected:
    std::string _name;
    std::string _title;


};

std::ostream & operator<<(std::ostream &o, Sorcerer const &over);

#endif
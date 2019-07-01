#ifndef ASSAULTTERMINATOT_HPP
#define ASSAULTTERMINATOT_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
       virtual ~AssaultTerminator();
       virtual ISpaceMarine* clone() const;
       virtual void battleCry() const;
       virtual void rangedAttack() const;
       virtual void meleeAttack() const;

};

#endif
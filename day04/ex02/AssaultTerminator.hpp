#ifndef ASSULTTERMINATOT_HPP
#define ASSULTTERMINATOT_HPP

class AssultTerminator : public ISpaceMarine
{
public:
		AssultTerminator();
       virtual ~AssultTerminator() {}
       virtual ISpaceMarine* clone() const;
       virtual void battleCry() const;
       virtual void rangedAttack() const;
       virtual void meleeAttack() const;

};

#endif
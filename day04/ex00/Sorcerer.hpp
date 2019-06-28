#ifndef SORCERER_HPP
#define SORCERER_HPP

class Sorcerer {
    public:
    Sorcerer(std::cout << _name << ", " << title << "is born!" std::endl;);
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
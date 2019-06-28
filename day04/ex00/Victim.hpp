#ifndef VICTIM_HPP
#define VICTIM_HPP

class Victim {
    public:
    Victim(std::string name);
	virtual ~Victim();

    virtual void getPolymorphed();


    private:
    std::string _name;


};

std::ostream operator<< (std::ostream &o, Victim &over);

#endif
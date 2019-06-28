#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name) {
    std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::~Victim() {
    std::cout <<  "Victim " << _name << " just died for no apparent reason !" << std::endl;

}

std::string Victim::GetName() const {
    return _name;
}

std::ostream& operator<< (std::ostream &o, Victim &over) {
    o << "I'm  " << over.GetName() << " and I like otters !" << std::endl;
    return o;
}

void Victim::getPolymorphed() const {
   std::cout << _name << " has been turned into a cute little sheep !"  << std::endl;
}

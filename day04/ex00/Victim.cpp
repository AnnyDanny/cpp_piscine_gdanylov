#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name) {
    std::cout << "Some random victim called NAME just popped !" << std::endl;
}

Victim::~Victim() {
    std::cout <<  Victim NAME just died for no apparent reason ! << std::endl;

}

std::ostream operator<< (std::ostream &o, Victim &over) {
    o << "I'm NAME and I like otters !";
    return o;
}

void Victim::getPolymorphed() {
   std::cout << "NAME has been turned into a cute little sheep !"  << std::endl;
}

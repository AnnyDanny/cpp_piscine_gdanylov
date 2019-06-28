#include "Sorcerer.hpp"


Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
    std::cout << _name << ", " << _title << "is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & copy) {

}

Sorcerer::~Sorcerer() {
    std::cout << _name << ", " << _title << ", is dead! Consequences will never be the same !" << std::endl;
}

std::ostream & operator<<(std::ostream &o, Sorcerer const &over) {
    o << "I am " << over.GetName() << ", " << over.GetTitle() << ", and I like ponies !" << std::endl;
    return o;
}

  void Sorcerer::polymorph(Victim const &people) const {
      people.getPolymorphed();
  }

std::string Sorcerer::GetName() const {
    return _name;
}
std::string Sorcerer::GetTitle() const {
    return _title;
}
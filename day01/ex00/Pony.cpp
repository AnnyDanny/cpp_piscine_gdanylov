#include "Pony.hpp"

Pony::Pony(std::string describe, std::string name, bool magicalPony) {
    this->describe = describe;
    this->name = name;
    this->magicalPony = magicalPony;
    system("echo \"\033[1;36m\"");
    std::cout << "Once upon a time there was a little " << this->describe << " pony 🦄. Her name " << this->name << " and she was born in Switzerland.";
    if (this->magicalPony) {
        std::cout << " She can creat magical bubbles." << std::endl;
    }
    else {
        std::cout << " She can creat just fruit bubbles." << std::endl;
    }
}

Pony::~Pony() {
    system("echo \"\033[1;35m\"");
    std::cout << "Good night, " << this->name << std::endl;
    system("echo \"\033[0m\"");
}
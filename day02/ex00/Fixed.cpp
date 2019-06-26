#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() : _storeFixed(0) {
    std::cout << "Default constructor called" <<std::endl;
    return;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" <<std::endl;
    return;
}

Fixed::Fixed(Fixed const &copy) {
    std::cout << "Copy constructor called" <<std::endl;
    this->_storeFixed = copy.getRawBits();
    return;
}

Fixed & Fixed::operator=(const Fixed &M) {
    std::cout << "Assignation operator called" <<std::endl;
    if (this != &M) {
        this->_storeFixed = M.getRawBits();
    }
    else {
        std::cout << "Self assigment" <<std::endl;
    }
    return (*this);
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" <<std::endl;
    return this->_storeFixed;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" <<std::endl;
    this->_storeFixed = raw;
}
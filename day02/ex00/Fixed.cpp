#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() : _storeFixed(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed & Fixed::operator=(Fixed const & over)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &over)
        this->_storeFixed = over.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_storeFixed;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" <<std::endl;
    this->_storeFixed = raw;
}
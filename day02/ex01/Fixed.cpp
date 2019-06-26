#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() : _storeFixed(0){
    std::cout << "Default constructor called" <<std::endl;
    return;
}

Fixed::Fixed(const int convert)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(convert << _storeBits);
}

Fixed::Fixed(const float convert)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(convert * (1 << _storeBits)));
}

Fixed::~Fixed() {
    std::cout << "Destructor called" <<std::endl;
    return;
}

Fixed::Fixed(Fixed const & copy) {
    std::cout << "Copy constructor called" <<std::endl;
    *this = copy;
}

Fixed & Fixed::operator=(Fixed const & M) {
    std::cout << "Assignation operator called" <<std::endl;
    if (this != &M) {
        this->_storeFixed = M.getRawBits();
    }
    else 
        std::cout << "Self assigment" <<std::endl;
    return (*this);
}

int Fixed::getRawBits(void) const {
    return this->_storeFixed;
}

void Fixed::setRawBits(int const raw) {
    this->_storeFixed = raw;
}


float Fixed::toFloat(void) const {
    float flo;
    flo = getRawBits();
    return flo / (1 << _storeBits);
}


int Fixed::toInt(void) const {
    return getRawBits() >> _storeBits;
}

std::ostream & operator<<(std::ostream & stream, Fixed const & object)
{
	stream << object.toFloat();
	return stream;
}
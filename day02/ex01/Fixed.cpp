#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() : _storeFixed(0){
    std::cout << "Default constructor called" <<std::endl;
    return;
}

Fixed::Fixed(const int convert)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(convert << _storeFixed);
}

Fixed::Fixed(const float convert)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(convert * (1 << _storeFixed)));
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
    // std::cout << "getRawBits member function called" <<std::endl;
    return this->_storeFixed;
}

void Fixed::setRawBits(int const raw) {
    // std::cout << "setRawBits member function called" <<std::endl;
    this->_storeFixed = raw;
}

float Fixed::toFloat(void) const {
    float flo;
    flo = getRawBits();
    return flo / (1 << _storeFixed);
    // return ((float)getRawBits() / (double)(1 << _storeFixed));
}

int Fixed::toInt(void) const {
    return getRawBits() >> _storeFixed;
}

std::ostream & operator<<(std::ostream & stream, Fixed const & object)
{
	stream << object.toFloat();
	return stream;
}

// float f;
	// f = getRawBits();
	// return (f / (1 << _fraction));
    // return ((double)input / (double)(1 << FIXED_POINT_FRACTIONAL_BITS));

// Default constructor called
// Int constructor called
// Float constructor called
// Copy constructor called
// Assignation operator called
// Float constructor called
// Assignation operator called
// Destructor called
// a is 1234.43
// b is 10
// c is 42.4219
// d is 10
// a is 1234 as integer
// b is 10 as integer
// c is 42 as integer
// d is 10 as integer
// Destructor called
// Destructor called
// Destructor called
// Destructor called


// $> ./a.out
// Default constructor called
// Int constructor called
// Float constructor called
// Copy constructor called
// Assignation operator called
// Float constructor called
// Assignation operator called
// Destructor called
// a is 1234.43
// b is 10
// c is 42.4219
// d is 10
// a is 1234 as integer
// b is 10 as integer
// c is 42 as integer
// d is 10 as integer
// Destructor called
// Destructor called
// Destructor called
// Destructor called
// $>
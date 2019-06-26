#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() : _storeFixed(0){
    std::cout << "Default constructor called" <<std::endl;
    return;
}

Fixed::Fixed(Fixed const & copy) {
    *this = copy;
}

Fixed & Fixed::operator=(Fixed const & M) {
    if (this != &M) {
        this->_storeFixed = M.getRawBits();
    }
    return (*this);
}

Fixed::Fixed(const int convert)
{
    setRawBits(convert << _storeBits);
}

Fixed::Fixed(const float convert)
{
	setRawBits(roundf(convert * (1 << this-> _storeBits)));
}

float Fixed::toFloat(void) const {
    float flo;
    flo = getRawBits();
    return flo / (1 << this-> _storeBits);
}

int Fixed::toInt(void) const {
    return getRawBits() >> this->_storeBits;
}

Fixed::~Fixed() {
    return;
}

int Fixed::getRawBits(void) const {
    return this->_storeFixed;
}

void Fixed::setRawBits(int const raw) {
    this->_storeFixed = raw;
}

std::ostream & operator<<(std::ostream & stream, Fixed const & object)
{
	stream << object.toFloat();
	return stream;
}

Fixed Fixed::operator+(Fixed const & obj) const { return (Fixed(this->toFloat() + obj.toFloat())); }

Fixed Fixed::operator-(Fixed const & obj) const { return (Fixed(this->toFloat() - obj.toFloat())); }

Fixed Fixed::operator*(Fixed const & obj) const { return (Fixed(this->toFloat() * obj.toFloat())); }

Fixed Fixed::operator/(Fixed const & obj) const
{
    if (obj.toFloat() == 0)
    {
        std::cout << "Don't divide by zero" << std::endl;
        return (Fixed(0));
    }
    return (Fixed(this->toFloat() / obj.toFloat()));
}

bool Fixed::operator>(Fixed const & obj) const
{
    if (this->_storeFixed > obj._storeFixed)
        return (true);
    return (false);
}

bool Fixed::operator<(Fixed const & obj) const
{
    if (this->_storeFixed < obj._storeFixed)
        return (true);
    return (false);
}


bool Fixed::operator<=(Fixed const & obj) const
{
    if (this->_storeFixed <= obj._storeFixed)
        return (true);
    return (false);
}

bool Fixed::operator>=(Fixed const & obj) const
{
    if (this->_storeFixed >= obj._storeFixed)
        return (true);
    return (false);
}

bool Fixed::operator!=(Fixed const & obj) const
{
    if (this->_storeFixed != obj._storeFixed)
        return (true);
    return (false);
}

bool Fixed::operator==(Fixed const & obj) const
{
    if (this->_storeFixed == obj._storeFixed)
        return (true);
    return (false);
}


Fixed & Fixed::min(Fixed & obj1, Fixed & obj2)
{
    if (obj1._storeFixed <= obj2._storeFixed)
        return (obj1);
    return (obj2);

}

Fixed & Fixed::max(Fixed & obj1, Fixed & obj2)
{
    if (obj1._storeFixed >= obj2._storeFixed)
        return (obj1);
    return (obj2);

}

const Fixed & Fixed::min(Fixed const & obj1, Fixed const & obj2)
{
    if (obj1._storeFixed <= obj2._storeFixed)
        return (obj1);
    return (obj2);
}

const Fixed & Fixed::max(Fixed const & obj1, Fixed const & obj2)
{
    if (obj1._storeFixed >= obj2._storeFixed)
        return (obj1);
    return (obj2);
}

Fixed & Fixed::operator++()
{
    this->_storeFixed++;
    return *this;
}

Fixed & Fixed::operator++(int)
{

    Fixed *tmp = new Fixed(* this );
    ++(* this );
    return (*tmp);
}

Fixed & Fixed::operator--()
{
    this->_storeFixed--;
    return *this;
}

Fixed & Fixed::operator--(int)
{
    Fixed *tmp = new Fixed(*this);
    --(*this);
    return (*tmp);
}

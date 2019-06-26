#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>

class Fixed {
    private:
        int _storeFixed;
        static const int _storeBits = 8;

    public:
        Fixed();
        Fixed(Fixed const &copy);

        Fixed(const int convert);
        Fixed(const float convert);

        ~Fixed();

    Fixed &operator=(Fixed const  &M);

    bool operator>(Fixed const & obj) const;
    bool operator<(Fixed const & obj) const;
    bool operator>=(Fixed const & obj) const;
    bool operator<=(Fixed const & obj) const;
    bool operator==(Fixed const & obj) const;
    bool operator!=(Fixed const & obj) const;

    Fixed operator+(Fixed const & obj) const;
    Fixed operator-(Fixed const & obj) const;
    Fixed operator*(Fixed const & obj) const;
    Fixed operator/(Fixed const & obj) const;

    Fixed & operator++();
    Fixed & operator++(int);
    Fixed & operator--();
    Fixed & operator--(int);

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;

    static Fixed &min(Fixed &obj1, Fixed &obj2);
    static Fixed &max(Fixed &obj1, Fixed &obj2);
    static const Fixed &min(Fixed const &obj1, Fixed const &obj2);
    static const Fixed &max(Fixed const &obj1, Fixed const &obj2);
};


std::ostream & operator<<(std::ostream &o, Fixed const &over);

#endif

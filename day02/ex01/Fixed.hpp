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

    Fixed &operator=(const Fixed &M);

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream & operator<<(std::ostream &o, Fixed const &over);

#endif

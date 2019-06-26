#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
    private:
        int _storeFixed;
        static const int _storeBits = 8;

    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const &copy);

    Fixed &operator=(const Fixed &M);

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif

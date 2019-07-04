#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <string>
#include <exception>
#include <stdlib.h>
#include <sstream>
#include <cstdlib>


class Conversion {
	public:
		Conversion();
		Conversion(std::string argv, double dval);
		Conversion(Conversion const &copy);
		Conversion & operator=(Conversion const &over);
		~Conversion();

		std::string getArgv() const;
		int getValue();

		operator std::string const &(void) const;
		operator char() const;
		operator int() const;
		operator float() const;
		operator double() const;

		class ConversionException: public std::exception {
			public: 
				ConversionException();
				~ConversionException() throw();
				char const *what() const throw();
		};

	private:
		const std::string _argv;
		double _dval;

};

std::ostream & operator<<(std::ostream &o, Conversion const &over);

#endif
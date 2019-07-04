#include "Conversion.hpp"
#include <iostream>

Conversion::Conversion() {

}

Conversion::Conversion(std::string argv, double dval) : _argv(argv), _dval(dval) {
	// std::cout << _argv << std::endl;
}

Conversion::Conversion(Conversion const &copy) {
	*this = copy;
}

Conversion::~Conversion() {

}

Conversion & Conversion::operator=(Conversion const &over) {
	if (this != &over)
		this->_dval = over._dval;
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Conversion const &over) {
	std::cout << "Conversion" << over.getArgv() << std::endl;
	return o;
}

std::string Conversion::getArgv() const {
	return this->_argv;
}

int Conversion::getValue() {
	return this->_dval;
}

Conversion::ConversionException::ConversionException() {

}

Conversion::ConversionException::~ConversionException() throw() {
	
}

char const *Conversion::ConversionException::what() const throw() {
	return ("Conversion is impossible");
}

Conversion::operator std::string const &(void) const {
	return (_argv);
}


Conversion::operator char() const {
	// std::cout << _dval << std::endl;
	if (_dval > static_cast<double>(CHAR_MAX) || _dval < static_cast<double>(CHAR_MIN))
		throw ConversionException();

	char v = static_cast<char>(std::atoi(this->_argv.c_str()));
	if (errno)
		throw ConversionException();
	return (v);
}

Conversion::operator int() const {
	// std::cout << _dval << std::endl;
	if (_dval > static_cast<double>(INT_MAX) || _dval < static_cast<double>(INT_MIN))
		throw ConversionException();

	int v = static_cast<int>(_dval);
	if (errno)
		throw ConversionException();
	return (v);
}

Conversion::operator float() const {
	// std::cout << _dval << std::endl;
	float v = static_cast<float>(_dval);
	if (errno) {
		throw (ConversionException());
	}
	return (v);
}

Conversion::operator double() const {
	// std::cout << _dval << std::endl;
	return (_dval);
}
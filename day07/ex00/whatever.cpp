#include <iostream>


template <typename type>
void swap (type &a, type &b) {
  type tmp;
  tmp = a;
  a = b;
  b = tmp;
}

template <typename type>
type max (type a, type b) {
  type result;
  result = (a > b) ? a : b;
  return (result);
}

template <class type>
type min (type a, type b) {
	type result;
	result = (a < b) ? a : b;
	return (result);
}

int				main( void )
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
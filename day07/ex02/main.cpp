#include <string>
#include <iostream>
#include <exception>
#include "Array.hpp"
#include <ctime>


int				main(void) {
	std::srand(time(NULL));
	unsigned int n = rand() % 10 + 1;
	Array <std::string> myArray(n);
	unsigned int i;
	i = 0;

	while (i < n) {
		myArray.setEl("test" + std::to_string(i), i);
		i++;
	}
	std::cout << "test" + std::to_string(i) << std::endl;
	i = 0;
	while (i < n) {
	   std::cout << myArray[i] << std::endl;
	   i++;
	}
	try {
	   if (i < myArray.size())
	      std::cout << myArray[i] << std::endl;
	   else
	      throw "Incorrect array's element number";
	  }
	catch (const char *ex) {
	    std::cout << ex << std::endl;
	}
	return (0);
}

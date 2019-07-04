#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "F.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>


Base		*generate(void) {
	int i = rand() % 3;
	if (i == 0) {
		std::cout << "A created\n";
		return (new A);
	}
	else if (i == 1) {
		std::cout << "B created\n";
		return (new B);
	}
	else if (i == 2) {
		std::cout << "C created\n";
		return (new C);
	}
	std::cout << "Something went wrong\n";
	return (NULL);
}


void identify_from_reference(Base & p) {
	A *someClassA = dynamic_cast<A*>(&p);

	if (someClassA == NULL) {
		B *someClassB = dynamic_cast<B*>(&p);
		if (someClassB == NULL) {
			C *someClassC = dynamic_cast<C*>(&p);
			if (someClassC == NULL) {
				std::cout << "Udefined type of class. Neither of the class\n";
				return ;	
			}
			else
				std::cout << "C" << std::endl;
		}
		else
			std::cout << "B" << std::endl;
	}
	else
		std::cout << "A" << std::endl;
}

void identify_from_pointer(Base * p) {
	A *someClassA = dynamic_cast<A*>(p);

	if (someClassA == NULL) {
		B *someClassB = dynamic_cast<B*>(p);
		if (someClassB == NULL) {
			C *someClassC = dynamic_cast<C*>(p);
			if (someClassC == NULL) {
				std::cout << "Udefined type of class. Neither of the class\n";
				return ;	
			}
			else
				std::cout << "C" << std::endl;
		}
		else
			std::cout << "B" << std::endl;
	}
	else
		std::cout << "A" << std::endl;

}





int			main(void) {
	srand(time(NULL));

	std::cout << "Testing basic classes\n";
	Base *someClass = generate();
	identify_from_pointer(someClass);
	identify_from_reference(*someClass);

	std::cout << "And testing irrelevant class\n";

	Base *someOtherClass = new F;
	identify_from_pointer(someOtherClass);
	identify_from_reference(*someOtherClass);

	return (0);
}
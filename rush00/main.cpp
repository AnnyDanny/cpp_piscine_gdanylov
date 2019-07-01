#include <iostream>
#include <string>
#include <iomanip>
#include "GameEngine.hpp"
 #include <curses.h>
#include "Player.hpp"
// #include <clocale>

int main() {
	// std::cout << "Локаль: " << setlocale(LC_ALL,NULL) << std::endl;
	try {
		GameEngine gameEngine;
		gameEngine.run();
}
catch(std::exception &error) {
	std::cout << error.what() << std::endl;
}
}



#include <iostream>
#include <string>
#include <iomanip>
#include "GameEngine.hpp"
 #include <curses.h>
#include "Player.hpp"

// g++ Enemy.cpp Entity.cpp GameEngine.cpp Player.cpp Visual.cpp main.cpp -lncurses

int main() {
	try {
		GameEngine gameEngine;
		gameEngine.run();
}
catch(std::exception &error) {
	std::cout << error.what() << std::endl;
}
}



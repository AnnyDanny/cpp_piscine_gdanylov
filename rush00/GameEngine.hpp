#ifndef GAMEENGINE_HPP
#define GAMEENGINE_HPP

enum Command{
	RIGHT, LEFT, UP, DOWN, SHOOT, PAUSE, UNKNOWN
};

class GameEngine {
	public:
		GameEngine();
		~GameEngine();

		void run();
		void checkColosion();

	private:
		void readInput();

		Player player;
		Enemies enemies[10];
		Input input;
		Draw draw;
		Bullets *bullets;
		Visual visual;
};

#endif
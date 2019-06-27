#include <iostream>
#include <string>
#include <iomanip>
//#include "GameEngine.hpp"
 #include <curses.h>
#include "Player.hpp"

// void moveRight(int *x)
// {
// 	(*x)++;
	
// }

// void moveLeft(int *x)
// {
// 	(*x)--;
	
// }


// void moveDown(int *y)
// {
// 	(*y)++;
	
// }

// void moveUp(int *y)
// {
// 	(*y)--;
	
// }
Player player;

int main() {
	initscr();
	cbreak(); 
	noecho(); 
	curs_set(0);
	start_color();
	//keypad(stdscr, TRUE); 
	//nodelay(stdscr, TRUE); 
	scrollok(stdscr, FALSE);

	init_color(COLOR_GREEN, 0, 500, 0);
	init_pair(1, COLOR_YELLOW, COLOR_BLACK);
	init_pair(2, COLOR_BLUE, COLOR_BLACK);
	init_pair(3, COLOR_CYAN, COLOR_BLACK);
	int  y_wmax;
	int x_wmax;

	getmaxyx(stdscr, y_wmax, x_wmax);
	
	WINDOW *win = newwin(y_wmax - 1, x_wmax - 1, 0, 0);
	wattron(win, COLOR_PAIR(1));

	wborder(win, 42, 42, 42, 42, 42, 42, 42, 42);
	wrefresh(win);

	nodelay(win, true);
	keypad(win, true);
	wattron(win, COLOR_PAIR(2));
	char play = '*';

	// int x5 = 5;
	// int y5 = 5;

	// int x1 = player.getX();
	// int y1 = player.getY();
	mvwaddch(win, player.getY(), player.getX(), play);
int user = 0;
while(1)
{
	user = wgetch(win);
	switch (user) {
		case KEY_RIGHT:
		case 'd':
			mvwdelch(win, player.getY(), player.getX());
			player.moveRight();
			mvwaddch(win, player.getY(), player.getX(), play);
			wrefresh(win);
			break;
		case KEY_LEFT:
		case 'a':
			mvwdelch(win, player.getY(), player.getX());
			player.moveLeft();
			mvwaddch(win, player.getY(), player.getX(), play);
			wrefresh(win);
			break;
		case KEY_UP:
		case 'w':
			mvwdelch(win, player.getY(), player.getX());
			player.moveUp();
			mvwaddch(win, player.getY(), player.getX(), play);
			wrefresh(win);
			break;
		case KEY_DOWN:
		case 's':
			mvwdelch(win, player.getY(), player.getX());
			player.moveDown();
			mvwaddch(win, player.getY(), player.getX(), play);
			wrefresh(win);
			break;
		case 'q':
			system("reset");
			exit(0);
		default:
			break;
	
	}
}



	// GameEngine gameEngine;
	// GameEngine.run();
}



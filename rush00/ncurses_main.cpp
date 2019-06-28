#include <ncurses.h>

int main (){
	initscr();
	int x, y;
	getmaxyx(stdscr, y, x);
	move(y/2, x/2);
	// attron(A_BOLD);
	attron(A_REVERSE);
	printw("a");
	// attroff(A_BOLD);
	attroff(A_REVERSE);
	refresh();
	getch();
	// noecho();
	// raw();
	// int c;
	// printw("Write something (ESC to escape): ");
	// while ((c = getch()) != 27) {
		// move(10, 0);
		// printw("Keycode: %d, and the caracter: %c", c, c);
		// move(0,0);
		// printw("Write something (ESC to escape): ");
		// refresh();
	// }
	// move(5, 10);
	// printw("hello world!");
	// mvprintw(5, 10, "hello world!");
	// refresh();
	// getch();
	endwin();
	return 0;
}
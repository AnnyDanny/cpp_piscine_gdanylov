#include <curses.h>
#include <iostream>

bool checkInput(WINDOW *windowFight, int &y, int &x);

int main()
{
    initscr();
    cbreak();
    noecho();
    curs_set(0);
    start_color();
    scrollok(stdscr, FALSE);
    init_color(COLOR_GREEN, 0, 500, 0);
    init_pair(1, COLOR_YELLOW, COLOR_BLACK);
    init_pair(2, COLOR_BLUE, COLOR_BLACK);
    init_pair(3, COLOR_CYAN, COLOR_BLACK);
    int cols = 50, rows = 50;
    WINDOW *windowFight = newwin(cols - 1, rows - 1, 0, 0);
    if (windowFight == nullptr) {
        throw std::runtime_error("Failed to create window");
    }
    wattron(windowFight, COLOR_PAIR(1));
    wborder(windowFight, 42, 42, 42, 42, 42, 42, 42, 42);
    wrefresh(windowFight);
    // nodelay(windowFight, true);
    keypad(windowFight, true);
    wattron(windowFight, COLOR_PAIR(2));

    int y = 5, x =5;
    while (checkInput(windowFight, y, x)) {
        wclear(windowFight);
        wattron(windowFight, COLOR_PAIR(1));
        wborder(windowFight, 42, 42, 42, 42, 42, 42, 42, 42);
        wattron(windowFight, COLOR_PAIR(2));
        mvwaddch(windowFight, y, x, '*');
        wrefresh(windowFight);
    }

    delwin(windowFight);
    endwin();
}

bool checkInput(WINDOW *windowFight, int &y, int &x) {
    auto user = wgetch(windowFight);
    // user = getch();
    switch (user) {
        case KEY_RIGHT:
        case 'd':
            x++;
            break;
        case KEY_LEFT:
        case 'a':
            x--;
            break;
        case KEY_UP:
        case 'w':
            y--;
            break;
        case KEY_DOWN:
        case 's':
            y++;
            break;
        case 'q':
            system("reset");
            return false;
        default:
            break;

    }
    return true;
}

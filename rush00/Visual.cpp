#include "Visual.hpp"
#include <chrono>
#include <cstdlib>
#include <stdexcept>
#include <thread>

Visual::Visual() : windowFight(nullptr), _columns(0), _rows(0) {
    WINDOW *mainWin = initscr();
    cbreak();
    noecho();
    curs_set(0);
    start_color();
    scrollok(stdscr, FALSE);
    init_color(COLOR_GREEN, 0, 500, 0);
    init_pair(1, COLOR_YELLOW, COLOR_BLACK);
    init_pair(2, COLOR_BLUE, COLOR_BLACK);
    init_pair(3, COLOR_CYAN, COLOR_BLACK);
    getmaxyx(mainWin, _columns, _rows);
    _columns -= 5;
    windowFight = newwin(_columns, _rows, 5, 0);
    _columns--;
    _rows--;
    scoreWin = newwin(4, _rows, 0, 0);
    if (windowFight == nullptr || scoreWin == nullptr) {
        throw std::runtime_error("Failed to create window");
    }
    keypad(windowFight, true);
    nodelay(windowFight, true);
    wattron(windowFight, COLOR_PAIR(1));
    wborder(windowFight, 42, 42, 42, 42, 42, 42, 42, 42);
    wrefresh(windowFight);
    wattron(windowFight, COLOR_PAIR(2));
}

void Visual::PrintScope(int killedEnemies, int HP) {
    mvwprintw(scoreWin, 0, 0, "killedEnemies %d :", killedEnemies);
    mvwprintw(scoreWin, 1, 0, "HP %d :", HP);
    wrefresh(scoreWin);

}

Visual::~Visual() {
    delwin(windowFight);
    endwin();
}

void Visual::refresh() {
    wrefresh(windowFight);
}

void Visual::clear() {
    wclear(windowFight);
    wattron(windowFight, COLOR_PAIR(1));
    wborder(windowFight, 42, 42, 42, 42, 42, 42, 42, 42);
    wattron(windowFight, COLOR_PAIR(2));
}

bool Visual::isInsideWindow(int x, int y) {
    return (x > 0 && x < _rows) && (y > 0 && y < _columns);
}

void Visual::draw(int x, int y, char pic) {
    mvwaddch(windowFight, y, x, pic);
}

void Visual::del(int x, int y) {
    mvwaddch(windowFight, y, x, ' ');
}

Command Visual::getInput() {
    int user = 0;
    user = wgetch(windowFight);
    // user = getch();
    switch (user) {
        case KEY_RIGHT:
        case 'd':
            return RIGHT;
            break;
        case KEY_LEFT:
        case 'a':
            return LEFT;
            break;
        case KEY_UP:
        case 'w':
            return UP;
            break;
        case KEY_DOWN:
        case 's':
            return DOWN;
            break;
        case 'q':
            return EXIT;
            break;
        case ' ':
            return SHOOT;
            break;
        default:
            break;
    }
    return UNKNOWN;
}

int Visual::getWidth() {
    return _rows;
}

int Visual::getHeight() {
    return _columns;
}

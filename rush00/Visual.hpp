#ifndef VISUAL_HPP
#define VISUAL_HPP

#include <curses.h>
#include "Common.hpp"

class Visual {
  public:
    Visual();
    ~Visual();
    void draw(int x, int y, char pic);
    void del(int x, int y);
    Command getInput();
    bool isInsideWindow(int x, int y);
    void refresh();
    void clear();
    int getWidth();
    int getHeight();
    void PrintScope(int killedEnemies, int HP);

  private:
    WINDOW *windowFight;
    WINDOW *scoreWin;
    int _columns;
    int _rows;
};

#endif
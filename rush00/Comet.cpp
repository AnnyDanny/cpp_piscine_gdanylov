#include "Comet.hpp"

Comet::Comet(Visual* vis, int x, int y) : Enemy(vis, x, y, '$') {
}

bool Comet::move() {
    del();
    _y++;
    if (_visual->isInsideWindow(_x, _y)) {
        draw();
        return true;
    }
    return false;
}

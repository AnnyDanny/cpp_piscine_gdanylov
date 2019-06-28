#include "Bullet.hpp"
#include <cstddef>

Bullet::Bullet() : Entity(nullptr, 0, 0, '\'') {
}

Bullet::Bullet(Visual *vis, int x, int y) : Entity(vis, x, y, '\'') {
    draw();
}

Bullet::~Bullet() {
    del();
}

bool Bullet::move() {
    del();
    _y--;
    if (_visual->isInsideWindow(_x, _y)) {
        draw();
        return true;
    }
    return false;
}

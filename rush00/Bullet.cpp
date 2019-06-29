#include "Bullet.hpp"

Bullet::Bullet() : Entity(nullptr, 0, 0, '\'') {
}

Bullet::Bullet(Visual* vis, int x, int y) : Entity(vis, x, y, '\'') {
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

bool Bullet::checkCollisions(Array<Ptr<Enemy> >& enemies) {
    for (int i = 0; i < enemies.size(); i++) {
        if (enemies[i]->getX() == _x && enemies[i]->getY() == _y) {
            enemies.erase(i);
            del();
            return true;
        }
    }
    return false;
}

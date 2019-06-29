#include "Bullet.hpp"
#include "Enemy.hpp"

Enemy::Enemy(Visual *vis, int x, int y, char pic) : Entity(vis, x, y, pic) {
}

Enemy::~Enemy() {
}

bool Enemy::checkCollisions(Array<Bullet>& bullets){
    for (int i = 0; i < bullets.size(); i++) {
        if (bullets[i].getX() == _x && bullets[i].getY() == _y) {
            bullets.erase(i);
            del();
            return true;
        }
    }
    return false;
}

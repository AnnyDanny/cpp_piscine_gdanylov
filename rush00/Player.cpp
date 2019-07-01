#include "Player.hpp"

Player::Player(Visual *visual) : Entity(visual, visual->getWidth() / 2, visual->getHeight() - 1, '*') {
}

void Player::moveLeft() {
    if (_visual->isInsideWindow(_x - 1, _y)) {
        del();
        _x--;
        draw();
    }
}

void Player::moveRight() {
    if (_visual->isInsideWindow(_x + 1, _y)) {
        del();
        _x++;
        draw();
    }
}

void Player::moveUp() {
    if (_visual->isInsideWindow(_x, _y - 1)) {
        del();
        _y--;
        draw();
    }
}

void Player::moveDown() {
    if (_visual->isInsideWindow(_x, _y + 1)) {
        del();
        _y++;
        draw();
    }
}

bool Player::checkCollisions(Array<Ptr<Enemy> >& enemies){
    for (int i = 0; i < enemies.size(); i++) {
        if (enemies[i]->getX() == _x && enemies[i]->getY() == _y) {
            enemies.erase(i);
            return true;
        }
    }
    return false;
}

void Player::draw() {
    _visual->draw(_x, _y, '/');
    _visual->draw(_x + 1, _y, '|');
    _visual->draw(_x + 2, _y, '\\');
}

void Player::del() {
    _visual->del(_x, _y);
    _visual->del(_x + 1, _y);
    _visual->del(_x + 2, _y);
}

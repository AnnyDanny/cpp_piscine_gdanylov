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


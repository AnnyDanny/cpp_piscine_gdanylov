#include "Player.hpp"




Player::Player() {
    _x = 5;
    _y = 5;
    // std::cout << "Default constructor called\n";
}

Player::Player(int x, int y) {
    _x = x;
    _y = y;
    // std::cout << "Parameterized constructor called\n";
}

void Player::moveLeft() {
    _x--;
}

void Player::moveRight() {
    _x++;
}

void Player::moveUp() {
    _y--;
}

void Player::moveDown() {
    _y++;
}

int Entity::getX() {
    return _x;
}

int Entity::getY() {
    return _y;
}
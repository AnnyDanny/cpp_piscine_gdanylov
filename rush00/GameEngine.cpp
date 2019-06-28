#include "GameEngine.hpp"
#include <chrono>
#include <iostream>
#include <thread>
#include "Common.hpp"

GameEngine::GameEngine() : _visual(), _player(&_visual), _cycle(0) {
}

GameEngine::~GameEngine() {
}

bool GameEngine::readInput() {
    Command command = _visual.getInput();
    switch (command) {
        case RIGHT:
            _player.moveRight();
            break;
        case LEFT:
            _player.moveLeft();
            break;
        case UP:
            _player.moveUp();
            break;
        case DOWN:
            _player.moveDown();
            break;
        case SHOOT:
            _bullets.push(Bullet(&_visual, _player.getX(), _player.getY() - 1));
            break;
        // case PAUSE:
        case EXIT:
            return false;
            break;
        default:
            break;
    }
    return true;
}

void GameEngine::GameEngine::run() {
    _player.draw();
    while (readInput()) {
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
        updateMoving();
        _cycle++;
    }
}

void GameEngine::updateMoving() {
    if (_cycle % 3 == 0) {
        for (int i = 0; i < _bullets.size(); i++) {
            if (!_bullets[i].move()) {
                _bullets.erase(i);
                i--;
            }
        }
    }
    // std::cout << "updateMoving";
}

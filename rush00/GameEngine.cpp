#include "GameEngine.hpp"
#include <time.h>
#include <chrono>
#include <cstdlib>
#include <iostream>
#include <thread>
#include "Comet.hpp"
#include "Common.hpp"

GameEngine::GameEngine() : _visual(), _player(&_visual), _cycle(0), _killedEnemies(0), _HP(5) {
    srand(time(NULL));
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
    if (_player.checkCollisions(_enemies)) {
        _HP--;
        _killedEnemies++;
        if (_HP == 0) {
            throw std::runtime_error("Player is dead");
        }
    }
    return true;
}

void GameEngine::run() {
    while (readInput()) {
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
        updateMoving();
        _player.draw();
        _visual.PrintScope(_killedEnemies, _HP);
        _cycle++;
    }
}

void GameEngine::updateMoving() {
    updateBullets();
    updateEnemies();
    addEnemies();
}

void GameEngine::updateBullets() {
    if (_cycle % 3 == 0) {
        for (int i = 0; i < _bullets.size(); i++) {
            if (!_bullets[i].move()) {
                _bullets.erase(i);
                i--;
            }
            else if (_bullets[i].checkCollisions(_enemies)) {
                _bullets.erase(i);
                i--;
                _killedEnemies++;
            }
        }
    }
}

void GameEngine::updateEnemies() {
    if (_cycle % 10 == 0) {
        for (int i = 0; i < _enemies.size(); i++) {
            if (!_enemies[i]->move()) {
                _enemies.erase(i);
                i--;
            }
            else if (_enemies[i]->checkCollisions(_bullets)) {
                _enemies.erase(i);
                i--;
                _killedEnemies++;
            }
        }

        if (_player.checkCollisions(_enemies)) {
            _HP--;
            _killedEnemies++;
            if (_HP == 0) {
                throw std::runtime_error("Player is dead");
            }
        }

    }
}

void GameEngine::addEnemies() {
    if (_cycle % 10 == 0) {
        int x = rand() % _visual.getWidth() + 1;
        _enemies.push(Ptr<Enemy>(new Comet(&_visual, x, 1)));
    }
}

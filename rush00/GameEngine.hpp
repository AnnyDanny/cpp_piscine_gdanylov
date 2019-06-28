#ifndef GAMEENGINE_HPP
#define GAMEENGINE_HPP

#include "Array.hpp"
#include "Bullet.hpp"
#include "Common.hpp"
#include "Player.hpp"
#include "Visual.hpp"
#include <cstdint>

class GameEngine {
  public:
    GameEngine();
    ~GameEngine();
    void run();
    void checkColosion();

  private:
    void updateMoving();
    bool readInput();

    Visual _visual;
    Player _player;
    // Enemies enemies[10];
    Array<Bullet> _bullets;
    uint32_t _cycle;
};

#endif
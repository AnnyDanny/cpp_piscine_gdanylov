#ifndef GAMEENGINE_HPP
#define GAMEENGINE_HPP

#include <cstdint>

#include "Array.hpp"
#include "Bullet.hpp"
#include "Common.hpp"
#include "Enemy.hpp"
#include "Player.hpp"
#include "Ptr.hpp"
#include "Visual.hpp"

class GameEngine {
  public:
    GameEngine();
    ~GameEngine();
    void run();

  private:
    void updateMoving();
    void updateBullets();
    void updateEnemies();
    void addEnemies();
    bool readInput();

    Visual _visual;
    Player _player;
    Array<Ptr<Enemy> > _enemies;
    Array<Bullet> _bullets;
    uint32_t _cycle;
    int _killedEnemies;
    int _HP;
};

#endif
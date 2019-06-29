#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "Array.hpp"
#include "Entity.hpp"

class Bullet;

class Enemy : public Entity {
  public:
    Enemy(Visual *vis, int x, int y, char pic);
    ~Enemy();
    virtual bool move() = 0;
    bool checkCollisions(Array<Bullet> &bullets);
};

#endif
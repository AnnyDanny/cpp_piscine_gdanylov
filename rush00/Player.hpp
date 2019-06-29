#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Array.hpp"
#include "Enemy.hpp"
#include "Entity.hpp"
#include "Ptr.hpp"

class Player : public Entity {
  public:
    explicit Player(Visual *visual);
    void moveLeft();
    void moveRight();
    void moveUp();
    void moveDown();
    bool checkCollisions(Array<Ptr<Enemy> > &enemies);
};

#endif
#ifndef Bullet_HPP_
#define Bullet_HPP_

#include "Array.hpp"
#include "Enemy.hpp"
#include "Entity.hpp"
#include "Ptr.hpp"

class Bullet : public Entity {
  public:
    Bullet();
    Bullet(Visual *vis, int x, int y);
    ~Bullet();
    bool move();
    bool checkCollisions(Array<Ptr<Enemy> > &enemies);
};

#endif  // Bullet_HPP_

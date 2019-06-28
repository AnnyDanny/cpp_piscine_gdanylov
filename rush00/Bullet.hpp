#ifndef Bullet_HPP_
#define Bullet_HPP_

#include "Entity.hpp"

class Bullet : public Entity {
  public:
    Bullet();
    Bullet(Visual *vis, int x, int y);
    ~Bullet();
    bool move();
};



#endif //Bullet_HPP_

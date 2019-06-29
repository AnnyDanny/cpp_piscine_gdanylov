#ifndef Comet_HPP_
#define Comet_HPP_

#include "Enemy.hpp"

class Comet : public Enemy {
  public:
    Comet(Visual *vis, int x, int y);
    bool move();
};

#endif  // Comet_HPP_

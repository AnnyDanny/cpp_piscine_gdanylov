#ifndef PLAYER_HPP
#define PLAYER_HPP


#include "Entity.hpp"

class Player : public Entity {
    public:
        Player();
        Player(int x, int y);
        void moveLeft();
        void moveRight();
        void moveUp();
        void moveDown();
};

#endif
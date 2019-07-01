#ifndef ENTITY_HPP
#define ENTITY_HPP

#include "Visual.hpp"
#include <cstddef>

class Entity {
    public:
    	Entity(Visual *vis, int x, int y, char pic);
        virtual ~Entity();
        int getX();
        int getY();
        bool isInsideWindow();
        virtual void draw();
        virtual void del();
    protected:
        Visual *_visual;
    	char _pic;
        int _x;
        int _y;
};


#endif



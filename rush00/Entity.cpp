#include "Entity.hpp"


Entity::Entity(Visual *vis, int x, int y, char pic) : _visual(vis), _pic(pic), _x(x), _y(y) {
}

Entity::~Entity() {}

int Entity::getX() {
    return _x;
}

int Entity::getY() {
    return _y;
}

bool Entity::isInsideWindow() {
	return _visual->isInsideWindow(_x, _y);
}

void Entity::draw() {
	_visual->draw(_x, _y, _pic);
}

void Entity::del(){
    _visual->del(_x, _y);
}

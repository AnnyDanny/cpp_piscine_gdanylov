#ifndef ENTITY_HPP
#define ENTITY_HPP

class Entity {
public:
	int getX();
	int getY();
	Entity();
	virtual ~Entity();
private:
	int x;
	int y;
	int backgroundColor;
	int color;
	wchar_t symbol;
	void draw();
};

#endif
#ifndef ENTITY_HPP
#define ENTITY_HPP

// class Entity {
// public:
// 	int getX(int x);
// 	int getY(int y);
// 	Entity();
// 	virtual ~Entity();
// private:
// 	int backgroundColor;
// 	int color;
// 	wchar_t symbol;
// 	void draw();

// // protected:
//         int x;
//         int y;
// };






class Entity {
    public:
        int getX();
        int getY();

    protected:
        int _x;
        int _y;
};


#endif



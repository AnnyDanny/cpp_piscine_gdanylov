#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include <iostream>

class Enemy {
        private:
        	int _hp;
        	std::string _type;
        public:
            Enemy(int hp, std::string const & type);
			~Enemy();
			Enemy(Enemy const &copy);
            std::string getType() const;
            int getHP() const;
            virtual void takeDamage(int);
            void setHP(int);
            Enemy & operator=(const Enemy &over);
 };



 #endif



//  У врага есть количество хитпоинтов и тип.
// • Враг может получить урон (что уменьшает его здоровье). Если урон <0, не делайте
// что-нибудь.
#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>
#include <cmath>
#include "Sprite.h"
#include <vector>

enum EnemyType
{

};

class Enemy : public Object{
private:
    Sprite* img;
    
public:
    Enemy(EnemyType tanlNum, int posX,int posY,std::string pathImage);
    void Input();
    void Update(std::vector<Enemy*> enemies);
    void Draw();
};

#endif 
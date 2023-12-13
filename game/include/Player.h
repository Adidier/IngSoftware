#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <cmath>
#include "Sprite.h"
#include <vector>

enum TankPlayer
{
    Tank1,
    Tank2,
    Tank3,
    Tank4,
    max
};

class Enemy;

class Player : public Object{
private:
    Sprite* img;
    float posX;
    float posX;
    float energy;
    
public:
    Player(TankPlayer tanlNum, int posX,int posY,std::string pathImage);
    void Input();
    void Update(std::vector<Enemy*> enemies);
    void Draw();
};

#endif 
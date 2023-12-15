// tank.h
#ifndef TANK_H
#define TANK_H

#include <iostream>
#include "../build/Collider.h"

class Tank {
private:
    Collider m_collider;
public:
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
    const Collider getCollider();
};

#endif // TANK_H
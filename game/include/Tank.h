// tank.h
#ifndef TANK_H
#define TANK_H

#include <iostream>

class Tank {

    private:
    int x;  // Posición en el eje X
    int y;  // Posición en el eje Y
public:
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
};

#endif // TANK_H
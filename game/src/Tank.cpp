// tank.cpp
#include "tank.h"


Tank::Tank() : x(0), y(0) {}

void Tank::moveUp() {
    y++;
    std::cout << "Tanque moviéndose hacia arriba. Nueva posición: (" << x << ", " << y << ")" << std::endl;
}

void Tank::moveDown() {
    y--;
    std::cout << "Tanque moviéndose hacia abajo. Nueva posición: (" << x << ", " << y << ")" << std::endl;
}

void Tank::moveLeft() {
    x--;
    std::cout << "Tanque moviéndose hacia la izquierda. Nueva posición: (" << x << ", " << y << ")" << std::endl;
}

void Tank::moveRight() {
    x++;
    std::cout << "Tanque moviéndose hacia la derecha. Nueva posición: (" << x << ", " << y << ")" << std::endl;
}
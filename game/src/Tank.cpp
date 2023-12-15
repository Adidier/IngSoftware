// tank.cpp
#include "tank.h"

void Tank::moveUp() {
    std::cout << "Tanque moviéndose hacia arriba" << std::endl;
}

void Tank::moveDown() {
    std::cout << "Tanque moviéndose hacia abajo" << std::endl;
}

void Tank::moveLeft() {
    std::cout << "Tanque moviéndose hacia la izquierda" << std::endl;
}

void Tank::moveRight() {
    std::cout << "Tanque moviéndose hacia la derecha" << std::endl;
}

const Collider Tank::getCollider()
{
    return m_collider;
}

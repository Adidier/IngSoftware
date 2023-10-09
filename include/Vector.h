#include <iostream>

class Vector3{
    public:
    float m_x,m_y,m_z; //Variables para el vector 3D sisi
    public:
    Vector3(float x,float y, float z); //Constructor genial
    float getX();
    float getY();
    float getZ();
    Vector3 add(const Vector3 &addVector); // Vector que suma al vector original otro vector
};

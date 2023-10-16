#include <iostream>

class Vector3{
    public:
    float m_x,m_y,m_z; //Variables para el vector 3D sisi
    public:
    Vector3(float x,float y, float z); //Constructor genial
    float getX(); //get valor x
    float getY();//get valor y
    float getZ();//get valor z
    Vector3 add(const Vector3 &addVector); // Vector que suma al vector original otro vector
    Vector3 multiScalar(float &t_scalar); //Vector que se multiplica por un escalar
    Vector3 operator*(float &t_scalar);
    static float dot(const Vector3 &t_v1, const Vector3 &t_v2);
    Vector3 sub(const Vector3& subVector);

    Vector3 operator+(const Vector3& vec2);
    float magnitude();
    static float magnitude(const Vector3& vector);
};

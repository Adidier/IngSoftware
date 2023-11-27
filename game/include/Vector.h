#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <cmath>

class Vector3{
    public:
    float m_x,m_y,m_z; //Variables para el vector 3D sisi
    float m_directionX;
    float m_directionY;
    float m_directionZ;
    void direction();
    public:
    //Rodrigo
    Vector3(float x,float y, float z); //Constructor genial
    Vector3();

    float getX(); //get valor x
    float getY();//get valor y
    float getZ();//get valor z
    Vector3 add(const Vector3 &addVector); // Vector que suma al vector original otro vector
    Vector3 multiScalar(float &t_scalar); //Vector que se multiplica por un escalar
    static Vector3 cross(Vector3 &t_v1, Vector3 &t_v2);
    static float dot(const Vector3 &t_v1, const Vector3 &t_v2);
    Vector3 sub(const Vector3& subVector);
    //Alfredo
    float getDirectionAxisX(); // float que regresa la direccion de x
    float getDirectionAxisY(); // float que regresa la direccion de y
    float getDirectionAxisZ(); // float que regresa la direccion de z
    float magnitude();
    static float magnitude(const Vector3& vector);
  
    Vector3 operator*(float &t_scalar);
    float operator*(const Vector3 &t_v2);
    Vector3 operator-(Vector3 &t_vector);
    /**
     * @brief Get the file name of a public key
     *
     * @param rPublicKey The public key
     * @return int The file name of the public key
     */
    Vector3 operator+(const Vector3& vec2);
};

#endif 
#include <iostream>
#include"Vector.h"
#include <cmath>


/**
 * @brief Suma otro vector a la instancia actual.
 *
 * Esta función toma un objeto Vector3 por referencia, aunque si eres malo en age como Kevin no le vas a entender >:c, lo suma a la instancia
 * actual y devuelve un nuevo objeto Vector3 que contiene el resultado de la suma.
 *
 * @param addVector Un objeto Vector3 que se sumará al objeto actual.
 *
 * @return Un nuevo objeto Vector3 que representa la suma de la instancia actual
 *         y addVector.
 * @author [Alfredo :c no sirve la docuemntacion tache :c]
 */


Vector3::Vector3()
{
    m_x = 0;
    m_y = 0;
    m_z = 0;
}

Vector3::Vector3(float t_x, float t_y, float t_z)
{
    m_x = t_x;
    m_y = t_y;
    m_z = t_z; 
    direction();
}

Vector3 Vector3::add(const Vector3 &addVector)
{
    m_x += addVector.m_x;
    m_y += addVector.m_y;
    m_z += addVector.m_z;
    direction();
    return Vector3(m_x,m_y,m_z);
}

Vector3 Vector3::multiScalar(float &t_scalar)
{
    m_x *= t_scalar;
    m_y *= t_scalar;
    m_z *= t_scalar;
    direction();
    return Vector3(m_x, m_y, m_z);
}

Vector3 Vector3::operator*(float &t_scalar)
{
    m_x *= t_scalar;
    m_y *= t_scalar;
    m_z *= t_scalar;
    direction();
    return Vector3(m_x, m_y, m_z);
}

float Vector3::dot(const Vector3 &t_v1, const Vector3 &t_v2)
{
    return (t_v1.m_x * t_v2.m_x + t_v1.m_y * t_v2.m_y + t_v1.m_z * t_v2.m_z);
}

Vector3 Vector3::operator-(Vector3 &t_vector)
{
    return Vector3(this->m_x - t_vector.m_x, this->m_y - t_vector.m_y, this->m_z - t_vector.m_z);
}

Vector3 Vector3::cross(Vector3 &t_v1, Vector3 &t_v2)
{
    //(bz - cy)i, (cx - az)j, (ay - bx)k
    // a b c
    // x y z
    return Vector3((t_v1.m_y * t_v2.m_z) - (t_v1.m_z * t_v2.m_y),
                   (t_v1.m_z * t_v2.m_x) - (t_v1.m_x * t_v2.m_z),
                   (t_v1.m_x * t_v2.m_y) - (t_v1.m_y * t_v2.m_x));
}

Vector3 Vector3::sub(const Vector3& subVector)
{
    m_x -= subVector.m_x;
    m_y -= subVector.m_y;
    m_z -= subVector.m_z;
    direction();
    return Vector3(m_x, m_y, m_z);
}

Vector3 Vector3::operator+(const Vector3& vec2)
{
    return add(vec2);
}

float Vector3::magnitude()
{
    return sqrt(m_x * m_x + m_y * m_y + m_z * m_z);
}

float Vector3::magnitude(const Vector3& vector)
{
    return sqrt(vector.m_x * vector.m_x + vector.m_y * vector.m_y + vector.m_z * vector.m_z);
}

float Vector3::operator*(const Vector3 &t_v2) 
{
    return dot(*this, t_v2); //se retiro el*en this
}

void Vector3::direction()
{
    const float PI = 3.1416;
    float m_mag = std::sqrt(pow(m_x,2)+pow(m_y,2)+pow(m_z,2));
    m_directionX = std::acos(m_x/m_mag) + 180/ (PI); //No me dejo poner el M_PI :C 
    m_directionY = std::acos(m_y/m_mag) + 180/ (PI); //No me dejo poner el M_PI :C 
    m_directionZ = std::acos(m_z/m_mag) + 180/ (PI); //No me dejo poner el M_PI :C 
}

float Vector3::getDirectionAxisX() 
{
    return m_directionX;
}

float Vector3::getDirectionAxisY() 
{
    return m_directionY;
}

float Vector3::getDirectionAxisZ() 
{
    return m_directionZ;
}
#include <iostream>
#include"Vector.h"

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


Vector3::Vector3(float t_x, float t_y, float t_z)
{
    m_x = t_x;
    m_y = t_y;
    m_z = t_z; 
}

Vector3 Vector3::add(const Vector3 &addVector)
{
    //addVector.m_x = 10f;
    this->m_x += addVector.m_x;
    this->m_y += addVector.m_y;
    this->m_z += addVector.m_z;
    return Vector3(this->m_x,this->m_y,this->m_z);
}
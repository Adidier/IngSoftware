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

        /**
     * @brief Constructor con parametros
     *
     * @param x Componente x del vector
     * * @param y Componente y del vector
     * * @param z Componente z del vector
     * @return
     */

    Vector3(float t_x, float t_y, float t_z); 
    /**
     * @brief Regresa la componente "x" del vector
     *
     * @param
     * @return float El valor de la componente "x"
     */

    float getX(); 
    /**
     * @brief Regresa la componente "y" del vector
     *
     * @param
     * @return float El valor de la componente "y"
     */

    float getY();
    /**
     * @brief Regresa la componente "z" del vector
     *
     * @param
     * @return float El valor de la componente "z"
     */

    float getZ();
    /**
     * @brief Suma de dos vectores
     *
     * @param addVector El vector que se va a sumar
     * @return Vector3 El resultado de la suma del vector original con el que se le pasa de parametro
     */

    Vector3 add(const Vector3 &addVector); // Vector que suma al vector original otro vector
    /**
     * @brief Multiplicacion del vector por un escalar
     *
     * @param t_scalar El escalar por el que se va a multiplicar
     * @return Vector3 El resultado de multiplicar el vector original por el escalar que se le paso como parametro
     */

    Vector3 multiScalar(float &t_scalar); //Vector que se multiplica por un escalar
    /**
     * @brief Producto cruz entre dos vectores
     *
     * @param t_v1 Vector uno para el producto cruz
     * * @param t_v2 Vector uno para el producto cruz
     * @return Vector3 El resultado del producto cruz de los vectores
     */

    static Vector3 cross(Vector3 &t_v1, Vector3 &t_v2);
    /**
     * @brief Producto punto entre dos vectores
     *
     * @param t_v1 Vector uno para el producto punto
     * * @param t_v2 Vector uno para el producto punto
     * @return float El resultado del producto punto de los vectores
     */

    static float dot(const Vector3 &t_v1, const Vector3 &t_v2);
    /**
     * @brief Resta de dos vectores
     *
     * @param addVector El vector que se va a restar
     * @return Vector3 El resultado de la resta del vector original con el que se le pasa de parametro
     */
    Vector3 sub(const Vector3& subVector);
    float getDirectionAxisX(); // float que regresa la direccion de x
    float getDirectionAxisY(); // float que regresa la direccion de y
    float getDirectionAxisZ(); // float que regresa la direccion de z
    float magnitude();
    static float magnitude(const Vector3& vector);
  
    Vector3 operator*(float &t_scalar);
    float operator*(const Vector3 &t_v2);
    Vector3 operator-(Vector3 &t_vector);
    Vector3 operator+(const Vector3& vec2);
};

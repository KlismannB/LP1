#include "Circulo.hpp"
#define PI 3.14159

Circulo::Circulo()
    : FiguraGeometrica("Circulo")
{
    raio = 0;
}

Circulo::Circulo(float R)
    : FiguraGeometrica("Circulo")
{
    raio = R;
}

float Circulo::calcularArea(){

    float area = 0;
    
    area = PI * raio * raio;
    return area;
}
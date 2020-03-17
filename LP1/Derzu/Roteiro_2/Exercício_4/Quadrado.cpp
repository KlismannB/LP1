#include "Quadrado.hpp"

Quadrado::Quadrado()
    : FiguraGeometrica("Quadrado")
{
    lado = 0;
}

Quadrado::Quadrado(float L)
    : FiguraGeometrica("Quadrado")
{
    lado = L;
}

float Quadrado::calcularArea(){

    float area = 0;

    area = lado*lado;
    return area;
}
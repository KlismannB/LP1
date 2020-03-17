#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP

#include "FiguraGeometrica.hpp"

class Triangulo : public FiguraGeometrica
{
    private:

        float lado_1;
        float lado_2;
        float lado_3;

    public:

        Triangulo();
        Triangulo(float, float, float);
        float calcularArea();
        
};


#endif
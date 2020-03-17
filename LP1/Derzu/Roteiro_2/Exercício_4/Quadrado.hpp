#ifndef QUADRADO_HPP
#define QUADRADO_HPP
#include "FiguraGeometrica.hpp"

class Quadrado : public FiguraGeometrica
{
    private:
        float lado;

    public:

        Quadrado();
        Quadrado(float);
        float calcularArea();
        
};

#endif
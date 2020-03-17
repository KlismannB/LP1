#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include "FiguraGeometrica.hpp"

class Circulo : public FiguraGeometrica
{
    private:

        float raio;

    public:

        Circulo();
        Circulo(float);
        float calcularArea();
    
};


#endif
#ifndef FIGURA_H
#define FIGURA_H
#include <iostream>

class FiguraGeometrica
{
    protected:
        std::string nome;
        float calcularArea();

    public:
        FiguraGeometrica();
        FiguraGeometrica(std::string name);
        std::string getNome();
    
};

#endif
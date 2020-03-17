#ifndef TRABALHADORASSALARIADO_HPP
#define TRABALHADORASSALARIADO_HPP

#include "Trabalhador.hpp"
#include <iostream>

class TrabalhadorAssalariado : public Trabalhador
{

    public:

        TrabalhadorAssalariado(std::string name, float salary);
        float calcularPagamentoSemanal();

};


#endif
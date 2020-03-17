#ifndef TRABALHADORHORA_H
#define TRABALHADORHORA_H

#include "Trabalhador.hpp"

class TrabalhadorPorHora : public Trabalhador
{
    private:
        
        float valorDaHora;

    public:

        TrabalhadorPorHora(std::string name, float value);
        float calcularPagamentoSemanal(int);
        
};


#endif
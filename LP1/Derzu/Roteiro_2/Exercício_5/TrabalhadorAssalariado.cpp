#include "TrabalhadorAssalariado.hpp"

#include <iostream>

TrabalhadorAssalariado::TrabalhadorAssalariado(std::string name, float salary)
    : Trabalhador(name, salary)
{
}

float TrabalhadorAssalariado::calcularPagamentoSemanal(){

    return salario/4.0;

}
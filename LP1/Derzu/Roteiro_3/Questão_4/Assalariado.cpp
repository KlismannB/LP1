#include "Assalariado.hpp"
#include <iostream>

Assalariado::Assalariado(std::string name, int id, double salary)
{
    this->nome = name;
    this->matricula = id;
    this->salario = salary;
}

Assalariado::~Assalariado()
{

}

double Assalariado::calcularSalario()
{
    return salario;
}
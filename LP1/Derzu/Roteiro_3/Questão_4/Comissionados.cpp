#include "Funcionario.hpp"
#include "Comissionados.hpp"
#include <iostream>

Comissionados::Comissionados(std::string name, int id, double salary, int sold, double prc)
                : Funcionario(name, id)
{
    this->salario = salary;
    this->vendasSemanais = sold;
    this->percentualComissao = prc;
}

Comissionados::~Comissionados()
{

}

double Comissionados::calcularSalario()
{
    this->salario += this->vendasSemanais*this->percentualComissao;

    return this->salario;
}
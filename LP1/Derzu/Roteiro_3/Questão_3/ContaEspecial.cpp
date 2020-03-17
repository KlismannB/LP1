#include "ContaEspecial.hpp"
#include "Conta.hpp"

ContaEspecial::ContaEspecial(std::string name, int number, double amount, double salary)
    : ContaCorrente(name, number, amount, salary)
{
    this->nomeCliente = name;
    this->numero = number;
    this->saldo = amount;
    this->salario = salary;
}

ContaEspecial::~ContaEspecial()
{

}

double ContaEspecial::definirLimite()
{
    return getSalario() * 4;
}
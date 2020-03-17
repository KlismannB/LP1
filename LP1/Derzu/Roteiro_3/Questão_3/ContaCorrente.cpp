#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(std::string name, int number, double amount, double salary)
                : Conta(name, number, amount)   
{
    this->nomeCliente = name;
    this->numero = number;
    this->saldo = amount;
    this->salario = salary;
}

ContaCorrente::~ContaCorrente()
{

}

double ContaCorrente::definirLimite()
{
    return getSalario()*2;
}
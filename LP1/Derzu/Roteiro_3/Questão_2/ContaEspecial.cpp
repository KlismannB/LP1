#include "ContaEspecial.hpp"
#include "Conta.hpp"

ContaEspecial::~ContaEspecial()
{

}

ContaEspecial::ContaEspecial(std::string name, double salary, int number, double amount) : Conta(name, salary, number, amount)
{

}
#include "Poupanca.hpp"
#include "ContaCorrente.hpp"

Poupanca::Poupanca(std::string name, int number, double amount, int variation) 
        : Conta(name, number, amount)
{
    this->nomeCliente = name;
    this->numero = number;
    this->saldo = amount;
    this->variacao = variation;
    this->taxaDeVariacao = 0.005;
}

Poupanca::~Poupanca()
{

}

double Poupanca::render()
{

   if(getVariacao() == 51){
       this->saldo += (this->saldo * this->taxaDeVariacao);
    }else if(getVariacao() == 1){
        this->taxaDeVariacao *= 0.005;
        this->saldo += (this->saldo * this->taxaDeVariacao);
    }

    return saldo;
}
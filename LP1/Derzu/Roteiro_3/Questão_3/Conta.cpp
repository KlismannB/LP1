#include "Conta.hpp"
#include <iostream>

Conta::Conta(std::string name, int number, double amount)
{
    this->nomeCliente = name;
    this->numero = number;
    this->saldo = amount;
}

Conta::~Conta()
{

}

void Conta::sacar(double value)
{
    if(getSaldo() >= value){
        this->saldo -= value;
        std::cout << "Valor sacado com sucesso" << std::endl;
    }else{
        std::cout << "Impossivel sacar esse valor, o saldo eh menor que o valor informado" << std::endl;
    }
}

void Conta::depositar(double value)
{
    this->saldo += value;
    std::cout << "O valor foi depositado com sucesso." << std::endl;
}

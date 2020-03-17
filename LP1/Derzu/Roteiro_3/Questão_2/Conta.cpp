#include "Conta.hpp"
#include "IConta.hpp"
#include <iostream>

Conta::Conta(std::string name, double salary, int number, double amount)
{
    this->nomeCliente = name;
    this->salarioMensal = salary;
    this->numeroConta = number;
    this->saldo = amount;
}

Conta::Conta()
{

}

Conta::~Conta()
{

}

double Conta::saque(double amount)
{
    if(this->saldo >= amount){
        this->saldo -= amount;
        std::cout << "Foi sacado um total de: " << amount <<  " da sua conta, valor restante: " << this->saldo << std::endl;
    }else{
        std::cout << "Saldo insuficiente para saque com o valor informado" << std::endl;
    }

    return saldo;
}

double Conta::depositar(double amount)
{
    this->saldo += amount;
    
    std::cout << "O valor de " << amount << " foi depositado na sua conta" << std::endl; 

    return saldo;
}
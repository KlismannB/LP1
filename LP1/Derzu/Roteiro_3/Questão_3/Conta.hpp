#ifndef CONTA_HPP
#define CONTA_HPP
#include <iostream>

class Conta
{
    protected:
        std::string nomeCliente;
        int numero;
        double saldo;

    public:
        Conta(std::string name, int number, double amount);
        ~Conta();

        std::string getNome(){return nomeCliente;};
        int getNumero(){return numero;};
        double getSaldo(){return saldo;};

        void setNome(std::string name){this->nomeCliente = name;};
        void setNumero(int number){this->numero = number;};
        void setSaldo(double amount){this->saldo = amount;};

        void sacar(double value);
        void depositar(double value);

};

#endif
#pragma once 
#include "IConta.hpp"

class Conta : public IConta
{
    public:
        Conta();
        Conta(std::string name, double salary, int number, double amount);
        ~Conta();

        virtual double definirLimite(double salary)
        {
            this->salarioMensal = salary;

            this->limite = salarioMensal*2;

            return limite;
        };

        double saque(double amount);
        double depositar(double amount); 

        std::string getNome(){return nomeCliente;};
        double getSalario(){return salarioMensal;};
        int getNumeroConta(){return numeroConta;};
        double getSaldo(){return saldo;};
        double getLimite(){return limite;};

        void setNome(std::string name){this->nomeCliente = name;};
        void setSalario(double salary){this->salarioMensal = salary;};
        void setNumeroConta(int number){this->numeroConta = number;};
        void setSaldo(double amount){this->saldo = amount;};

    protected:
        std::string nomeCliente;
        double salarioMensal;
        int numeroConta;
        double saldo;
        double limite;
};
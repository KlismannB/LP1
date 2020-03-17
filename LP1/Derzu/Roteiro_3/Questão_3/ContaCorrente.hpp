#ifndef CONTACORRENTE_HPP
#define CONTACORRENTE_HPP

#include "Conta.hpp"
#include <iostream>

class ContaCorrente : public Conta
{
    public:
        ContaCorrente(std::string name, int number, double amount, double salary);
        ~ContaCorrente();

        double definirLimite();

        double getSalario(){return salario;};
        int getLimite(){return limite;};

        void setSalario(double salary){this->salario = salary;};
        void setLimite(int limit){this-> limite = limit;};

    protected:
        double salario;
        int limite;

};
#endif
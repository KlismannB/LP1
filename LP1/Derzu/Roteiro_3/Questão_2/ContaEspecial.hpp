#pragma once
#include "Conta.hpp"

class ContaEspecial : public Conta
{
    public: 
        ContaEspecial(std::string name, double salary, int number, double amiunt);
        ~ContaEspecial();

        virtual double definirLimite(double salary)
        {
            this->salarioMensal = salary;

            this->limite = salarioMensal*3;

            return limite;
        };
};
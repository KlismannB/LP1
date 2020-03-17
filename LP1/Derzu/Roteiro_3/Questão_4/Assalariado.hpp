#ifndef ASSALARIADO_HPP
#define ASSALARIADO_HPP

#include "Funcionario.hpp"
#include <iostream>

class Assalariado : public Funcionario
{
    public:
        Assalariado(std::string name, int id, double salary);
        ~Assalariado();

        double calcularSalario();

        double getSalario(){return salario;};
        void setSalario(double salary){this->salario = salary;};

    private:
        double salario;

};

#endif
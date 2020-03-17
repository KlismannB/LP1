#ifndef HORISTAS_HPP
#define HORISTAS_HPP

#include <iostream>
#include "Funcionario.hpp"

class Horistas : public Funcionario
{
    public:
        Horistas(std::string name, int id, double salary, int hour);
        ~Horistas();

        double getSalarioHora(){return salarioPorHora;};
        int getHoras(){return horasTrabalhadas;};

        void setSalarioHora(double salaryHour){this->salarioPorHora = salaryHour;};
        void setHoras(int hour){this->horasTrabalhadas = hour;};

        double calcularSalario();

    private:
        double salarioPorHora;
        int horasTrabalhadas;

};


#endif
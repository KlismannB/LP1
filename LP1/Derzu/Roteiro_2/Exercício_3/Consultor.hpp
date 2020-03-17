#ifndef CONSULTOR_HPP
#define CONSULTOR_HPP

#include "Funcionario.hpp"

class Consultor : public Funcionario
{
    public:
        Consultor();
        Consultor(int matricula, std::string nome, double salario);

        double getSalario();
        double getSalario(float percentual);
};

#endif // CONSULTOR_HPP
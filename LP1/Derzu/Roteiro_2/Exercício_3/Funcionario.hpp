#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>

class Funcionario
{
    public:
        Funcionario();
        Funcionario(int id, std::string name, double salary);

        int getMatricula();
        void setMatricula(int id);
        std::string getNome();
        void setNome(std::string nome);
        virtual double getSalario();
        void setSalario(double salario);
        virtual double getSalario(float percentual);
        

    protected:
        int matricula;
        std::string nome;
        double salario;
};

#endif // FUNCIONARIO_HPP
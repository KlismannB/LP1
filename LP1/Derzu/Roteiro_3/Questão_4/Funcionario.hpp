#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>

class Funcionario
{
    public:
        Funcionario();
        Funcionario(std::string name, int id);
        ~Funcionario();

        std::string getNome(){return  nome;};
        int getMatricula(){return matricula;};

        void setNome(std::string name){this->nome = name;};
        void setMatricula(int id){this->matricula = id;};

        virtual double calcularSalario();

    protected:
        std::string nome;
        int matricula;

};

#endif
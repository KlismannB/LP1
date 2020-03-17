#include "Funcionario.hpp"
#include "Horistas.hpp"
#include <iostream>

Horistas::Horistas(std::string name, int id, double salary, int hour)
            : Funcionario(name, id)
{
    this->nome = name;
    this->matricula = id;
    this->salarioPorHora = salary;
    this->horasTrabalhadas = hour;
}

Horistas::~Horistas()
{

}

double Horistas::calcularSalario()
{
    int horas_a_mais;

    if(getHoras() > 40){
        horas_a_mais = 40 - getHoras();
        return (this->salarioPorHora*40) + (this->salarioPorHora*1.5)*horas_a_mais;
    }else{
        return this->salarioPorHora*this->horasTrabalhadas;
    }
}
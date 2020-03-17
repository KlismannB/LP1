#include "Funcionario.hpp"

using namespace std;

Funcionario::Funcionario()
{
    nome = " ";
    salario = matricula = 0;
}

Funcionario::Funcionario(int id, std::string name, double salary){
    setMatricula(id);
    setNome(name);
    setSalario(salary);
}

int Funcionario::getMatricula(){
    return matricula;
}

string Funcionario::getNome(){
    return nome;
}

double Funcionario::getSalario(){
    return salario;
}

double Funcionario::getSalario(float percentual){

}

void Funcionario::setMatricula(int id){
    if(matricula > 0)
        this->matricula = id;
    else
        this->matricula = 0;
}

void Funcionario::setNome(string name){
    this->nome = name;
}

void Funcionario::setSalario(double salary){
    if(salario > 0)
        this->salario = salary;
    else
        this->salario = 0;
}

#ifndef SISTEMAGERENCIAFOLHA_HPP
#define SISTEMAGERENCIAFOLHA_HPP

#include "Funcionario.hpp"
#include <vector>

class SistemaGerenciaFolha
{
    public:
        SistemaGerenciaFolha(std::vector <Funcionario*> worker, double brute);
        ~SistemaGerenciaFolha();

        void setFuncionarios(std::vector <Funcionario*> employer){this->funcionarios =  employer;};
        double calculaValorTotalFolha();
        double consultaSalarioFuncionario(std::string name);

        std::vector <Funcionario*> funcionarios;
    
    protected:
        double saldoBruto;

};

#endif

#include "SistemaGerenciaFolha.hpp"
#include "OrcamentoEstouradoException.hpp"
#include "FuncionarioNaoExisteException.hpp"
#include <iostream>
#include <vector>

SistemaGerenciaFolha::SistemaGerenciaFolha(std::vector <Funcionario*> worker, double brute)
{
    this->saldoBruto = brute;
}

SistemaGerenciaFolha::~SistemaGerenciaFolha()
{

}

double SistemaGerenciaFolha::calculaValorTotalFolha()
{
    double descontosPagamentos;

    for(Funcionario *worker : funcionarios){
        descontosPagamentos += worker->calcularSalario();
    }

    if(descontosPagamentos > this->saldoBruto)
            throw OrcamentoEstouradoException();
    else
        return descontosPagamentos;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string name)
{
    Funcionario *resposta = NULL;

    for (Funcionario *worker : funcionarios)
    {
        if(worker->getNome() == name){
            return worker->calcularSalario();
        }else{
            throw FuncionarioNaoExisteException();
        }
    }

    return 0;
}


#include <iostream>
#include "SistemaGerenciaFolha.hpp"
#include "SistemaGerenciaFolha.cpp"
#include "Funcionario.hpp"
#include "Funcionario.cpp"
#include "Horistas.hpp"
#include "Horistas.cpp"
#include "Assalariado.hpp"
#include "Assalariado.cpp"
#include "Comissionados.hpp"
#include "Comissionados.cpp"
#include "FuncionarioNaoExisteException.hpp"
#include "FuncionarioNaoExisteException.cpp"
#include "OrcamentoEstouradoException.hpp"
#include "OrcamentoEstouradoException.cpp"
#include <vector>

using namespace std;

int main(void)
{
    Assalariado *funcionarioAssalariado = new Assalariado("Klismann", 1001, 450);
    Horistas *funcionarioHorista = new Horistas("Kevertonn", 1002, 500, 4);
    Comissionados *funcionarioComissionado = new Comissionados("Dioni", 1003, 200, 13, 0.05);

    std::vector <Funcionario*> funcionario;

    funcionario.push_back(funcionarioAssalariado);
    funcionario.push_back(funcionarioHorista);
    funcionario.push_back(funcionarioComissionado);

    SistemaGerenciaFolha *folha = new SistemaGerenciaFolha(funcionario, 50000);

    try
    {
        cout << "O total a ser pago aos funcionarios é: " << folha->calculaValorTotalFolha() << endl;
    }
    catch(OrcamentoEstouradoException e)
    {
        cout << "O orcamento eh insuficiente para pagar os funcionarios" << endl;
    }

    try
    {
        double sal = folha->consultaSalarioFuncionario("Arnaldo");
        cout << "O salario de Arnaldo foi encontrado." << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Nao existe Arnaldo no sistema" << endl;
    }
    

}
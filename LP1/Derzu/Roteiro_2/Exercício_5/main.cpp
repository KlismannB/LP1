#include "Trabalhador.cpp"
#include "TrabalhadorAssalariado.cpp"
#include "TrabalhadorPorHora.cpp"

#include <iostream>

int main(){

    TrabalhadorAssalariado T1("Ze Ninguem", 1200);
    TrabalhadorPorHora T2("Fulano", 2.5);

    std::cout << T1.nome << std::endl << T1.calcularPagamentoSemanal() << std::endl << T1.salario << std::endl << std::endl;
    std::cout << T2.nome << std::endl << T2.calcularPagamentoSemanal(50) << std::endl << T2.salario << std::endl << std::endl;
    
    return 0;

}
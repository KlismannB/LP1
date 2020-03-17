#include <iostream>
#include "Funcionario.cpp"
#include "Funcionario.hpp"
#include "Gerente.cpp"
#include "Gerente.hpp"

using namespace std;

int main(void)
{
    Funcionario  *joaoGerente = new Gerente();
    cout << "Ta safe" << endl;
}
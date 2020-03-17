#include <iostream>
#include "Consultor.hpp"

using namespace std;

int main()
{
    Funcionario f1 = Funcionario(1234, "Victor Gorgonho", 4500.00);
    Funcionario *c1 = new Consultor(4321, "Jose Victor", 4500.00);

    cout << "Nome do Funcionario: " << f1.getNome() << " possui Matricula: " << f1.getMatricula() << " e Salario: " << f1.getSalario() << endl << endl;
    cout << "Nome do Consultor: " << c1->getNome() << " possui Matricula: " << c1->getMatricula() << " e Salario (com 10% de aumento): " << c1->getSalario() << endl;
    cout << "Salario (com 50% de aumento): " << c1->getSalario(50) << endl;

    return 0;
}

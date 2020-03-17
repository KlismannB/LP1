#include <iostream>
#include "Conta.hpp"
#include "Conta.cpp"
#include "ContaCorrente.hpp"
#include "ContaCorrente.cpp"
#include "Poupanca.hpp"
#include "Poupanca.cpp"
#include "ContaEspecial.hpp"
#include "ContaEspecial.cpp"

using namespace std;

int main(void)
{
    ContaCorrente *Conta1 = new ContaCorrente("Kevertonn", 8, 2000, 800);
    ContaEspecial *Conta2 = new ContaEspecial("Edglay", 44, 10000, 16000);
    Poupanca *Conta3 = new Poupanca("Klismann", 18, 4000, 51);

    cout << "O proprietario: " << Conta1->getNome() << " da conta: " << Conta1->getNumero() << ".Possui um limite de: " << Conta1->definirLimite() << endl; 
    cout << "O proprietario: " << Conta2->getNome() << " da conta: " << Conta2->getNumero() << ".Possui um limite de: " << Conta2->definirLimite() << endl;
    cout << "O proprietario: " << Conta3->getNome() << " da conta: " << Conta3->getNumero() << ".Possui um rendimento de: " << Conta3->render() << endl;

    cout << "Novo saldo da conta de: "<< Conta3->getNome() << " da conta: " << Conta3->getNumero() << " .Possui um novo saldo de: " << Conta3->getSaldo() << endl;
}

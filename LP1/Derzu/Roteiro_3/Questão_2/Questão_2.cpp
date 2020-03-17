#include <iostream>
#include "Conta.hpp"
#include "Conta.cpp"
#include "ContaEspecial.hpp"
#include "ContaEspecial.cpp"
#include "IConta.hpp"
#include "IConta.cpp"

using namespace std;

int main(void)
{
    Conta *contaPrincipal = new Conta("Klismann", 4600, 001, 5000);

    cout << "Ola Senhor: " << contaPrincipal->getNome() << endl;
    cout << "Um novo salário foi inserido. Valor: " << contaPrincipal->getSalario() << endl;
    cout << "Seu saldo é: " << contaPrincipal->getSaldo() << endl;
    contaPrincipal->saque(400);
    cout << "Seu novo saldo após o saque de 400 reais é: " << contaPrincipal->getSaldo() << endl;
    contaPrincipal->depositar(600);
    cout << "Seu novo saldo apos o deposito de 600 reais é: " << contaPrincipal->getSaldo() << endl;
    cout << "Seu limite de saldo é: " << contaPrincipal->definirLimite(contaPrincipal->getSalario()) << endl;

    ContaEspecial *contaDoMilionário = new ContaEspecial("Christian Grey", 100000, 001, 460000);

    cout << "Ola Senhor: " << contaDoMilionário->getNome() << endl;
    cout << "Um novo salario foi inserido. Valor: " << contaDoMilionário->getSalario() << endl;
    cout << "Seu saldo é: " << contaDoMilionário->getSaldo() << endl;
    contaDoMilionário->saque(500000);
    cout << "Seu novo saldo após o saque de 500000 reais é: " << contaDoMilionário->getSaldo() << endl;
    contaDoMilionário->depositar(100000);
    cout << "Seu novo saldo apos o deposito de 1000000 reais é: " << contaDoMilionário->getSaldo() << endl;
    cout << "Seu limite de saldo é: " << contaDoMilionário->definirLimite(contaDoMilionário->getSalario()) << endl;
}
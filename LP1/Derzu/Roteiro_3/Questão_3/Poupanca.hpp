#ifndef POUPANCA_HPP
#define POUPANCA_HPP

#include "ContaCorrente.hpp"
#include <iostream>

class Poupanca : public Conta
{
    private:
        int variacao;
        double taxaDeVariacao;

    public:
        Poupanca(std::string name, int number, double amount, int variation);
        ~Poupanca();

        int getVariacao(){return variacao;};
        double getTaxa(){return taxaDeVariacao;};

        void setVariacao(int var){this->variacao = var;};
        void setTaxa(double tax){this->taxaDeVariacao = tax;};

        double render();
};

#endif
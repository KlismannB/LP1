#ifndef CONTAESPECIAL_HPP
#define CONTAESPECIAL_HPP

#include "ContaCorrente.hpp"

class ContaEspecial : public ContaCorrente
{
    public:
        ContaEspecial(std::string name, int number, double amount, double salary);
        ~ContaEspecial();

        double definirLimite();
};

#endif
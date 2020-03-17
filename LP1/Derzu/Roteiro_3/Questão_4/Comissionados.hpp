#ifndef COMISSIONADOS_HPP
#define COMISSIONADOS_HPP

#include "Funcionario.hpp"

class Comissionados : public Funcionario
{
    public:
        Comissionados(std::string name, int id, double salary, int sold, double prc);
        ~Comissionados();

        int getVendas(){return vendasSemanais;};
        double getPercentual(){return percentualComissao;};

        void setVendas(int sold){this->vendasSemanais = sold;};
        void setPercentual(double prc){this->percentualComissao = prc;};

        double calcularSalario();

    private:
        int vendasSemanais;
        double percentualComissao;
        double salario;
};

#endif
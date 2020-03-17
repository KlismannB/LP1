#ifndef ORCAMENTOESTOURADOEXCEPTION_HPP
#define ORCAMENTOESTOURADOEXCEPTION_HPP
#include <iostream>
#include <exception>

class OrcamentoEstouradoException : public std::exception
{
    public:
        OrcamentoEstouradoException();
};

#endif
#ifndef FUNCIONARIONAOEXISTEEXCEPTION_HPP
#define FUNCIONARIONAOEXISTEEXCEPTION_HPP
#include <iostream>
#include <exception>

class FuncionarioNaoExisteException : public std::exception
{
    public:
        FuncionarioNaoExisteException();
        
};

#endif
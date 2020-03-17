#ifndef ENDERECO_HPP
#define ENDERECO_HPP

#include <iostream>

class Endereco
{
    private:

        std::string rua;
        std::string numero;
        std::string bairro;
        std::string cidade;
        std::string estado;
        std::string cep;

    public:

        Endereco();
        Endereco(std::string street, std::string number, std::string neighborhood, std::string city, std::string state, std::string zipcode);
        std::string toString();

        void setTudo(std::string street, std::string number, std::string neighborhood, std::string city, std::string state, std::string zipcode);
        
    
};


#endif
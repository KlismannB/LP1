#ifndef PESSOA_HPP
#define PESSOA_HPP

#include "Endereco.hpp"

class Pessoa
{
    private:

        std::string nome;
        Endereco endereco;
        std::string telefone;
    
    public:

        Pessoa(std::string name);
        Pessoa(std::string name, Endereco adress, std::string phone);
        
        std::string getNome();
        Endereco getEndereco();
        std::string getEnderecoCompleto();
        std::string getTelefone();

        void setNome(std::string);
        void setEndereco(std::string, std::string, std::string, std::string, std::string, std::string);
        void setTelefone(std::string);


};


#endif
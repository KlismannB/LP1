#include "Pessoa.hpp"

Pessoa::Pessoa(std::string name)
{
    nome = name;
    telefone = "\0";

}

Pessoa::Pessoa(std::string name, Endereco adress, std::string phone){

    nome = name;
    endereco = adress;
    telefone = phone;

}

std::string Pessoa::getNome(){

    return nome;
    
}

Endereco Pessoa::getEndereco(){

    return endereco;
    
}

std::string Pessoa::getEnderecoCompleto(){

    return endereco.toString();

}

std::string Pessoa::getTelefone(){

    return telefone;
    
}

void Pessoa::setNome(std::string name){

    nome = name;
    
}

void Pessoa::setEndereco(std::string street, std::string number, std::string neighborhood, std::string city, std::string state, std::string zipcode){

    endereco.setTudo(street, number, neighborhood, city, state, zipcode);
    
}

void Pessoa::setTelefone(std::string phone){

    telefone = phone;
    
}
#include "Endereco.hpp"

Endereco::Endereco() 
{
    this->rua = "";
    this->numero = 0;
    this->bairro = "";
    this->cidade = "";
    this->estado = "";
    this->cep = "";
}

Endereco::Endereco(std::string street, int number, std::string neighborhood, std::string city,  std::string state, std::string zipcode)
{
    this->rua = street;
    this->numero = number;
    this->bairro = neighborhood;
    this->cidade = city;
    this->estado = state;
    this->cep = zipcode;
}

std::string Endereco::toString()
{
    std::string frase = "Rua: " + rua + "\nNumero: " + std::to_string(numero) + "\nEstado: " + estado + "\nCEP: " + cep;
    return frase;
}

Endereco::~Endereco()
{

}
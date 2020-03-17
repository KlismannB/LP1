//
//  Pessoa.hpp
//  Roteiro 1
//
//  Created by Klismann Barros on 09/02/20.
//  Copyright © 2020 Klismann Barros. All rights reserved.
//

#ifndef Pessoa_hpp
#define Pessoa_hpp

#include <iostream>

class Pessoa
{
public:
    
    Pessoa(std::string name, int age, std::string phone); // Compreto
    Pessoa(std::string name); // So nome
    
    void setNome(std::string name){this->nome = name;}
    std::string getNome(){return nome;}
    void setIdade(int age){this->idade = age;}
    int getIdade(){return idade;}
    void setTelefone(std::string phone){this->telefone = phone;}
    std::string getTelefone(){return telefone;}
private:
    std::string nome;
    int idade;
    std::string telefone;
};

#endif /* Pessoa_hpp */

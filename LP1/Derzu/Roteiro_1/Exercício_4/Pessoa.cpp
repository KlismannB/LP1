//
//  Pessoa.cpp
//  Roteiro 1
//
//  Created by Klismann Barros on 09/02/20.
//  Copyright © 2020 Klismann Barros. All rights reserved.
//

#include "Pessoa.hpp"
#include <iostream>

Pessoa::Pessoa(std::string name)
{
    this->nome = name;
    
    std::cout << "Foi iniciado o cadastramento no sistema uma pessoa de nome " << getNome() << std::endl;
    std::cout << "SISTEMA INFORMA: Necessario mais informacoes para a conclusao do cadastro da pessoa de nome " << getNome() << std::endl;
}

Pessoa::Pessoa(std::string name, int age, std::string phone)
{
    this->nome = name;
    this->idade = age;
    this->telefone = phone;
    std::cout << "Foi cadastado no sistema uma pessoa de nome " << getNome() << " idade " << getIdade() << " anos e telefone " << getTelefone() << std::endl;
    std::cout << "Cadastramento concluido com sucesso!\n" << std::endl;
}

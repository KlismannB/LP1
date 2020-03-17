//
//  InVoice.cpp
//  Roteiro 1
//
//  Created by Klismann Barros on 09/02/20.
//  Copyright © 2020 Klismann Barros. All rights reserved.
//

#include "InVoice.hpp"
#include <iostream>

InVoice::InVoice(std::string number, std::string description, int quantity, float price)
{
    this->numero = number;
    this->descricao = description;
    this->quantidade = quantity;
    this->preco = price;
    
    if(quantidade < 0){
        quantidade = 0;
    }else if(preco < 0){
        preco = 0;
    }
    
};

void InVoice::getInvoiceAmout(int quantity, float price)
{
    this->quantidade = quantity;
    this->preco = price;
    
    float valorFinal = float(quantidade)*preco;
    
    std::cout.precision(2);
    std::cout << "O preço final eh R$ ";
    std::cout << std:: fixed << valorFinal << std::endl;
};

//
//  InVoice.hpp
//  Roteiro 1
//
//  Created by Klismann Barros on 09/02/20.
//  Copyright © 2020 Klismann Barros. All rights reserved.
//

#ifndef InVoice_hpp
#define InVoice_hpp

#include <iostream>


class InVoice {
    
public:
    
    InVoice(std::string number, std::string description, int quantity, float price);
    
    void setNumero(std::string number){this->numero = number;}
        std::string getNumero(){return numero;}
    void setDescricao(std::string description){this->descricao = description;}
        std::string getDescricao(){return descricao;}
    void setQuantidade(int quantity){this->quantidade = quantity;}
        int getQuantidade(){return quantidade;}
    void setPreco(float price){this->preco = price;}
        float getPreco(){return preco;}
    
    void getInvoiceAmout(int quantity, float price);
    
private:
    
    std::string numero;
    std::string descricao;
    int quantidade;
    float preco;
    
};

#endif /* InVoice_hpp */

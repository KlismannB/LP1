//
//  Empregado.hpp
//  Roteiro 1
//
//  Created by Klismann Barros on 09/02/20.
//  Copyright © 2020 Klismann Barros. All rights reserved.
//

#ifndef Empregado_hpp
#define Empregado_hpp

#include <iostream>

class Empregado {
    
public:
    
    Empregado(std::string name, std::string lastName, float salary);
    
    void setNome(std::string name){this->nome = name;};
    std::string getNome(){return nome;};
    void setSobrenome(std::string lastName){this->sobrenome = lastName;};
    std::string getSobrenome(){return sobrenome;};
    void setSalarioMensal(float salary){this->salarioMensal = salary;};
    float getSalarioMensal(){return salarioMensal;};
    
private:
    std::string nome;
    std::string sobrenome;
    float salarioMensal;
};


#endif /* Empregado_hpp */

//
//  Empregado.cpp
//  Roteiro 1
//
//  Created by Klismann Barros on 09/02/20.
//  Copyright © 2020 Klismann Barros. All rights reserved.
//

#include "Empregado.hpp"
#include <iostream>

Empregado::Empregado(std::string name, std::string lastName, float salary)
{
    this->nome = name;
    this->sobrenome = lastName;
    this->salarioMensal = salary;
    
    
    if(salarioMensal < 0){
        std::cout << "O empregado " << getNome() << " " << getSobrenome() << " possui um valor de salario invalido." << std::endl;
    }else{
        std::cout << "O empregado " << getNome() << " " << getSobrenome() << " possui um salario anual de R$ ";
        std::cout.precision(2);
        std::cout << std::fixed << getSalarioMensal()*12 << std::endl;
        
        std::cout << "Apos o reajuste salarial previsto para o primeiro trimeste de 2020 seu salario anual que anteriormente era de R$ " << getSalarioMensal()*12 << " ficara apos o reajuste: " << ((getSalarioMensal()*12)*11)/10 << std::endl;
    }
    
};

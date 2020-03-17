//
//  Data.cpp
//  Roteiro1
//
//  Created by Klismann Barros on 09/02/20.
//  Copyright © 2020 Klismann Barros. All rights reserved.
//

#include "Data.hpp"
#include <iostream>

Data::Data(int day, int month, int year)
{
    this->dia = day;
    this->mes = month;
    this->ano = year;
    
    if(day <= 0 || day > 31){
        std::cout << "A data " << getDia() << "/" << getMes() << "/" << getAno() <<  " eh invalida" << std::endl;
        std::cout << "Motivo: Dia invalido" << std::endl;
        motivo = 0;
    }else if((((ano % 4 != 0) || (ano % 100 == 0)) || (ano % 400 == 0)) && dia == 29){
        std::cout << "A data " << getDia() << "/" << getMes() << "/" << getAno() <<  " eh invalida" << std::endl;
        std::cout << "Motivo: Dia invalido" << std::endl;
        motivo = 0;
    }else if(mes <= 0 || mes > 12){
        std::cout << "A data " << getDia() << "/" << getMes() << "/" << getAno() <<  " eh invalida" << std::endl;
        std::cout << "Motivo: Mes invalido" << std::endl;
        motivo = 0;
    }else if(ano < 0){
        std::cout << "A data " << getDia() << "/" << getMes() << "/" << getAno() <<  " eh invalida" << std::endl;
        std::cout << "Motivo: Ano invalido" << std::endl;
        motivo = 0;
    }else if((mes == 2 && dia > 29) || ((mes == 4)|| (((mes == 6) || (mes == 9) || (mes == 11)) && dia > 30))){
        std::cout << "A data " << getDia() << "/" << getMes() << "/" << getAno() <<  " eh invalida" << std::endl;
        std::cout << "Motivo: Dia e/ou Mes invalido" << std:: endl;
        motivo = 0;
    }else{
        
        std::cout << "A data " << getDia() << "/" << getMes() << "/" << getAno() <<  " eh valida" << std::endl;
        motivo = 1;
    
    }
    
};

void Data::avancarDia(int day, int month, int year)
{
    
        this->dia = day;
        this->mes = month;
        this->ano = year;
        
    if((dia == 31) && (((mes == 1)) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10))){
        dia = 1;
        mes += 1;
    }else if(mes == 12 && dia == 31){
        dia = 1;
        mes = 1;
        ano += 1;
    }else if(mes == 2 && dia == 29){
        dia = 1;
        mes += 1;
    }else{
        dia += 1;
    }
    
    std::cout << "O proximo dia eh: " << dia << "/" << mes << "/" << ano << std::endl;

}

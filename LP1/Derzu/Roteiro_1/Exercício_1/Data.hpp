//
//  Data.hpp
//  Roteiro1
//
//  Created by Klismann Barros on 09/02/20.
//  Copyright © 2020 Klismann Barros. All rights reserved.
//

#ifndef Data_hpp
#define Data_hpp

#include <stdio.h>

class Data
{

    public:
    
    int motivo;
    
        Data(int day, int month, int year); // Construtor que verifica se a data é valida
    
        void setDia(int dia){this->dia = dia;}
            int getDia(){return dia;}
        
        void setMes(int mes){this->mes = mes;}
            int getMes(){return mes;}
        
        void setAno(int ano){this->ano = ano;}
            int getAno(){return ano;}
    
        void avancarDia(int dia, int mes, int ano);
    
    private:
        int dia;
        int mes;
        int ano;
};

#endif /* Data_hpp */

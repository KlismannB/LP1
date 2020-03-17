#include "Triangulo.hpp"
#include <math.h>

Triangulo::Triangulo()
    : FiguraGeometrica("Triangulo")
{

    lado_1 = 0;
    lado_2 = 0;
    lado_3 = 0;
    
}

Triangulo::Triangulo(float L1, float L2, float L3)
    : FiguraGeometrica("Triangulo")
{

    l1 = L1;
    l2 = L2;
    l3 = L3;
    
}

float Triangulo::calcularArea(){

    float area = 0;
    float h = 0;

    if(l1 == l2 && l1 == l3){ // TRIANGULO EQUILATERO

        area = (pow(l1, 2) * sqrt(3))/4.0;
        return area;

    }

    if(l1 == l2 && l1 != l3){ // TRIANGULO ISOCELES 1 CASO
        
        h = sqrt(pow(l1, 2) - pow((l3/2.0), 2));
        area = (l3 * h)/2.0;
        return area;
    }
    if(l1 == l3 && l1 != l2){ // TRIANGULO ISOCELES 2 CASO
        
        h = sqrt(pow(l1, 2) - pow((l2/2.0), 2));
        area = (l2 * h)/2.0;
        return area;
    }
    if(l2 == l3 && l2 != l1){ // TRIANGULO ISOCELES 3 CASO
        
        h = sqrt(pow(l2, 2) - pow((l1/2.0), 2));
        area = (l1 * h)/2.0;
        return area;
    }

    if(l1 != l2 && l1 != l3 && l2 != l3){ // TEM QUE SER TRIANGULO RETANGULO

        if(l1 < l2 && l2 < l3){

            area = (l1 * l2)/2.0;
            return area;
            
        }
        if(l1 < l3 && l3 < l2){

            area = (l1 * l3)/2.0;
            return area;
            
        }

        if(l2 < l1 && l1 < l3){

            area = (l2 * l1)/2.0;
            return area;
            
        }
        if(l2 < l3 && l3 < l1){

            area = (l2 * l3)/2.0;
            return area;
            
        }

        if(l3 < l1 && l1 < l2){

            area = (l3 * l1)/2.0;
            return area;
            
        }
        if(l3 < l2 && l2 < l1){

            area = (l3 * l2)/2.0;
            return area;
            
        }
    }

    return area;
}
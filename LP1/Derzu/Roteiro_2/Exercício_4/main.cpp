#include "FiguraGeometrica.cpp"
#include "Triangulo.cpp"
#include "Quadrado.cpp"
#include "Circulo.cpp"
#include <iostream>

int main(){

    Triangulo T1(10, 12, 10); // RETANGULO, ISOCELES OU EQUILATERO

    std::cout << T1.getNome() << "\nArea = " << T1.calcularArea() << std::endl << std::endl;

    Quadrado Q1(20);

    std::cout << Q1.getNome() << "\nArea = " << Q1.calcularArea() << std::endl << std::endl;

    Circulo C1(5);

    std::cout << C1.getNome() << "\nArea = " << C1.calcularArea() << std::endl << std::endl;

    return 0;
}
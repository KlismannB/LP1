#include "FiguraGeometrica.hpp"

FiguraGeometrica::FiguraGeometrica(){
    nome = "\0";
}

FiguraGeometrica::FiguraGeometrica(std::string n){
    nome = n;
}

std::string FiguraGeometrica::getNome(){

    return nome;
    
}
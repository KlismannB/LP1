#include "Endereco.cpp"
#include "Pessoa.cpp"
#include <iostream>

int main(){
    Endereco e1("Avenida Oceano Pacifico", "294", "Intermares", "Cabedelo", "PB", "58102-236");

    Pessoa p1("Kevertonn");
    Pessoa p2("Klismann", e1, "(83) 9 99650-5407");

    std::cout << p2.getNome() << std::endl << p2.getEnderecoCompleto() << std::endl << p2.getTelefone() << std::endl << std::endl;

    p1.setEndereco("SAS", "S/N", "Asa Sul", "Brasilia", "DF", "(83) 9 96505306");

    Endereco e2 = p1.getEndereco();

    std::cout << e2.toString() << std::endl;  

    return 0;
}
#include "TrabalhadorPorHora.hpp"

TrabalhadorPorHora::TrabalhadorPorHora(std::string name, float valueHour)
    : Trabalhador(n, 0)
{

    valorDaHora = valueHour;

}

float TrabalhadorPorHora::calcularPagamentoSemanal(int hour){

    float extra = 0;
    float payment = 0;

    if(hour > 40){
        extra = H - 40.0;
        extra = extra * 1.5;
        payment = 40 * valorDaHora;
        payment += (horasExtra * valorDaHora);
        salary = payment * 4;
        
        return payment;
    }else{
        pagamento = H * valorDaHora;
        salario = pagamento * 4;

        return payment;
    }
}
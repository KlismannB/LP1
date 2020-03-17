//
//  main.cpp
//  Roteiro 1
//
//  Created by Klismann Barros on 09/02/20.
//  Copyright © 2020 Klismann Barros. All rights reserved.
//

#include <iostream>
#include "InVoice.hpp"

int main(int argc, const char * argv[]) {
    InVoice fatura1 = {"ffa500", "Laranja-da-terra", 2, 2.75};
    InVoice fatura2 = {"ff6961", "Maça Argentina", -1, 10};
    
    fatura1.getInvoiceAmout(fatura1.getQuantidade(), fatura1.getPreco());
    fatura2.getInvoiceAmout(fatura2.getQuantidade(), fatura2.getPreco());
    
    return 0;
}

//
//  main.cpp
//  Roteiro1
//
//  Created by Klismann Barros on 09/02/20.
//  Copyright © 2020 Klismann Barros. All rights reserved.
//

#include <iostream>
#include "Data.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Data d1 = {31, 3, 2020};
    
    if (d1.motivo){
        d1.avancarDia(d1.getDia(), d1.getMes(), d1.getAno());
    }
    
    return 0;
}

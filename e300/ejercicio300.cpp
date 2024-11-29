#include <iostream>

#include "modulo-interprete.hpp"

using namespace std;

int main(void){
    string comando;
    Interprete interprete = Interprete(); 
    while(cin >> comando){
        interprete.interpretar(comando);
    }
    
    return 0;
}


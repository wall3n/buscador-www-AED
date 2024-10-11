#include <iostream>

using namespace std;

string normalizar(string palabra){
    string salida = "";
    for(unsigned i = 0; i < palabra.length(); i++){
        if(palabra[i] >= 'A' && palabra[i] <= 'Z'){
            salida += tolower(palabra[i]);
        } else if (palabra[i] == char(0xC3)){
            switch(palabra[i+1]){
                case char(0x81):
                    salida += 'a';
                    break;
                case char(0xA1):
                    salida += 'a';
                    break;
                case char(0x89):
                    salida += 'e';
                    break;
                case char(0xA9):
                    salida += 'e';
                    break;
                case char(0x8D):
                    salida += 'i';
                    break;
                case char(0xAD):
                    salida += 'i';
                    break;
                case char(0x93):    
                    salida += 'o';
                    break;
                case char(0xB3):
                    salida += 'o';
                    break;
                case char(0x9A):
                    salida += 'u';
                    break;
                case char(0x9C):
                    salida += 'u';
                    break;
                case char(0xBC):
                    salida += 'u';
                    break;
                case char(0xBA):
                    salida += 'u';
                    break;
                case char(0xB1):
                    salida += char(0xC3);
                    salida += char(0xB1);
                    break;
                case char(0x91):
                    salida += char(0xC3);
                    salida += char(0xB1);
                    break;
                default:
                    salida += char(0xC3);
                    salida += palabra[i+1];
            }
            i++;
        } else {
            salida += palabra[i];
        }
    }
    return salida;

}

int main(void){
    int contador = 1;
    string palabra;

    while(cin >> palabra){
       cout << contador << ". " << palabra << " -> " << normalizar(palabra) << endl;
       contador++;
    }

    return 0;
}


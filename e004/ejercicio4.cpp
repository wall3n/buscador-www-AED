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

int pagInsertadas = 0;

void INSERTAR(){
    ++pagInsertadas;
//    int relevancia;
//    string url, titulo;
//    cin >> relevancia;
//    cin.ignore();
//    getline(cin, url);
//    getline(cin, titulo);

    int contador = 0;
    string palabra;
    while(cin >> palabra){
        if(normalizar(palabra) == "findepagina"){
            break;
        }
        contador++;
    }

    cout << contador << " palabras" << endl; 

}

void BUSCAR_URL(){
    string url;
    cin >> url;
    cout << "u " << url << endl << "Total: 0 resultados" << endl;

}

void BUSCAR_PALABRA(){
    string palabra;
    cin >> palabra;
    cout << "b " << normalizar(palabra) << endl << "Total: 0 resultados" << endl;
}

void BUSCAR_PALABRAS_A(){
    string palabra;
    getline(cin, palabra);

    cout << "a " << normalizar(palabra) << endl << "Total: 0 resultados" << endl;
}

void BUSCAR_PALABRAS_O(){
    string palabra;
    getline(cin, palabra);

    cout << "o " << normalizar(palabra) << endl << "Total: 0 resultados" << endl;
}

void BUSCAR_PREFIJO(){
    string prefijo;
    cin >> prefijo;
    cout << "p " << normalizar(prefijo) << endl << "Total: 0 resultados" << endl;
}

void SALIR(){
    cout << "Saliendo..." << endl;
    exit(0);
}

void Interprete(string comando){
    if(comando == "i"){
       INSERTAR(); 
    } else if(comando == "u"){
        BUSCAR_URL();
    } else if(comando == "b"){
        BUSCAR_PALABRA();
    } else if(comando == "a"){
        BUSCAR_PALABRAS_A();
    } else if(comando == "o"){
        BUSCAR_PALABRAS_O();
    } else if(comando == "p"){
        BUSCAR_PREFIJO();
    } else if(comando == "s"){
        SALIR();
    }
}

int main(void){
    string comando;

    while(cin >> comando){
        Interprete(comando);
    }
    
    return 0;
}


#include "modulo-pagina.hpp"

void Pagina::leer(){
    cin >> relevancia;
    cin.ignore();
    getline(cin, url);
    getline(cin, titulo);
}

void Pagina::escribir(){
    cout << url << ", " << titulo << ", " << "Rel. " << relevancia << endl;
}

string Pagina::getUrl(){
    return url.copy();
}

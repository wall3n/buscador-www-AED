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
    return url;
}

string Pagina::getTitulo(){
    return this->titulo;
}

int Pagina::getRelevancia(){
    return this->relevancia;
}

void Pagina::setTitulo(string nuevo){
    this->titulo = nuevo;
}

void Pagina::setRelevancia(int nueva){
    this->relevancia = nueva;
}

#include "modulo-dicpaginas.hpp"
#include "modulo-arbol.hpp"
#include "modulo-tablahash.hpp"

DicPaginas::DicPaginas(){
    tabla = new TablaHash();
    arbol = new ArbolPalabras();
}

DicPaginas::~DicPaginas(){
    delete tabla;
    delete arbol;
}

int DicPaginas::tamano(){
    return tabla->numElementos();
}

Pagina * DicPaginas::insertar(Pagina nueva){
    return tabla->insertar(nueva);
}

Pagina* DicPaginas::consultar(string url){
    return tabla->consultar(url);
}

void DicPaginas::insertar(string palabra, Pagina * pag){
    return this->arbol->insertar(palabra, pag);
}

list<Pagina *> DicPaginas::buscar(string palabra){
    return this->arbol->buscar(palabra);
}



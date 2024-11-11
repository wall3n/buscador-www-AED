#include "modulo-dicpaginas.hpp"
#include "modulo-tablahash.hpp"

DicPaginas::DicPaginas(){
    tabla = new TablaHash();
}


Pagina* DicPaginas::consultar(string url){
    return tabla->consultar(url);
}

int DicPaginas::tamano(){
    return tabla->numElementos();
}

void DicPaginas::insertar(Pagina nueva){
    tabla->insertar(nueva);
}



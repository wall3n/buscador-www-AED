#include "modulo-dicpaginas.hpp"

DicPaginas::DicPaginas(){
    contador = 0;
}

int DicPaginas::numElem(void){
    return contador;
}

Pagina* DicPaginas::consultar(string url){
    list<Pagina>::iterator itDic = lista.begin();
    while(itDic != lista.end() && itDic->getUrl() != url){
        itDic++;
    }
    if(itDic != lista.end()){
        return &(*itDic);
    }
    return NULL;
}

void DicPaginas::insertar(Pagina nueva){
}



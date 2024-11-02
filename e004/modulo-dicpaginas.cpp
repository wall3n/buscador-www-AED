#include "modulo-dicpaginas.hpp"

DicPaginas::DicPaginas(){
    contador = 0;
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

int DicPaginas::tamano(){
    return contador;
}

void DicPaginas::insertar(Pagina nueva){
    list<Pagina>::iterator itDic = lista.begin();
    while(itDic != lista.end() && itDic->getUrl() < nueva.getUrl()){
        itDic++;
    }
    if(itDic == lista.end() || itDic->getUrl() > nueva.getUrl()){
        lista.insert(itDic, nueva);
        contador = contador + 1;
    } else if (itDic->getUrl() == nueva.getUrl()){
        itDic->setTitulo(nueva.getTitulo());
        itDic->setRelevancia(nueva.getRelevancia());
    }
}



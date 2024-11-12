#include "modulo-tablahash.hpp"
#include "modulo-pagina.hpp"

const float TablaHash::FACTOR_CARGA_MAX = 0.8;
const int TablaHash::TAM_INICIAL = 20000;

TablaHash::TablaHash(){
    this->numElem = 0;
    this->tamTabla = this->TAM_INICIAL;
    this->tabla = new list<Pagina>[this->tamTabla];
}

TablaHash::~TablaHash(){
    delete[] this->tabla;
}

unsigned long TablaHash::hash(string url){
    unsigned long hash = 5381;
    for(int i = 0; i < url.length(); i++){
        unsigned char c = url[i];
        hash = ((hash << 5) + hash) + c;
    }

    return hash;
}

void TablaHash::insertar(Pagina nueva){
    if((float)numElem / tamTabla > FACTOR_CARGA_MAX){
        redimensionar();
    }

    unsigned long indice = hash(nueva.url) % tamTabla;

    list<Pagina>::iterator itDic = tabla[indice].begin();
    while(itDic != tabla[indice].end() && itDic->url < nueva.url){
        itDic++;
    }
    if(itDic == tabla[indice].end() || itDic->url > nueva.url){
        tabla[indice].insert(itDic, nueva);
        numElem++;
    } else if (itDic->url == nueva.url){
        itDic->titulo = nueva.titulo;
        itDic->relevancia = nueva.relevancia;
    }
}

Pagina * TablaHash::consultar(string url){
    unsigned long indice = hash(url) % tamTabla;


    list<Pagina>::iterator itDic = tabla[indice].begin();
    while(itDic != tabla[indice].end() && itDic->url < url){
        itDic++;
    }
    if(itDic->url == url){
        return &(*itDic);
    }
    return NULL;

}

int TablaHash::numElementos(void){
    return this->numElem;
}

void TablaHash::redimensionar(void){
   int nuevoTam = tamTabla * 2;
   list<Pagina> * nuevaTabla = new list<Pagina>[nuevoTam];
   for(int i = 0; i < tamTabla; i++){
       list<Pagina>::iterator itDic = tabla[i].begin();
       while(itDic != tabla[i].end()){
            unsigned long indice = hash(itDic->url) % nuevoTam;
            list<Pagina>::iterator itDic2 = nuevaTabla[indice].begin();
            while(itDic2 != nuevaTabla[indice].end() && itDic->url > itDic2->url ){
                itDic2++;
            }
            nuevaTabla[indice].insert(itDic2, *itDic);
            itDic++;
       }
   
   }

   delete[] tabla;
   tabla = nuevaTabla;
   tamTabla = nuevoTam;
}

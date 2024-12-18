#include "modulo-arbol.hpp"

ArbolPalabras::NodoTrie::NodoTrie(){
    this->car = ' ';
    this->sig = NULL;
    this->ptr = NULL;
}

ArbolPalabras::NodoTrie::~NodoTrie(){
    if(this->sig != NULL){
        delete this->sig;
    }
    if(this->ptr != NULL){
        delete this->ptr;
    }
}

ArbolPalabras::NodoTrie * ArbolPalabras::NodoTrie::consulta(char letra){
    NodoTrie * iter = this->sig;
    while(iter != NULL && iter->car < letra){
        iter = iter->sig;
    }
    if(iter != NULL && iter->car == letra){
        return iter->ptr;
    }
    return NULL;
}

void ArbolPalabras::NodoTrie::inserta(char l){
    NodoTrie * aux = this;
    while(aux->sig != NULL && aux->sig->car < l){
        aux = aux->sig;
    }
    if(aux->sig == NULL || aux->sig->car != l){
        NodoTrie * nuevo = new NodoTrie;
        nuevo->sig = aux->sig;
        nuevo->car = l;
        nuevo->ptr = new NodoTrie;
        aux->sig = nuevo;
    }
}

bool ArbolPalabras::NodoTrie::hayMarca(){
    return this->car == '$';
}

void ArbolPalabras::NodoTrie::ponMarca(){
    this->car = '$';  
}

void ArbolPalabras::NodoTrie::ponEnLista(Pagina * pag){
    list<Pagina *>::iterator it = this->lista.begin();
    while(it != this->lista.end() &&  (*it)->relevancia > pag->relevancia){
        ++it;
    }
    if(it == this->lista.end() || (*it)->relevancia < pag->relevancia){
        this->lista.insert(it, pag);
    } else if((*it)->relevancia == pag->relevancia){
        while(it != this->lista.end() && (*it)->relevancia == pag->relevancia && (*it)->url < pag->url){
            ++it;
        }
        if(it == this->lista.end() || (*it)->url != pag->url){
            this->lista.insert(it, pag);
        }
    }
}

list<Pagina *> ArbolPalabras::NodoTrie::getLista(){
    return this->lista;
}

ArbolPalabras::ArbolPalabras(){
    this->cabecera = new NodoTrie();
}

ArbolPalabras::~ArbolPalabras(){
   delete this->cabecera; 
}

void ArbolPalabras::insertar(string pal, Pagina * pagina){
    NodoTrie * pos = this->cabecera;
    for(int i = 0; i < pal.length(); i++){
        if(pos->consulta(pal[i]) == NULL){
            pos->inserta(pal[i]);
        }
        pos = pos->consulta(pal[i]);
        if(pos == NULL){
            return;
        }
    }
    pos->ponMarca();
    pos->ponEnLista(pagina);
}

list<Pagina *> ArbolPalabras::buscar(string pal){
    NodoTrie * pos = this->cabecera;
    int i = 0;
    while(i < pal.length() && pos != NULL){
        pos = pos->consulta(pal[i]);
        i++;
    }
    if(pos != NULL && pos->hayMarca()){
        return pos->getLista();
    }
    return list<Pagina *>();
}

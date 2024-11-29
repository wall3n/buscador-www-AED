#ifndef __MODULO_ARBOL__
#define __MODULO_ARBOL__

#include <list>
#include <string>
#include "modulo-pagina.hpp"
class Pagina;

class ArbolPalabras {
    private:
        class NodoTrie {
            private:
                char car;
                NodoTrie * sig, * ptr;
                std::list<Pagina *> lista;
            public:
                NodoTrie();
                ~NodoTrie();
                NodoTrie * consulta(char letra);
                void inserta(char l);
                bool hayMarca();
                void ponMarca();
                void ponEnLista(Pagina * pag);
                std::list<Pagina *> getLista();
        };

        NodoTrie * cabecera;

    public:
        ArbolPalabras();
        ~ArbolPalabras();
        void insertar(std::string pal, Pagina * pagina);
        std::list<Pagina *> buscar(std::string pal);

};

#endif

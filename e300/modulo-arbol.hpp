#ifndef __MODULO_ARBOL__
#define __MODULO_ARBOL__

#include "modulo-pagina.hpp"

class ArbolPalabras {
    private:
        class NodoTrie {
            private:
                char car;
                NodoTrie * sig, * ptr;
                list<Pagina *> lista;
            public:
                NodoTrie();
                ~NodoTrie();
                NodoTrie * consulta(char letra);
                void inserta(char l);
                bool hayMarca();
                void ponMarca();
                void ponEnLista(Pagina * pag);
                list<Pagina *> getLista();
        };

        NodoTrie * cabecera;

    public:
        ArbolPalabras();
        ~ArbolPalabras();
        void insertar(string pal, Pagina * pagina);
        list<Pagina *> buscar(string pal);

};

#endif

#ifndef __MODULO_DICPAGINAS__
#define __MODULO_DICPAGINAS__

#include <list>

#include "modulo-arbol.hpp"
#include "modulo-pagina.hpp"
#include "modulo-tablahash.hpp"


class DicPaginas {

    private:
        TablaHash * tabla;
        ArbolPalabras * arbol;
    public:
        DicPaginas();
        ~DicPaginas();
        Pagina * insertar(Pagina nueva);
        Pagina* consultar(string url);
        void insertar(string palabra, Pagina * pag);
        list<Pagina*> buscar(string palabra);
        int tamano(void);
};


#endif

#ifndef __MODULO_DICPAGINAS__
#define __MODULO_DICPAGINAS__

#include <list>
#include <string>

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
        Pagina* consultar(std::string url);
        void insertar(std::string palabra, Pagina * pag);
        std::list<Pagina*> buscar(std::string palabra);
        int tamano(void);
};


#endif

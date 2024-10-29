#ifndef __MODULO_DICPAGINAS__
#define __MODULO_DICPAGINAS__

#include <iostream>
#include <list>

#include "modulo-pagina.hpp"

using namespace std;

class DicPaginas {

    private:
        list<Pagina> lista;
        int contador;
    public:
        DicPaginas();
        void insertar(Pagina nueva);
        Pagina* consultar(string url);
        int tamano(void);
};


#endif

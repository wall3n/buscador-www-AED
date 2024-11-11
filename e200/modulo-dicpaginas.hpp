#ifndef __MODULO_DICPAGINAS__
#define __MODULO_DICPAGINAS__

#include <list>

#include "modulo-pagina.hpp"
#include "modulo-tablahash.hpp"


class DicPaginas {

    private:
        TablaHash * tabla;
    public:
        DicPaginas();
        void insertar(Pagina nueva);
        Pagina* consultar(string url);
        int tamano(void);
};


#endif

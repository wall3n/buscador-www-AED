#ifndef __MODULO_PAGINA__
#define __MODULO_PAGINA__
#include "modulo-arbol.hpp"
#include "modulo-tablahash.hpp"
#include <iostream>

using namespace std;

class Pagina {
    friend class TablaHash;
    friend class ArbolPalabras;
    private:
        int relevancia;
        string url, titulo;
    public:
        void leer();
        void escribir();
};

#endif

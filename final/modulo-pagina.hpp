#ifndef __MODULO_PAGINA__
#define __MODULO_PAGINA__

#include <string>

class TablaHash;
class ArbolPalabras;

class Pagina {
    friend class TablaHash;
    friend class ArbolPalabras;
    private:
        int relevancia;
        std::string url, titulo;
    public:
        void leer();
        void escribir();
};

#endif

#ifndef __MODULO_PAGINA__
#define __MODULO_PAGINA__
#include <iostream>

using namespace std;

class Pagina {
    private:
        int relevancia;
        string url, titulo;
    public:
        void leer();
        void escribir();
        string getUrl();
};

#endif
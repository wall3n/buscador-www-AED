#ifndef __TABLA_HASH__
#define __TABLA_HASH__

#include <list>
#include <string>
class Pagina;

class TablaHash {
    private:
        static const float FACTOR_CARGA_MAX;
        static const int TAM_INICIAL;

        int numElem;
        int tamTabla;
        std::list<Pagina *> * tabla;

        unsigned long hash(std::string url);
        void redimensionar(void);
    public:
        TablaHash();
        ~TablaHash();
        Pagina * insertar(Pagina nueva);
        Pagina * consultar(std::string url);
        int numElementos (void);
};

#endif

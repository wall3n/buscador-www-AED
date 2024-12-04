#ifndef __MODULO_INTERPRETE__
#define __MODULO_INTERPRETE__

#include "modulo-dicpaginas.hpp"

class Interprete {
    private:
        DicPaginas * diccionario;
        void INSERTAR(void);
        void BUSCAR_URL(void);
        void BUSCAR_PALABRA(void);
        void BUSCAR_PALABRAS_A(void);
        void BUSCAR_PALABRAS_O(void);
        void BUSCAR_PREFIJO(void);
        void SALIR(void);

    public:
        Interprete();
        void interpretar(std::string comando);
};

#endif

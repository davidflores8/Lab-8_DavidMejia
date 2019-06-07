#include "Pieza.h"

#ifndef CABALLO_H
#define CABALLO_H

class Caballo: public Pieza{
    public:
        Caballo();
        bool validarMovimiento(int, int, int, int,char**&);
};
#endif
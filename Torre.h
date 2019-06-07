#include "Pieza.h"

#ifndef TORRE_H
#define TORRE_H

class Torre:public Pieza{
    public:
        Torre();
        bool validarMovimiento(int, int, int, int, char**&);
};
#endif
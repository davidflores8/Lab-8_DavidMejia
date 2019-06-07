#include "Pieza.h"

#ifndef PEON_H
#define PEON_H

class Peon:public Pieza{
    public:
    Peon();
    bool validarMovimiento(int, int, int, int, char**&);
};
#endif

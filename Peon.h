#include "Pieza.h"

#ifndef PEON_H
#define PEON_H

class Peon:public Pieza{

    Peon();
    bool validarMovimiento(int, int, char**&);
};
#endif

#include "Pieza.h"

#ifndef ALFIL_H
#define ALFIL_H

class Alfil: public Pieza{
    public:
        Alfil();
        bool validarMovimiento(int, int, char**&);
};
#endif
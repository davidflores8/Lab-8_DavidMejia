#include "Pieza.h"

#ifndef REINA_H
#define REINA_H

class Reina: public Pieza{
    public:
        Reina();
        bool validarMovimiento(int, int, int, int, char**&);
};
#endif
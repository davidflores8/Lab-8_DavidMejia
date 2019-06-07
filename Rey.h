#include "Pieza.h"
#ifndef REY_H
#define REY_H

class Rey: public Pieza{

    public:
        Rey();
        bool validarMovimiento(int, int, int, int, char**&);
};
#endif
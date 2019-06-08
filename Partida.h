#include "Pieza.h"
#include <vector>
#include <string>
using std::string;
using std::vector;

#ifndef PARTIDA_H
#define PARTIDA_H

class Partida{
    

    public:
        Partida();
        void guardarPartida(string);
        void crearPartida();
        void cerrarPartida();
        void tipoPieza(Pieza*);
};

#endif
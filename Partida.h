#include "Pieza.h"
#include <vector>
#include <string>
#include <stdlib.h>
#include <fstream>
using std::string;
using std::vector;
using std::ifstream;

#ifndef PARTIDA_H
#define PARTIDA_H

class Partida{
    
    public:
        Partida();
        void guardarPartida(string);
        void crearPartida(int);
        void cerrarPartida();
        void tipoPieza(Pieza*);
        void extraerMovimientos(vector<string>&, char);
};

#endif
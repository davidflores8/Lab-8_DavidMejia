#include "Pieza.h"
#include <iostream>

Pieza::Pieza(){

}

Pieza::Pieza(char n){
    nombre=n;
}

bool Pieza::validarMovimiento(int fila, int columna, char**& matriz){
    std::cout<<"Validar movimiento de la clase Pieza\n Return true"<<std::endl;
    return true;

}
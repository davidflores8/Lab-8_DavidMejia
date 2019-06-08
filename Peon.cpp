#include "Peon.h"
#include <iostream>

Peon::Peon(){
    nombre='P';
}


bool Peon::validarMovimiento(int fs, int cs, int fm, int cm, char**& matriz){
    if(fm>=0 && fm<8 && cm>=0 && cm<8){
        std::cout<<"Condicion principal"<<std::endl;
        if(cs==cm && fm==(fs-1)){
             std::cout<<"Condicion secundaria"<<std::endl;
            matriz[fm][cm]='P';
            matriz[fs][cs]=' ';
            return true;
        }
        else{
            return false;
        }
    }
    else {
        return false;
    }
}
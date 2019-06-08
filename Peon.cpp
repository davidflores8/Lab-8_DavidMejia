#include "Peon.h"

Peon::Peon(){
    nombre='P';
}


bool Peon::validarMovimiento(int fs, int cs, int fm, int cm, char**& matriz){
    if(fm>=0 && fm<8 && cm>=0 && cm<8){
        if(cs==cm && fm==(fs+1)){
            matriz[fm][cm]='P';
            matriz[fs][cs]-' ';
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
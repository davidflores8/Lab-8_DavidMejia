#include "Torre.h"

Torre::Torre(){

    nombre='T';
}


bool Torre::validarMovimiento(int fs, int cs, int fm, int cm, char**& matriz){
    if (matriz[fs][cs]!='T'){
        return false;
    }
    else  if(fm>=0 && fm<8 && cm>=0 && cm<8)
    {
        if(fm==fs || cm==cs){
            matriz[fm][cm]='T';
            matriz[fs][cs]=' ';
            return true;
        }
        else{
            return false;
        }
    }
}
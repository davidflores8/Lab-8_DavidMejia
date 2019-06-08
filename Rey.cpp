#include "Rey.h"

Rey::Rey(){
    nombre='R';
}

bool Rey::validarMovimiento(int fs, int cs, int fm, int cm, char**& matriz){
    bool retorno=false;
    std::cout<<" Fila y comlumna "<<fs<<" --- "<<cs<<" Donde voy   "<<fm<<" --- "<<cm<<std::endl;
    if(fm==fs-1 && cm==cs && fm>=0 && fm<8){
        matriz[fm][cm]='R';
        matriz[fs][cs]=' ';
        retorno=true;
    }
    else if(fm==fs+1 && cm==cs && fm>=0 && fm<8){
        matriz[fm][cm]='R';
        matriz[fs][cs]=' ';
        retorno=true;
    }
    else if(cm==cs-1 && fm==fs && cm>=0 && cm<8){
        matriz[fm][cm]='R';
        matriz[fs][cs]=' ';
        retorno=true;
    }
    else if(cm==cs+1 && fm==fs && cm>=0 && cm<8){
        matriz[fm][cm]='R';
        matriz[fs][cs]=' ';
        retorno=true;
    }
    //listo los de torre
    //mov. Alfil
    else if(fm==fs+1 && cm==cs+1 && cm>=0 && cm<8 && fm>=0 && fm<8){
        matriz[fm][cm]='R';
        matriz[fs][cs]=' ';
        retorno=true;
    }
    else if(fm==fs+1 && cm==cs-1 && fm>=0 && fm<8 && cm>=0 && cm<8){
        matriz[fm][cm]='R';
        matriz[fs][cs]=' ';
        retorno=true;
    }
    else if(fm==fs-1 && cm==cs-1 && fm>=0 && fm<8 && cm>=0 && cm<8){
        matriz[fm][cm]='R';
        matriz[fs][cs]=' ';
        retorno=true;
    }
    else if(fm==fs-1 && cm==cs+1 && fm>=0 && fm<8 && cm>=0 && cm<8){
        matriz[fm][cm]='R';
        matriz[fs][cs]=' ';
        retorno=true;
    }
    return retorno;

}
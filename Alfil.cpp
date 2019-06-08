#include "Alfil.h"

Alfil::Alfil(){

    nombre='A';
}


bool Alfil::validarMovimiento(int fs, int cs, int fm, int cm, char**& matriz){
    if (fm>=0 && fm<8 && cm>=0 && cm<8){
        int f,c;
        f=fm-1;
        c=cm-1;
        while(matriz[f][c]==' ' && f>=0 && f<8 && c>=0 && c<8){
            matriz[f][c]='A';
            matriz[f+1][c+1]=' ';
            f=f-1;
            c=c-1;
        }
        matriz[fs][cs]=' ';
        return true; 
    }
    else {
        return false;
    }

}
#include "Alfil.h"
#include <iostream>

Alfil::Alfil(){

    nombre='A';
}


bool Alfil::validarMovimiento(int fs, int cs, int fm, int cm, char**& matriz){
    bool flag=false;
    std::cout<<"Donde estoy "<<fs<<" -- "<<cs<< "  Donde voy "<<fm<<" -- "<<cm<<std::endl;
    if (fs>fm && cs>cm && fm>=0 && fm<8 && cm>=0 && cm<8){
        //std::cout<<"mayor"<<std::endl;
        int f,c;
        f=fs-1;
        c=cs-1;
        while(matriz[f][c]==' ' && f>=0 && f<8 && c>=0 && c<8){
                if(f==fm && c==cm){
                    matriz[fs][cs]=' ';
                    matriz[fm][cm]='A';
                    flag=true;
                }
            f=f+1;
            c=c+1;
        }
    }
    else if (fs>fm && cs<cm && fm>=0 && fm<8 && cm>=0 && cm<8){
        int f,c;
        f=fs-1;
        c=cs+1;
        while(matriz[f][c]==' ' && f>=0 && f<8 && c>=0 && c<8){
                if(fm==f && c==cm){
                    matriz[fs][cs]=' ';
                    matriz[fm][cm]='A';
                    flag=true;
                }
            f=f-1;
            c=c+1;
        }
    } 
    else if (fs<fm && cs<cm && fm>=0 && fm<8 && cm>=0 && cm<8){
        int f,c;
        f=fs+1;
        c=cs+1;
        while(f>=0 && f<8 && c>=0 && c<8){
                if(fm==f && c==cm && matriz[f][c]==' '){
                    std::cout<<"if"<<std::endl;
                    matriz[fs][cs]=' ';
                    matriz[fm][cm]='A';
                    flag=true;
                }
            f=f+1;
            c=c+1;
        }
    } 
    else if (fs<fm && cs>cm && fm>=0 && fm<8 && cm>=0 && cm<8){
        //std::cout<<"menor mayor"<<std::endl;
        int f,c;
        f=fs+1;
        c=cs-1;
        while(f>=0 && f<8 && c>=0 && c<8){
                    if(fm<=f && c==cm && matriz[f][c]==' '){
                    matriz[fs][cs]=' ';
                    matriz[f][c]=' ';
                    matriz[fm][cm]='A';
                    flag=true;
                }
            f=f+1;
            c=c-1;
        }
    } 
    return flag;

}
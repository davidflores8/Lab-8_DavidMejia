#include "Partida.h"
#include "Torre.h"
#include "Rey.h"
#include "Reina.h"
#include "Alfil.h"
#include "Caballo.h"
#include "Peon.h"
#include "Pieza.h"
#include <fstream>
#include <iostream>
using std::endl;
using std::ofstream;

Partida::Partida(){

}

void guardarPartida(string coordenada){
    ofstream outFile;
    outFile.open("/home/salida.txt", std::ios::app);
    outFile<<coordenada<<" , ";
    outFile.close();
}

void crearPartida(){
    ofstream outFile;
    outFile.open("/home/salida.txt", std::ios::app);
    outFile <<"Partida1"<<endl;
    outFile.close();

}

void cerrarPartida(){
    ofstream outFile;
    outFile.open("/home/salida.txt", std::ios::app);
    outFile <<"----------------------"<<endl;
    outFile.close();
}

void tipoPieza(Pieza* pieza){
    ofstream outFile;
    outFile.open("/home/salida.txt", std::ios::app);
    if(typeid(Torre)== typeid(*pieza)){
        outFile<<"Torre"<<endl;                         
    }
    if(typeid(Peon)== typeid(*pieza)){
        outFile<<"Peon"<<endl;                         
    }
    if(typeid(Reina)== typeid(*pieza)){
        outFile<<"Reina"<<endl;                         
    }
    if(typeid(Caballo)== typeid(*pieza)){
        outFile<<"Caballo"<<endl;                         
    }
    if(typeid(Alfil)== typeid(*pieza)){
        outFile<<"Alfil"<<endl;                         
    }
}
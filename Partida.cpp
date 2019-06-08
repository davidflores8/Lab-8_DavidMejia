#include "Partida.h"
#include "Torre.h"
#include "Rey.h"
#include "Reina.h"
#include "Alfil.h"
#include "Caballo.h"
#include "Peon.h"
#include "Pieza.h"
#include <fstream>
using std::ios;
#include <iostream>
using std::endl;
using std::ofstream;
using std::getline;

Partida::Partida()
{

}

void Partida::guardarPartida(string coordenada)
{
    ofstream outFile;
    outFile.open("bitacora.txt", ios::app);
    outFile << coordenada << " , ";
    outFile.close();
}

void Partida::crearPartida(int juego)
{
    ofstream outFile;
    outFile.open("bitacora.txt", ios::app);
    outFile <<juego<< " - Partida " << endl;
    outFile.close();
}

void Partida::cerrarPartida()
{
    ofstream outFile;
    outFile.open("bitacora.txt", ios::app);
    outFile<<" "<<endl;
    outFile << "----------------------" << endl;
    outFile.close();
}

void Partida::tipoPieza(Pieza *pieza)
{
    ofstream outFile;
    outFile.open("bitacora.txt", ios::app);
    if (typeid(Torre) == typeid(*pieza))
    {
        outFile << "Torre" << endl;
    }
    if (typeid(Peon) == typeid(*pieza))
    {
        outFile << "Peon" << endl;
    }
    if (typeid(Reina) == typeid(*pieza))
    {
        outFile << "Reina" << endl;
    }
    if (typeid(Caballo) == typeid(*pieza))
    {
        outFile << "Caballo" << endl;
    }
    if (typeid(Alfil) == typeid(*pieza))
    {
        outFile << "Alfil" << endl;
    }
}

void Partida::extraerMovimientos(vector<string>& movimientos, char juego){
    ifstream file("bitacora.txt");
    int cont=0;
    int line;
    string linea;
    while(getline(file,linea)){
        if(linea[0]==juego){

        }

    }

}
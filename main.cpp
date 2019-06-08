#include <iostream>
#include <string>
#include "Pieza.h"
#include "Torre.h"
#include "Rey.h"
#include "Reina.h"
#include "Caballo.h"
#include "Peon.h"
#include "Alfil.h"
#include <typeinfo>
#include <vector>
#include "Partida.h"
#include <fstream>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;
void liberarMatriz(char**, int);
char** crearMatriz(int);
void printMatriz(char**, int);
char** llenarMatriz (char**,int);
void asignaciones(char**&,int);
int columna(char);
int fila (char);
Pieza* pp(int);
bool movimiento(char**&,Pieza*,int,int,int,int);


int main(){

        char** matriz=NULL;
        int cont=0;
        matriz=crearMatriz(8);
        matriz=llenarMatriz(matriz,8);
        vector<string>movimientos;
        int rep=2;
        Pieza* pieza;
        Partida* partidas;
        while(rep!=3){
                cout<<"1. Iniciar partida "<<endl;
                cout<<"2. Recrear partida"<<endl;
                cout<<"3. Salir"<<endl;
                cin>>rep;
                switch(rep){
                        case 1: {
                                int a;
                                char ac;
                                partidas->crearPartida(cont);
                                cont++;
                                cout<<"Jugador, ingrese el acompanante de su rey\n1.Torre\n2.Reina\n3.Peon\n4.Alfil\n5.Caballo"<<endl; 
                                cin>>a;
                                pieza=pp(a);
                                partidas->tipoPieza(pieza);
                                asignaciones(matriz,a);
                                printMatriz(matriz, 8);
                                bool flag=true;
                                int r=0;
                                while(flag){
                                        string c1;
                                        int fs,cs,fm,cm;
                                        cout<<"Jugador blanco, ingrese la pieza que quiere mover y hacia adonde: "<<endl;
                                        cin>>c1;
                                        cs=fila(c1[1]);
                                        fs=columna(c1[2]);
                                        cm=fila(c1[4]);
                                        fm=columna(c1[5]);
                                        while (movimiento(matriz, pieza, fm, cm, fs, cs)==false){
                                                cout<<"Ingrese nuevamente las coordenadas: "<<endl;
                                                cin>>c1;
                                                cs=fila(c1[1]);
                                                fs=columna(c1[2]);
                                                cm=fila(c1[4]);
                                                fm=columna(c1[5]);
                                        }
                                        partidas->guardarPartida(c1);
                                        printMatriz(matriz, 8);
                                        cout<< " "<<endl;
                                        cout<<"Jugador negro, ingrese la pieza que quiere mover y hacia adonde: "<<endl;
                                        cin>>c1;
                                        cs=fila(c1[1]);
                                        fs=columna(c1[2]);
                                        cm=fila(c1[4]);
                                        fm=columna(c1[5]);
                                        while (movimiento(matriz, pieza, fm, cm, fs, cs)==false){
                                                cout<<"Ingrese nuevamente las coordenadas: "<<endl;
                                                cin>>c1;
                                                cs=fila(c1[1]);
                                                fs=columna(c1[2]);
                                                cm=fila(c1[4]);
                                                fm=columna(c1[5]);
                                        }
                                        partidas->guardarPartida(c1);
                                        printMatriz(matriz, 8);
                                        cout<<"Desea seguir jugando? 1.Si 2.No"<<endl;
                                        cin>>r;
                                        if (r==1){
                                                flag=true;
                                        }
                                        else{
                                                flag=false;
                                               partidas->cerrarPartida();
                                        
                                        }


                                }

                        }
                        break;
                        case 2:{
                                char juego;
                                int juego_a;
                                cout<<"Abra el fichero bitacora.txt y elija la partida que quiere cargar: "<<endl;
                                cin>>juego;
                                

                        }
                }
        }
        liberarMatriz(matriz, 8);
        return 0;
      

}

void extraerMovimientos(vector<string>& movimientos){
        
}

bool movimiento(char**& matriz, Pieza* pieza, int fm ,int cm, int fs, int cs){
        bool t=false;
        bool retorno;
       // cout<<fs<< " --- "<<cs<<"   "<<endl;
       // cout<<fm<< " --- "<<cm<<"   "<<endl;
        if(typeid(Torre)== typeid(*pieza)){
                t=pieza->validarMovimiento(fs,cs,fm,cm,matriz);
                if (t){
                        retorno=true;
                }                
        }
        else if (typeid(Peon) == typeid(*pieza)){
                t=pieza->validarMovimiento(fs,cs,fm,cm,matriz);
                if(t){
                        retorno=true;
                }
        }
        else if(typeid (Alfil)== typeid(*pieza)){
                t=pieza->validarMovimiento(fs,cs,fm,cm,matriz);
                if(t){
                        retorno=true;
                }
        }
        //      otro
        if (matriz[fs][cs]=='R'){
                Pieza* rey=new Rey();
         //       cout<<"hola"<<endl;
                t=rey->validarMovimiento(fs,cs,fm,cm,matriz);
                if (t){
                        retorno=true;
                        delete rey;
                }
        }
        return t;
}

Pieza* pp(int a){
        Pieza* pieza;
        switch(a){
                case 1:{
                        pieza=new Torre();
                        cout<<"torre"<<endl;
                }
                break;
                case 2:{

                        pieza=new Reina();
                        cout<<"reina"<<endl;
                }
                break;
                case 3:{
                        pieza=new Peon();
                        cout<<"peon"<<endl;
                }
                break;
                case 4:{
                        pieza=new Alfil();
                        cout<<"alfil"<<endl;
                }
                break;
                case 5:{
                        pieza=new Caballo();
                        cout<<"caballo"<<endl;
                }
                break;
        }
        return pieza;
}


int columna(char n){
        int retorno;
        switch(n){
                case '1':{
                        retorno=7;
                } 
                break;
                case '2':{
                        retorno=6;
                } 
                break;
                case '3':{
                        retorno=5;
                } 
                break;
                case '4':{
                        retorno=4;
                } 
                break;
                case '5':{
                        retorno=3;
                } 
                break;
                case '6':{
                        retorno=2;
                } 
                break;
                case '7':{
                        retorno=1;
                } 
                break;
                case '8':{
                        retorno=0;
                } 
                break;
        }
        return retorno;
}

int fila(char n){
        int retorno;
        switch(n){
                case 'a':{
                        retorno=0;
                } 
                break;
                case 'b':{
                        retorno=1;
                } 
                break;
                case 'c':{
                        retorno=2;
                } 
                break;
                case 'd':{
                        retorno=3;
                } 
                break;
                case 'e':{
                        retorno=4;
                } 
                break;
                case 'f':{
                        retorno=5;
                } 
                break;
                case 'g':{
                        retorno=6;
                } 
                break;
                case 'h':{
                        retorno=7;
                } 
                break;
        }
        return retorno;
}

void asignaciones(char**& matriz, int a){
        char ac=' ';
        switch(a){
                case 1:{
                        ac='T';
                }
                break;
                case 2:{
                        ac='Q';
                }
                break;
                case 3:{
                        ac='P';
                }
                break;
                case 4:{
                        ac='A';
                }
                break;
                case 5:{ 
                        ac='C';
                }
                break;
        }
        matriz[7][4]='R';
        matriz[0][4]='R';
        switch(ac){
                case 'T':{
                        matriz[0][7]='T';
                        matriz[7][0]='T';
                }
                break;
                case 'C':{
                        matriz[0][6]='C';
                        matriz[7][1]='C';
                }
                break;
                case 'A':{
                        matriz[0][5]='A';
                        matriz[7][2]='A';
                }
                break;
                case 'Q':{
                        matriz[0][3]='Q';
                        matriz[7][3]='Q';
                }
                break;
                case 'P':{
                        matriz[6][4]='P';
                        matriz[1][4]='P';
                }
                break;
        }
}
void liberarMatriz (char** matriz, int size)
{
        for(int i=0; i<size;i++)
        {
                if(matriz[i]!=NULL)
                {
                        delete[]matriz[i];
                        matriz[i]=NULL;
                }
        }
        if(matriz!=NULL)
        {
                delete[]matriz;
        }
}


char** llenarMatriz (char** matriz ,int size)
{
        srand(time(NULL));
        for(int i=0;i<size;i++)
        {
                for(int j=0; j<size;j++)
                {
                        matriz[i][j]=' ';
                }
        }
        return matriz;

}


char** crearMatriz(int size)
{
        char** matriz=NULL;
        matriz=new char* [size];
        for(int i=0;i<size;i++)
        {
                matriz[i]=new char [size];
        }
        return matriz;

}

void printMatriz(char** matriz, int size)
{
        for(int i=0; i<size;i++)
        {
                for(int j=0;j<size;j++)
                {
                        cout<<"["<<matriz[i][j]<<"]";
                }
                cout<<endl;
        }

}

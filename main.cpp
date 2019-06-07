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


int main(){

        char** matriz=NULL;
        matriz=crearMatriz(8);
        matriz=llenarMatriz(matriz,8);
        int rep=2;
        Pieza* pieza;
        while(rep!=3){
                cout<<"1. Iniciar partida "<<endl;
                cout<<"2. Recrear partida"<<endl;
                cout<<"3. Salir"<<endl;
                cin>>rep;
                switch(rep){
                        case 1: {
                                int a;
                                char ac;
                                cout<<"Jugador, ingrese el acompanante de su rey\n1.Torre\n2.Reina\n3.Peon\n4.Alfil\n5.Caballo"<<endl; 
                                cin>>a;
                                pieza=pp(a);
                                asignaciones(matriz,a);
                                printMatriz(matriz, 8);
                                bool flag=true;
                                while(flag){
                                        string c1;
                                        int fs,cs,fm,cm;
                                        cout<<"Jugador blanco, ingrese la pieza que quiere mover y hacia adonde: "<<endl;
                                        cin>>c1;
                                        fs=fila(c1[1]);
                                        cs=columna(c1[2]);
                                        fm=fila(c1[4]);
                                        cm=columna(c1[5]);





                                }

                        }
                }
        }
        liberarMatriz(matriz, 8);
        return 0;
      

}

void movimiento(char**& matriz, Pieza* pieza, int fm ,int cm){
        if(typeid(Torre)== typeid(*pieza)){
                
        }

}

Pieza* pp(int a){
        Pieza* pieza;
        switch(a){
                case 1:{
                        pieza=new Torre();
                }
                break;
                case 2:{

                        pieza=new Reina();
                }
                break;
                case 3:{
                        pieza=new Peon();
                }
                break;
                case 4:{
                        pieza=new Alfil()
                }
                break;
                case 5:{
                        pieza=new Caballo();
                }
                break;
        }
        return pieza;
}


int columna(char n){
        int retorno;
        switch(n){
                case '1':{
                        retorno=0;
                } 
                break;
                case '2':{
                        retorno=1;
                } 
                break;
                case '3':{
                        retorno=2;
                } 
                break;
                case '4':{
                        retorno=3;
                } 
                break;
                case '5':{
                        retorno=4;
                } 
                break;
                case '6':{
                        retorno=5;
                } 
                break;
                case '7':{
                        retorno=6;
                } 
                break;
                case '8':{
                        retorno=7;
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

void asignaciones(char**& matriz, int a, Pieza* pieza){
        char ac=' ';
        switch(a){
                case 1:{
                        ac='T';
                        pieza=new Torre();
                }
                break;
                case 2:{
                        ac='Q';
                        pieza=new Reina();
                }
                break;
                case 3:{
                        ac='P';
                        pieza=Peon();
                }
                break;
                case 4:{
                        ac='A';
                        pieza=Alfil()
                }
                break;
                case 5:{
                        ac='C';
                        pieza=Caballo();
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
                        matriz[0][4]='T';
                        matriz[7][3]='T';
                }
                break;
                case 'P':{
                        matriz[6][4]='T';
                        matriz[1][4]='T';
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

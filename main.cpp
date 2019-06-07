#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

void liberarMatriz(char**, int);
char** crearMatriz(int);
void printMatriz(char**, int);
char** llenarMatriz (char**,int);

int main(){

        char** matriz=NULL;
        matriz=crearMatriz(8);
        matriz=llenarMatriz(matriz,8);
        printMatriz(matriz, 8);
        cout<<"Hola"<<endl;
        liberarMatriz(matriz, 8);
        return 0;

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

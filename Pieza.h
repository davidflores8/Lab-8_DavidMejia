

#ifndef PIEZA_H
#define PIEZA_H


class Pieza{
  public:
        char nombre;
        Pieza();
        Pieza(char);

        virtual bool validarMovimiento(int, int, int, int, char**&);


};
#endif
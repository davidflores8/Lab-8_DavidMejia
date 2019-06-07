main: Peon.o Pieza.o Reina.o Rey.o Caballo.o Torre.o Alfil.o main.o
	g++ Peon.o Pieza.o Reina.o Rey.o Caballo.o Torre.o Alfil.o main.o -o run

Pieza.o: Pieza.cpp Peon.cpp Rey.cpp Reina.cpp Caballo.cpp Alfil.cpp  Torre.cpp
	g++ -c Pieza.cpp Peon.cpp Rey.cpp Reina.cpp Caballo.cpp Alfil.cpp  Torre.cpp

main.o: main.cpp	
	g++ -c main.cpp
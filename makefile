main: Peon.o Pieza.o Reina.o Rey.o Caballo.o Torre.o Alfil.o main.o Partida.o
	g++ Peon.o Pieza.o Reina.o Rey.o Caballo.o Torre.o Alfil.o main.o Partida.o -o run

Pieza.o: Pieza.cpp Peon.cpp Rey.cpp Reina.cpp Caballo.cpp Alfil.cpp  Torre.cpp
	g++ -c Pieza.cpp Peon.cpp Rey.cpp Reina.cpp Caballo.cpp Alfil.cpp  Torre.cpp

Partida.o: Partida.cpp	
	g++ -c Partida.cpp

main.o: main.cpp	
	g++ -c main.cpp
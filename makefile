CC = g++
default: cySE clean
cyS: cySE.o Readinput.o Map.o Trienode.o
	$(CC) -o cySE cySE.o Readinput.o Map.o Trienode.o
Search.o : Search.cpp Search.h
	$(CC) -c  Search.cpp
Listnode.o: Listnode.cpp Listnode.h
	$(CC) -c  Listnode.cpp
Trienode.o : Trienode.cpp Trienode.h
	$(CC) -c  Trienode.cpp
Map.o : Map.cpp Map.h
	$(CC) -c Map.cpp
Readinput.o :  Readinput.cpp Readinput.h
	$(CC) -c Readinput.cpp
cySE.o: cySE.cpp cySE.h 
	$(CC) -c cySE.cpp
clean: 
	rm *.o

# makefile : This file contains the instructions
#            to build the C++ source files for
#            Lab Exercise No 4.
#
# (c) Glenn G. Fabia 2019

all : le4 

node.o :  node.h node.cpp
	g++ -c node.cpp

singlylinkedlist.o :   singlylinkedlist.h singlylinkedlist.cpp 
	g++ -c singlylinkedlist.cpp
villarez_le4.o : villarez_le4.cpp
	g++ -c villarez_le4.cpp

le4 : villarez_le4.o node.o singlylinkedlist.o
	g++ -o le4 villarez_le4.o node.o singlylinkedlist.o
clean :
	rm -rf *.o *.gch le4

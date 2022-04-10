clean : 
	rm *.gch *.o

hpp : 
	g++ -Wall -c *.hpp

cpp :
	g++ -Wall -c *.cpp

all :
	g++ -Wall -c *.hpp *.cpp

FC = g++
OPT = -c

mainTest : Combinaison.o CombiMastermind.o CombiWordle.o mainTest.o
	$(FC) Combinaison.o CombiMastermind.o CombiWordle.o mainTest.o -o mainTest
	
mainTest.o : mainTest.cpp CombiMastermind.hpp
	$(FC) $(OPT) mainTest.cpp

JeuDeDeduction.o : JeuDeDeduction.cpp JeuDeDeduction.hpp
	$(FC) $(OPT) JeuDeDeduction.cpp

Combinaison.o : Combinaison.cpp Combinaison.hpp
	$(FC) $(OPT) Combinaison.cpp
	
CombiMastermind.o : CombiMastermind.cpp CombiMastermind.hpp
	$(FC) $(OPT) CombiMastermind.cpp
	
CombiWordle.o : CombiWordle.cpp CombiWordle.hpp
	$(FC) $(OPT) CombiWordle.cpp

clean : 
	rm *.gch *.o

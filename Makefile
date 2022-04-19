FC = g++
OPT = -c

mainTest : Combinaison.o CombiMastermind.o CombiWordle.o FonctionsUtiles.o mainTest.o
	$(FC) Combinaison.o CombiMastermind.o CombiWordle.o FonctionsUtiles.o mainTest.o -o mainTest
	
mainTest.o : mainTest.cpp CombiMastermind.hpp
	$(FC) $(OPT) mainTest.cpp

JeuDeDeduction.o : JeuDeDeduction.cpp JeuDeDeduction.hpp
	$(FC) $(OPT) JeuDeDeduction.cpp

Combinaison.o : FonctionsUtiles.hpp Combinaison.cpp Combinaison.hpp
	$(FC) $(OPT) Combinaison.cpp
	
CombiMastermind.o : FonctionsUtiles.hpp CombiMastermind.cpp CombiMastermind.hpp
	$(FC) $(OPT) CombiMastermind.cpp
	
CombiWordle.o : Combinaison.hpp CombiWordle.cpp CombiWordle.hpp
	$(FC) $(OPT) CombiWordle.cpp
	
FonctionsUtiles.o : FonctionsUtiles.cpp FonctionsUtiles.hpp
	$(FC) $(OPT) FonctionsUtiles.cpp

clean : 
	rm *.gch *.o mainTest

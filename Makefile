FC = g++
OPT = -c

mainTest : Combinaison.o CombiMastermind.o CombiWordle.o FonctionsUtiles.o mainTest.o Humain_Codeur_Wordle.o Humain_Codeur.o Humain.o Joueur.o
	$(FC) Combinaison.o CombiMastermind.o CombiWordle.o FonctionsUtiles.o mainTest.o Humain_Codeur_Wordle.o Humain_Codeur.o Humain.o Joueur.o -o mainTest
	
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

Humain_Codeur_Wordle.o : Humain_Codeur_Wordle.cpp Humain_Codeur_Wordle.hpp
	$(FC) $(OPT) Humain_Codeur_Wordle.cpp

Humain_Codeur.o : Humain_Codeur.cpp Humain_Codeur.hpp
	$(FC) $(OPT) Humain_Codeur.cpp

Humain.o : Humain.cpp Humain.hpp
	$(FC) $(OPT) Humain.cpp

Joueur.o : Joueur.cpp Joueur.hpp
	$(FC) $(OPT) Joueur.cpp

clean : 
	rm *.gch *.o mainTest


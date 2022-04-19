FC = g++
OPT = -c

<<<<<<< HEAD
mainTest : Combinaison.o CombiMastermind.o CombiWordle.o FonctionsUtiles.o mainTest.o Humain_Codeur_Wordle.o Humain_Codeur.o Humain.o Joueur.o
	$(FC) Combinaison.o CombiMastermind.o CombiWordle.o FonctionsUtiles.o mainTest.o Humain_Codeur_Wordle.o Humain_Codeur.o Humain.o Joueur.o -o mainTest
=======
mainTest : Combinaison.o CombiMastermind.o CombiWordle.o FonctionsUtiles.o Joueur.o Humain.o IA.o mainTest.o
	$(FC) Combinaison.o CombiMastermind.o CombiWordle.o FonctionsUtiles.o Joueur.o Humain.o IA.o mainTest.o -o mainTest
>>>>>>> 1ae121f7cabbc584f31d14ee31e8178f642250fe
	
mainTest.o : mainTest.cpp CombiMastermind.hpp
	$(FC) $(OPT) mainTest.cpp

JeuDeDeduction.o : JeuDeDeduction.cpp JeuDeDeduction.hpp
	$(FC) $(OPT) JeuDeDeduction.cpp

Mastermind.o : JeuDeDeduction.hpp Mastermind.hpp Mastermind.cpp
	$(FC) $(OPT) Mastermind.cpp

Wordle.o : JeuDeDeduction.hpp Wordle.hpp Wordle.cpp
	$(FC) $(OPT) Wordle.cpp

Joueur.o : Joueur.hpp Joueur.cpp
	$(FC) $(OPT) Joueur.cpp

Humain.o : Joueur.hpp Humain.hpp Humain.cpp
	$(FC) $(OPT) Humain.cpp

IA.o : Joueur.hpp IA.hpp IA.cpp
	$(FC) $(OPT) IA.cpp
	
Humain_Codeur.o : Humain.hpp Humain_Codeur.hpp Humain_Codeur.cpp
	$(FC) $(OPT) Humain_Codeur.cpp

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


FC = g++
OPT = -c
LIBS = -lncurses
UNIT = -lcppunit

Jeu : Joueur.o Combinaison.o Menu.o JeuDeDeduction.o 
	$(FC) Joueur.o Combinaison.o Menu.o JeuDeDeduction.o -o Jeu

JeuDeDeduction.o : JeuDeDeduction.cpp JeuDeDeduction.hpp
	$(FC) $(OPT) JeuDeDeduction.cpp

Mastermind.o : JeuDeDeduction.hpp Mastermind.hpp Mastermind.cpp
	$(FC) $(OPT) Mastermind.cpp

Wordle.o : JeuDeDeduction.hpp Wordle.hpp Wordle.cpp
	$(FC) $(OPT) Wordle.cpp

Joueur.o : Combinaison.hpp Joueur.hpp Joueur.cpp
	$(FC) $(OPT) Joueur.cpp

Humain.o : Joueur.hpp Humain.hpp Humain.cpp
	$(FC) $(OPT) Humain.cpp

IA.o : Joueur.hpp IA.hpp IA.cpp
	$(FC) $(OPT) IA.cpp

Menu.o : Menu.hpp Menu.cpp
	$(FC) $(OPT) Menu.cpp
	
Humain_Codeur.o : Humain.hpp Humain_Codeur.hpp Humain_Codeur.cpp
	$(FC) $(OPT) Humain_Codeur.cpp

Humain_Decodeur.o : Humain.hpp Humain_Decodeur.hpp Humain_Decodeur.cpp
	$(FC) $(OPT) Humain_Decodeur.cpp

Combinaison.o : FonctionsUtiles.hpp Combinaison.cpp Combinaison.hpp
	$(FC) $(OPT) Combinaison.cpp
	
CombiMastermind.o : FonctionsUtiles.hpp CombiMastermind.cpp CombiMastermind.hpp
	$(FC) $(OPT) CombiMastermind.cpp
	
CombiWordle.o : Combinaison.hpp CombiWordle.cpp CombiWordle.hpp
	$(FC) $(OPT) CombiWordle.cpp
	
FonctionsUtiles.o : FonctionsUtiles.cpp FonctionsUtiles.hpp
	$(FC) $(OPT) FonctionsUtiles.cpp

Humain_Codeur_Wordle.o : Humain_Codeur.hpp Humain_Codeur_Wordle.cpp Humain_Codeur_Wordle.hpp Menu.hpp
	$(FC) $(OPT) $(LIBS) Humain_Codeur_Wordle.cpp
	
Humain_Codeur_Mastermind.o : Humain_Codeur.hpp Humain_Codeur_Mastermind.cpp Humain_Codeur_Mastermind.hpp Menu.hpp
	$(FC) $(OPT) $(LIBS) Humain_Codeur_Mastermind.cpp

Humain_Decodeur_Wordle.o : Humain_Decodeur.hpp Humain_Decodeur_Wordle.cpp Humain_Decodeur_Wordle.hpp
	$(FC) $(OPT) Humain_Decodeur_Wordle.cpp
	
Humain_Decodeur_Mastermind.o : Humain_Decodeur.hpp Humain_Decodeur_Mastermind.cpp Humain_Decodeur_Mastermind.hpp
	$(FC) $(OPT) Humain_Decodeur_Mastermind.cpp
	
IA_Codeur.o : IA.hpp IA_Codeur.hpp IA_Codeur.cpp
	$(FC) $(OPT) IA_Codeur.cpp

IA_Decodeur.o : IA.hpp IA_Decodeur.hpp IA_Decodeur.cpp
	$(FC) $(OPT) IA_Decodeur.cpp

IA_Codeur_Wordle.o : IA_Codeur.hpp IA_Codeur_Wordle.cpp IA_Codeur_Wordle.hpp Menu.hpp
	$(FC) $(OPT) $(LIBS) IA_Codeur_Wordle.cpp

IA_Codeur_Mastermind.o : IA_Codeur.hpp IA_Codeur_Mastermind.cpp IA_Codeur_Mastermind.hpp Menu.hpp
	$(FC) $(OPT) $(LIBS) IA_Codeur_Mastermind.cpp

IA_Decodeur_Wordle.o : IA_Decodeur.hpp IA_Decodeur_Wordle.cpp IA_Decodeur_Wordle.hpp
	$(FC) $(OPT) IA_Decodeur_Wordle.cpp
	
IA_Decodeur_Mastermind.o : IA_Decodeur.hpp IA_Decodeur_Mastermind.cpp IA_Decodeur_Mastermind.hpp
	$(FC) $(OPT) IA_Decodeur_Mastermind.cpp

UnitTest : Menu.o JeuDeDeduction.o Mastermind.o Wordle.o Joueur.o Humain.o Humain_Codeur.o Humain_Decodeur.o Humain_Codeur_Wordle.o Humain_Codeur_Mastermind.o Humain_Decodeur_Wordle.o Humain_Decodeur_Mastermind.o IA.o IA_Codeur.o IA_Decodeur.o IA_Codeur_Wordle.o IA_Codeur_Mastermind.o IA_Decodeur_Wordle.o IA_Decodeur_Mastermind.o Combinaison.o CombiMastermind.o CombiWordle.o FonctionsUtiles.o
	$(FC) Menu.o JeuDeDeduction.o Mastermind.o Wordle.o Joueur.o Humain.o Humain_Codeur.o Humain_Decodeur.o Humain_Codeur_Wordle.o Humain_Codeur_Mastermind.o Humain_Decodeur_Wordle.o Humain_Decodeur_Mastermind.o IA.o IA_Codeur.o IA_Decodeur.o IA_Codeur_Wordle.o IA_Codeur_Mastermind.o IA_Decodeur_Wordle.o IA_Decodeur_Mastermind.o Combinaison.o CombiMastermind.o CombiWordle.o FonctionsUtiles.o UnitTest.cpp -o UnitTest $(LIBS) $(UNIT);
	./UnitTest;
	@ rm UnitTest;

main : Menu.o JeuDeDeduction.o Mastermind.o Wordle.o Joueur.o Humain.o Humain_Codeur.o Humain_Decodeur.o Humain_Codeur_Wordle.o Humain_Codeur_Mastermind.o Humain_Decodeur_Wordle.o Humain_Decodeur_Mastermind.o IA.o IA_Codeur.o IA_Decodeur.o IA_Codeur_Wordle.o IA_Codeur_Mastermind.o IA_Decodeur_Wordle.o IA_Decodeur_Mastermind.o Combinaison.o CombiMastermind.o CombiWordle.o FonctionsUtiles.o
	$(FC) Menu.o JeuDeDeduction.o Mastermind.o Wordle.o Joueur.o Humain.o Humain_Codeur.o Humain_Decodeur.o Humain_Codeur_Wordle.o Humain_Codeur_Mastermind.o Humain_Decodeur_Wordle.o Humain_Decodeur_Mastermind.o IA.o IA_Codeur.o IA_Decodeur.o IA_Codeur_Wordle.o IA_Codeur_Mastermind.o IA_Decodeur_Wordle.o IA_Decodeur_Mastermind.o Combinaison.o CombiMastermind.o CombiWordle.o FonctionsUtiles.o main.cpp -o main $(LIBS);
	./main;
	@ rm main;

clean : 
	rm *.o *.gch main



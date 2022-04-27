#include <string>
#include <iostream>
#include <vector>
#include "Wordle.hpp"
#include "JeuDeDeduction.hpp"
#include "Joueur.hpp"
#include "Combinaison.hpp"
#include "Menu.hpp"
#include "FonctionsUtiles.hpp"

using namespace std;

extern int NB_CASE;
extern int Langue;
extern int NB_TOUR;

Wordle :: Wordle() : JeuDeDeduction(){

}

Wordle :: Wordle(Joueur *codeur1, Joueur *decodeur1) : JeuDeDeduction(codeur1,decodeur1){
	
}


void Wordle :: partie(){
	FonctionsUtiles f;
	f.clear();
	cout << "Bienvenue dans le Wordle !\n" << endl;
}

void Wordle :: afficherPartie(){
}



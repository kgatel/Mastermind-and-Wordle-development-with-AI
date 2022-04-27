#include <iostream>
#include <string>
#include "Mastermind.hpp"  
#include "FonctionsUtiles.hpp"

using namespace std;


Mastermind::Mastermind() : JeuDeDeduction(){
}

Mastermind :: Mastermind(Joueur *codeur1, Joueur *decodeur1,Menu menu1) : JeuDeDeduction(codeur1,decodeur1,menu1){
	
}

void Mastermind :: partie(){
	FonctionsUtiles f;
	f.clear();
	cout << "Bienvenue dans le Mastermind !\n" << endl;
	(*codeur).jouer();	
}

void Mastermind :: afficherPartie(){
}

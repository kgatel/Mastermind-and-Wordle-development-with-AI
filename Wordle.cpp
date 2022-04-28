#include <string>
#include <iostream>
#include <vector>
#include "Wordle.hpp"
#include "JeuDeDeduction.hpp"
#include "Joueur.hpp"
#include "Combinaison.hpp"
#include "Menu.hpp"
#include "FonctionsUtiles.hpp"
#include "CombiWordle.hpp"

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
	cout << f.vert("Bienvenue dans le Wordle !\n") << endl;
	(*codeur).jouer();
	do{
		cout << f.jaune("\nTour n°"+f.intToString(numeroTour+1))<<endl;
		(*decodeur).jouer();
		historiqueCombinaison.push_back((*decodeur).getCombinaison());
		historiqueResultat.push_back(CombiWordle((*decodeur).getCombinaison()).resultat((*codeur).getCombinaison()));
		afficherHistorique();
		incrTour();
	}while(detectionVictoire()==NULL);
	cout << endl;
	if (detectionVictoire()==codeur){
		cout << (*codeur).toString();
	}else{
		cout << (*decodeur).toString();
	}
	cout << " a remporté la partie." << endl;
}

void Wordle :: afficherHistorique(){

}



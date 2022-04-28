#include <iostream>
#include <string>
#include "Mastermind.hpp"  
#include "FonctionsUtiles.hpp"
#include "CombiMastermind.hpp"

using namespace std;


Mastermind::Mastermind() : JeuDeDeduction(){
}

Mastermind :: Mastermind(Joueur *codeur1, Joueur *decodeur1) : JeuDeDeduction(codeur1,decodeur1){
	
}

void Mastermind :: partie(){
	FonctionsUtiles f;
	f.clear();
	cout << "Bienvenue dans le Mastermind !\n" << endl;
	(*codeur).jouer();
	do{
		cout << "\nTour n°"<<numeroTour+1<<endl;
		(*decodeur).jouer();
		historiqueCombinaison.push_back((*decodeur).getCombinaison());
		historiqueResultat.push_back((*decodeur).getCombinaison().resultat((*codeur).getCombinaison()));
		cout << CombiMastermind((*decodeur).getCombinaison()).resultat((*codeur).getCombinaison());
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

void Mastermind :: afficherHistorique(){
	//while
}

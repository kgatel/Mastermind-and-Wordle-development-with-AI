#include <iostream>
#include <string>
#include "Mastermind.hpp"  
#include "FonctionsUtiles.hpp"

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
		(*decodeur).jouer();
		historiqueCombinaison.push_back((*decodeur).getCombinaison());
		historiqueResultat.push_back((*decodeur).getCombinaison().resultat((*codeur).getCombinaison()));
		afficherPartie();
	}while(detectionVictoire()==NULL);
	if (detectionVictoire()==codeur){
		cout << (*codeur).toString();
	}else{
		cout << (*decodeur).toString();
	}
	cout << " a remporté la partie." << endl;
}

void Mastermind :: afficherPartie(){
}

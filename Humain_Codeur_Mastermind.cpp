#include <string>
#include "FonctionsUtiles.hpp"
#include "Combinaison.hpp"
#include "Menu.hpp"
#include "CombiMastermind.hpp"
#include "Humain_Codeur.hpp"
#include "Humain_Codeur_Mastermind.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Humain_Codeur_Mastermind :: Humain_Codeur_Mastermind () {

}

Combinaison Humain_Codeur_Mastermind :: entrerCode() {
	
	string chaine;
	do {
	cout<<"Entrez une combinaison de ces couleurs : Rouge, Vert, Bleu, Jaune, Orange, Violet, Marron";
	cin>>chaine;
	} while (VerifierEntree(chaine));
	return CombiMastermind(chaine);
	
}

bool Humain_Codeur_Mastermind :: VerifierEntree(string entree) {
	FonctionsUtiles f;
	CombiMastermind combi;
	combi.setCombinaison(f.split(entree,' '));
	bool test=true;
	int i=0,taille=(int)combi.get().size();
	while((test)&&(i<taille)){
		if(f.checkMotFichier(Menu::ENSEMBLE_ELEMENT,combi.get(i))){
			i++;
		}
		else {
		test=false;
		}
	}
	return test;
		
}


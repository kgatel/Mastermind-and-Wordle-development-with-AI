#include "FonctionsUtiles.hpp"
#include "Combinaison.hpp"
#include "Menu.hpp"
#include "CombiMastermind.hpp"
#include "IA_Codeur.hpp"
#include "IA_Codeur_Mastermind.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

IA_Codeur_Mastermind :: IA_Codeur_Mastermind () : IA_Codeur(){

}

void IA_Codeur_Mastermind :: jouer(){
	setCombinaison(CombiMastermind(choisirCombinaison()));
}

Combinaison IA_Codeur_Mastermind :: choisirCombinaison(){
	return genererCode();
}

Combinaison IA_Codeur_Mastermind :: genererCode(){
	FonctionsUtiles f;
	vector<string> Couleurs;
	vector<string> res;
	ifstream Handle;
	string CurrLine;
	Handle.open(Menu::ENSEMBLE_ELEMENT);
	cin.clear();
	if(Handle.is_open()) {
		while(getline(Handle,CurrLine)) {
			if (CurrLine!="end")
			{
				Couleurs.push_back(CurrLine);
			}
		}
	}
	Handle.close();
	
	srand (time(NULL));
	for (int i=0;i<Menu::NB_CASE;i++){
		res.push_back(Couleurs[rand() % Menu::NB_ELEMENT]);	//rentre une couleur aléatoire
	}
	system("clear");
	
	return CombiMastermind(res);
}

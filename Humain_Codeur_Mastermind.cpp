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

void Humain_Codeur_Mastermind :: jouer(){
	setCombinaison(CombiMastermind(entrerCode()));
}

Combinaison Humain_Codeur_Mastermind :: entrerCode() {
	FonctionsUtiles f;
	ifstream Handle;
	string chaine="";
	string CurrLine;
	int compteur=0;
	Handle.open(Menu::ENSEMBLE_ELEMENT);
	cin.clear();
	do {
		cout<<f.bleu("Codeur entrez une combinaison de "+f.intToString(Menu::NB_CASE)+" couleurs séparées d'espaces \n");
		if(Handle.is_open()) {
	 
			while(getline(Handle,CurrLine)) {
				if (CurrLine!="end")
				{
					cout << "|" << CurrLine << endl;
				}
			}
			
		}
		else {cout << "Erreur fichier";}
		do{
			getline(cin,chaine);
			compteur++;
		}while((chaine=="")&&(compteur==1));
		compteur=0;
	} while (!verifierEntree(chaine));
	Handle.close();
	return CombiMastermind(chaine);
	
}

bool Humain_Codeur_Mastermind :: verifierEntree(string entree) {
	FonctionsUtiles f;
	int i=0;
	CombiMastermind combi;
	combi.setCombinaison(f.split(entree,' '));
	int taille=combi.get().size();
	if (taille == Menu :: NB_CASE) {
		while(i<taille){
			if(f.checkMotFichier(Menu::ENSEMBLE_ELEMENT,combi.get(i))){
				i++;
			}
			else { cout<< "Le mot "<<f.rouge(combi.get(i))<<" n'est pas une couleur !"<<endl;
			return false;
			}
		}
		if (i==taille) {return true;}
	} 
	else {
		if (taille==1){
			cout <<"Vous n'avez rentré que "<<taille<<" mot !"<<endl;
		}else{
			cout <<"Vous n'avez rentré que "<<taille<<" mots !"<<endl;
		}
	}
	return false;
}


#include "../include/FonctionsUtiles.hpp"
#include "../include/Combinaison.hpp"
#include "../include/Menu.hpp"
#include "../include/CombiMastermind.hpp"
#include "../include/Humain_Decodeur.hpp"
#include "../include/Humain_Decodeur_Mastermind.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Humain_Decodeur_Mastermind :: Humain_Decodeur_Mastermind(){
}
void Humain_Decodeur_Mastermind :: jouer(){
	setCombinaison(CombiMastermind(entrerCombinaison()));
}

bool Humain_Decodeur_Mastermind :: verifierEntree(string entree) {
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
	if (taille<=1){
		cout <<"Vous n'avez rentré que "<<taille<<" mot !\n"<<endl;
	}else{
		cout <<"Vous n'avez rentré que "<<taille<<" mots !\n"<<endl;
	}
	return false;
		
}

Combinaison Humain_Decodeur_Mastermind :: entrerCombinaison() {
	int compteur=0;
	string couleurs;
	bool t=false;
	while(!t) {
		cout<<"Decodeur entrez une combinaison de "<< Menu::NB_CASE<< " couleurs séparées d'espaces \n";
		do{
			getline(cin,couleurs);
			compteur++;
		}while((couleurs=="")&&(compteur==1));
		compteur=0;
		if (verifierEntree(couleurs)) {t=true;}
	}
	return CombiMastermind(couleurs);
}

#include "FonctionsUtiles.hpp"
#include "Combinaison.hpp"
#include "Menu.hpp"
#include "CombiMastermind.hpp"
#include "Humain_Decodeur.hpp"
#include "Humain_Decodeur_Mastermind.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Humain_Decodeur_Mastermind :: Humain_Decodeur_Mastermind(){
}
void Humain_Decodeur_Mastermind :: jouer(){
	
}

bool Humain_Decodeur_Mastermind :: VerifierEntree(string entree) {
	FonctionsUtiles f;
	string chemin="ressources";
	chemin=chemin.append("//").append("Couleurs").append("//").append("liste");
	int i=0;
	CombiMastermind combi;
	combi.setCombinaison(f.split(entree,' '));
	int taille=combi.get().size();
	if (taille == Menu :: NB_CASE) {
		while(i<taille){
			if(f.checkMotFichier(chemin,combi.get(i))){
				i++;
			}
			else { cout<< "Le mot "<<f.rouge(combi.get(i))<<" n'est pas une couleur !"<<endl;
			return false;
			}
		}
		if (i==taille) {return true;}
	} 
	else {cout <<"Vous n'avez rentré que "<<taille<<" mots!"<<endl;}
	return false;
		
}

Combinaison Humain_Decodeur_Mastermind :: entrerCombinaison() {
	string couleurs;
	bool t=false;
	while(!t) {
		cout<<"Decodeur entrez une combinaison de "<< Menu::NB_CASE<< " couleurs séparées d'espaces \n";
		getline(cin,couleurs);
		if (VerifierEntree(couleurs)) {t=true;}
	}
	return CombiMastermind(couleurs);
}

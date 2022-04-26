#include "FonctionsUtiles.hpp"
#include "CombiMastermind.hpp"
#include "Humain_Decodeur.hpp"
#include "Humain_Decodeur_Mastermind.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Humain_Decodeur_Mastermind :: Humain_Decodeur_Mastermind(){
}

bool Humain_Decodeur_Mastermind :: VerifierEntree(string entree) {
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

Combinaison Humain_Decodeur_Mastermind :: entrerCombinaison() {
	string couleurs;
	FonctionsUtiles f;
	CombiMastermind combi;
	int taille=(int)combi.get().size();
	bool t=false;
	while(!t) {
		cout << "Décodeur entrez votre Combinaison de couleurs ici : ";
		cin >> couleurs;
		combi.setCombinaison(f.split(couleurs,' '));
		if (taille==Menu::NB_CASE) {
		if (VerifierEntree(couleurs)) {t=true;}
		else cout << "Votre combinaison n'est pas correcte essayez encore \n";
		}
		if (taille!=Menu::NB_CASE){cout << "La combinaison ne fait pas " <<Menu::NB_CASE<<" couleurs \n";}}
	return CombiWordle(couleurs);
}

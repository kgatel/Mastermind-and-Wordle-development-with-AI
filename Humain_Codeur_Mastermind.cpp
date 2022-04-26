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
	
	ifstream Handle ("ressources/Couleurs/liste.txt");
	string chaine;
	do {
	cout<<"Entrez une combinaison de "<< Menu::NB_CASE<< " couleurs séparées d'espaces \n";
    if(Handle.is_open()) {
        int I = 1;
        while(!Handle.eof()) {
            string CurrLine;
            getline(Handle,CurrLine);
            cout << I << ":" << CurrLine << endl;
            I++;
        }
        Handle.close();
    }
    cout<<'\n';
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
	if (taille == Menu :: NB_CASE) {
		while((test)&&(i<taille)){
			if(f.checkMotFichier(Menu::ENSEMBLE_ELEMENT,combi.get(i))){
				i++;
			}
			else {
			test=false;
			}
		}
	} 
	else {
	test=false;
	}
	return test;
		
}


#include "../include/FonctionsUtiles.hpp"
#include "../include/Combinaison.hpp"
#include "../include/Menu.hpp"
#include "../include/CombiMastermind.hpp"
#include "../include/Humain_Codeur.hpp"
#include "../include/Humain_Codeur_Mastermind.hpp"
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
	string chaine="",chaine2="";
	string CurrLine;
	int compteur=0;
	Handle.open(Menu::ENSEMBLE_ELEMENT);
	cin.clear();
	do {
		cout<<f.cyan("Codeur entrez une combinaison de "+f.intToString(Menu::NB_CASE)+" couleurs séparées d'espaces \n");
		if(Handle.is_open()) {
	 
			while(getline(Handle,CurrLine)) {
				if (CurrLine!="end")
				{
					if (f.equals(CurrLine,"Rouge")) {chaine2+=f.carrerouge()+" Rouge";}
					if (f.equals(CurrLine,"Vert")) {chaine2+=f.carrevert()+" Vert";}
					if (f.equals(CurrLine,"Jaune")) {chaine2+=f.carrejaune()+" Jaune";}
					if (f.equals(CurrLine,"Bleu")) {chaine2+=f.carrebleu()+" Bleu";}
					if (f.equals(CurrLine,"Violet")) {chaine2+=f.carreviolet()+" Violet";}
					if (f.equals(CurrLine,"Blanc")) {chaine2+=f.carreblanc()+" Blanc";}	
					if (f.equals(CurrLine,"Orange")) {chaine2+=f.carreorange()+" Orange";}
					if (f.equals(CurrLine,"Rose")) {chaine2+=f.carrerose()+" Rose";}	
					if (f.equals(CurrLine,"Marron")) {chaine2+=f.carremarron()+" Marron";}
					cout << chaine2 << endl;
				}
				chaine2="";
			}
			
		}
		else {cout << "Erreur fichier";}
		cout << "Code : ";
		do{
			getline(cin,chaine);
			compteur++;
		}while((chaine=="")&&(compteur==1));
		compteur=0;
	} while (!verifierEntree(chaine));
	Handle.close();
	system("clear");
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
		if (taille<=1){
			cout <<"Vous n'avez rentré que "<<taille<<" mot !\n"<<endl;
		}else{
			cout <<"Vous n'avez rentré que "<<taille<<" mots !\n"<<endl;
		}
	}
	return false;
}


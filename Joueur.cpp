#include "Joueur.hpp"
#include "Combinaison.hpp"
#include "Menu.hpp"

#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>


Joueur :: Joueur(){
	Combinaison combinaison();
	numeroTour=0;
	}
Joueur::Joueur(Combinaison comb,int nb){
	combinaison=comb;
	numeroTour=nb;
	}

Combinaison Joueur:: getCombinaison(){
	return combinaison;
	}

int Joueur:: getnumeroTour(){
	return numeroTour;
	}

void Joueur:: entrerCombinaison(){
	bool continuer;
	continuer= true;
	string *ent;
	ent = new string;
		do {
			cout<< "entrer votre proposition\n"<<endl;
			cin>>*ent;
			cout<<"voici la saisie :"<<*ent<<endl;
			if (verification(*ent)){
				continuer=false;}
				}while(continuer);
	Combinaison comb(*ent);
	combinaison=comb;
	}

vector<string> Joueur :: split(const string &chaine, char delimiteur) {
	vector<string> elements;
	stringstream ss(chaine);
	string sousChaine;
	while (getline(ss, sousChaine, delimiteur)){
		elements.push_back(sousChaine);
	}
	return elements;

}
bool Joueur::verification(const string chaine){
	bool verif,btaille=false,belements=false;
	int taille;
	vector<string> splited;
	splited=split(chaine,' ');
	taille=splited.size();
	extern int NB_CASE;
	//verification de la taille
	if(taille==NB_CASE){btaille=true;}
	//verification de l'éxistence des éléments
	//a faire en fonction de l'implémentation d'ENSEMBLE_ELEMENTS dans menu
	
	if (btaille&&belements){
		
		verif=true;
		}
	else{
		verif=false;}
	

	return verif;
	
	}

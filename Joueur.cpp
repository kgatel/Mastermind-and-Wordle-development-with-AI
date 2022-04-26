#include "Joueur.hpp"
#include "Combinaison.hpp"
#include "FonctionsUtiles.hpp"

#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>


Joueur :: Joueur(){
	Combinaison combinaison();
}
Joueur::Joueur(string pseudo1){
	Combinaison combinaison();
	pseudo=pseudo1;
}

Combinaison Joueur:: getCombinaison(){
	return combinaison;
}

void Joueur :: entrerPseudo(){
	//demander à l'utilisateur de rentrer son pseudo
	
}

string Joueur:: getPseudo(){
	return pseudo;
}

void Joueur :: setPseudo(string pseudo1){
	pseudo=pseudo1;
}

string Joueur :: toString(){
	return pseudo;
}



/*void Joueur:: entrerCombinaison(){
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

}*/

/*
 bool Joueur::verification(const string chaine){
	bool verif,btaille=false,belements=false;
	int taille;
	FonctionsUtiles f;
	vector<string> splited;
	splited=f.split(chaine,' ');
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
*/

#include "Joueur.hpp"
#include "Combinaison.hpp"
#include "FonctionsUtiles.hpp"

#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>


Joueur :: Joueur(){
	Combinaison *tmp=NULL;
	combinaison=tmp;
	pseudo="Anonyme";
}
Joueur::Joueur(const string &pseudo1){
	Combinaison *tmp=NULL;
	combinaison=tmp;
	pseudo=pseudo1;
}

Combinaison* Joueur:: getCombinaison(){
	return combinaison;
}

void Joueur :: entrerPseudo(){
	//demander à l'utilisateur de rentrer son pseudo
	
}

void Joueur :: setCombinaison(Combinaison *c){
	combinaison=c;
}

string Joueur:: getPseudo(){
	return pseudo;
}

void Joueur :: setPseudo(const string &pseudo1){
	pseudo=pseudo1;
}

string Joueur :: toString(){
	return pseudo;
}

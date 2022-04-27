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

void Joueur :: setCombinaison(Combinaison c){
	combinaison=c;
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

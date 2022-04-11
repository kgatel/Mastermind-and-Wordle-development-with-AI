#include "Joueur.hpp"
#include "Combinaison.hpp"
#include "Menu.hpp"

#include <iostream>
#include <string>


Joueur :: Joueur(){
	Combinaison combinaison("");
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
	string ent("");
	cout<< "entrer votre proposition\n"<<endl;
	cin>>ent;
	cout<<"voici la saisie :"<<ent<<endl;
	}

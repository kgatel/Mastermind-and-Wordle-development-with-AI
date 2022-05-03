#include <string>
#include <iostream>
#include <vector>
#include "JeuDeDeduction.hpp"
#include "Joueur.hpp"
#include "Humain_Codeur_Mastermind.hpp"
#include "Combinaison.hpp"
#include "Menu.hpp"
#include "FonctionsUtiles.hpp"

#include <cstring>

using namespace std;

extern int NB_CASE;
extern int Langue;
extern int NB_TOUR;

JeuDeDeduction :: JeuDeDeduction(){
	(*codeur).setPseudo("Le codeur");
	(*decodeur).setPseudo("Le décodeur");
}

JeuDeDeduction :: JeuDeDeduction(Joueur *codeur1, Joueur *decodeur1){
	codeur=codeur1;
	decodeur=decodeur1;
	(*codeur).setPseudo("Le codeur");
	(*decodeur).setPseudo("Le décodeur");
	historiqueCombinaison=vector<Combinaison>();
	numeroTour=0;
	historiqueResultat=vector<string>();
}


Joueur* JeuDeDeduction :: detectionVictoire(){
	//retourne null s'il n'y a pas de joueur gagnant, sinon retourne le joueur gagnant
	Joueur *res=NULL;
	FonctionsUtiles f;
	
	bool egale=true;
	for (int i=0;i<Menu::NB_CASE;i++){
		if(!f.equals((*codeur).getCombinaison().get(i),(*decodeur).getCombinaison().get(i))){
			egale=false;
		}
	}
	if (egale){
		res=decodeur;
	}else{
		if (numeroTour==Menu::NB_TOUR){
			res=codeur;
		}
	}
	return res;
}

int JeuDeDeduction :: getTour(){
	return numeroTour;
}

void JeuDeDeduction :: incrTour(){
	numeroTour++;
}


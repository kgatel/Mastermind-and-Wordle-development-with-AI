#include <string>
#include <iostream>
#include <vector>
#include "JeuDeDeduction.hpp"

using namespace std;

JeuDeDeduction :: JeuDeDeduction(){

}

JeuDeDeduction :: JeuDeDeduction(Joueur codeur1, Joueur decodeur1, vector<Combinaison> HistoriqueCombinaison1,int numeroTour1,Menu menu1,vector<string> historiqueResultatBienPlace1,vector<string> historiqueResultatMalPlace1){
	codeur=codeur1;
	decodeur=decodeur1;
	HistoriqueCombinaison=vector<Combinaison>();
	numeroTour=1;
	menu=menu1;
	historiqueResultatBienPlace=vector<string>();
	historiqueResultatMalPlace=vector<string>();
}

void JeuDeDeduction :: partie(){
	
}
/*
virtual void afficherPartie();

void afficherCode();

Joueur detectionVictoire();

int getTour();

void incrTour();*/


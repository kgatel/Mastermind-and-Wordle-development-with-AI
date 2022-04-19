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
	//méthode abstraite, déroulement d'une partie
}

void JeuDeDeduction :: afficherPartie(){
	//méthode abstraite, permet d'afficher une partie
}

void JeuDeDeduction :: afficherCode(){
	//demande à l'utilisateur le mdp, si le mdp est bon alors afficher le code
}

Joueur JeuDeDeduction :: detectionVictoire(){
	//retourne null pas de joueur gagnant, sinon retourne le joueur gagnant
	Joueur res;
	
	return res;
}

int JeuDeDeduction :: getTour(){
	return numeroTour;
}

void JeuDeDeduction :: incrTour(){
	numeroTour++;
}


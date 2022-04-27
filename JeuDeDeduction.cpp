#include <string>
#include <iostream>
#include <vector>
#include "JeuDeDeduction.hpp"
#include "Joueur.hpp"
#include "Humain_Codeur_Mastermind.hpp"
#include "Combinaison.hpp"
#include "Menu.hpp"

using namespace std;

extern int NB_CASE;
extern int Langue;
extern int NB_TOUR;

JeuDeDeduction :: JeuDeDeduction(){

}

JeuDeDeduction :: JeuDeDeduction(Joueur *codeur1, Joueur *decodeur1,Menu menu1){
	codeur=codeur1;
	decodeur=decodeur1;
	HistoriqueCombinaison=vector<Combinaison>();
	numeroTour=1;
	menu=menu1;
	historiqueResultatBienPlace=vector<string>();
	historiqueResultatMalPlace=vector<string>();
}

int JeuDeDeduction :: main(){
	cout<<"ntm"<<endl;
	return 0;
}

void JeuDeDeduction :: afficherCode(){
	//demande à l'utilisateur le mdp, si le mdp est bon alors afficher le code
}

Joueur* JeuDeDeduction :: detectionVictoire(){
	//retourne null pas de joueur gagnant, sinon retourne le joueur gagnant
	Joueur *res;
	
	
	return res;
}

/*void JeuDeDeduction :: partie(){
	cout << "Si ce message est écris alors c'est la méthode partie() de JeuDeDeduction qui est appelée" << endl;
}*/
		
		
//void JeuDeDeduction :: afficherPartie(){}

int JeuDeDeduction :: getTour(){
	return numeroTour;
}

void JeuDeDeduction :: incrTour(){
	numeroTour++;
}


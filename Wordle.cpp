#include <string>
#include <iostream>
#include <vector>
#include "Wordle.hpp"
#include "JeuDeDeduction.hpp"
#include "Joueur.hpp"
#include "Combinaison.hpp"
#include "Menu.hpp"

using namespace std;

int Menu::NB_CASE;
int Menu::Langue;
int Menu::NB_TOUR;

Wordle :: Wordle() : JeuDeDeduction(){

}

Wordle :: Wordle(Joueur codeur1, Joueur decodeur1, vector<Combinaison> HistoriqueCombinaison1,int numeroTour1,Menu menu1,vector<string> historiqueResultatBienPlace1,vector<string> historiqueResultatMalPlace1) :JeuDeDeduction(codeur1,decodeur1,HistoriqueCombinaison1,numeroTour1,menu1,historiqueResultatBienPlace1,historiqueResultatMalPlace1){
	
}


void Wordle :: partie(Joueur Codeur, Joueur Decodeur){
	cout << "******* Bienvenue dans le Wordle ! ********\n" << endl;
	cout << "Les règles sont très simples, dans un premier temps le codeur "+Codeur.toString()+" va devoir entrer un mot, qui sera le mot à deviner." << endl;
	cout << "Ensuite le décodeur "+Decodeur.toString()+" va lui devoir trouver mot en " << NB_TOUR << "." << end;
	cout << "S'il y arrive, alors le décodeur "+Decodeur.toString()+" l'emporte, sinon la victoire sera pour le codeur "+Codeur.toString()+".\n" << endl;
	//cout << 
}

void Wordle :: afficherPartie(){
}

void JeuDeDeduction :: afficherCode(){
}

Joueur JeuDeDeduction :: detectionVictoire(){
	Joueur res;
	
	return res;
}

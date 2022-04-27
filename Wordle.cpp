#include <string>
#include <iostream>
#include <vector>
#include "Wordle.hpp"
#include "JeuDeDeduction.hpp"
#include "Joueur.hpp"
#include "Combinaison.hpp"
#include "Menu.hpp"

using namespace std;

extern int NB_CASE;
extern int Langue;
extern int NB_TOUR;

Wordle :: Wordle() : JeuDeDeduction(){

}

Wordle :: Wordle(Joueur *codeur1, Joueur *decodeur1,Menu menu1) : JeuDeDeduction(codeur1,decodeur1,menu1){
	
}


void Wordle :: partie(){
	/*cout << "******* Bienvenue dans le Wordle ! ********\n" << endl;
	cout << "Les règles sont très simples, dans un premier temps le codeur "+Codeur.toString()+" va devoir entrer un mot, qui sera le mot à deviner." << endl;
	cout << "Ensuite le décodeur "+Decodeur.toString()+" va lui devoir trouver mot en " << NB_TOUR << "." << end;
	cout << "S'il y arrive, alors le décodeur "+Decodeur.toString()+" l'emporte, sinon la victoire sera pour le codeur "+Codeur.toString()+".\n" << endl;
	//cout << */
}

void Wordle :: afficherPartie(){
}



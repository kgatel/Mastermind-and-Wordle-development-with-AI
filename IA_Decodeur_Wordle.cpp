#include "FonctionsUtiles.hpp"
#include "CombiWordle.hpp"
#include "IA_Decodeur.hpp"
#include "IA_Decodeur_Wordle.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

IA_Decodeur_Wordle :: IA_Decodeur_Wordle() : IA_Decodeur() {
}
void IA_Decodeur_Wordle :: jouer(){
	//setCombinaison(CombiWordle(choisirCombinaison()));
}

vector<Combinaison> IA_Decodeur_Wordle :: Combi_possible(){
	//load dictionary
	return vector<Combinaison>();
}

void IA_Decodeur_Wordle :: Maj_ensemble(Combinaison combi,int bienPlace,int malPlace){
}
		 
/*Combinaison IA_Decodeur_Wordle::choixCombinaisonWordle(CombiWordle(combi),int bienPlace,int malPlace){
	return Combinaison();
}*/

Combinaison IA_Decodeur_Wordle :: choisirCombinaison(){
	CombiWordle combi;
	//int bienPlace=0;
	//int malPlace=0;
	vector<Combinaison> ensemble;
	return combi;// choixCombinaisonWordle(combi,bienPlace,malPlace,ensemble);
}
	

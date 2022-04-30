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

void IA_Decodeur_Wordle :: Maj_ensemble(CombiMastermind combi,int bienPlace,int malPlace,vector<Combinaison> ensemble){
}
		 
Combinaison IA_Decodeur_Wordle :: choixCombinaisonWordle(CombiMastermind combi,int bienPlace,int malPlace,vector<Combinaison> ensemble){
	return Combinaison();
}

Combinaison IA_Decodeur_Wordle :: choisirCombinaison(){
	CombiMastermind combi;
	int bienPlace=0;
	int malPlace=0;
	vector<Combinaison> ensemble;
	return choixCombinaisonWordle(combi,bienPlace,malPlace,ensemble);
}
	

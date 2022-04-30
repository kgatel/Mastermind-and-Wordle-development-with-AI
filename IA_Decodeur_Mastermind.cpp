#include "FonctionsUtiles.hpp"
#include "Combinaison.hpp"
#include "Menu.hpp"
#include "CombiMastermind.hpp"
#include "IA_Decodeur.hpp"
#include "IA_Decodeur_Mastermind.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <set>

using namespace std;

IA_Decodeur_Mastermind :: IA_Decodeur_Mastermind(){
}
void IA_Decodeur_Mastermind :: jouer(){
	setCombinaison(CombiMastermind(choisirCombinaison()));
}

vector<Combinaison> IA_Decodeur_Mastermind :: Combi_possible(){

	//int taille=Menu::NB_CASE;

	set<string> Colorset = {"Rouge","Bleu","Vert","Jaune","Orange","Violet","Marron","Rose","Blanc"};
	vector<Combinaison> ensemble;
	string temp;
	Combinaison combi;


	
for (string i1: Colorset){
for (string i2: Colorset){
for (string i3: Colorset){
for (string i4: Colorset){
    
	temp.clear();
	temp=i1+" "+i2+" "+i3+" "+i4;
	combi=CombiMastermind(temp);

    
	ensemble.push_back(combi);
}}}}

	return ensemble;
}

void IA_Decodeur_Mastermind :: Maj_ensemble(){
}
		 
Combinaison IA_Decodeur_Mastermind :: choisirCombinaison(){
	return Combinaison();
}
	

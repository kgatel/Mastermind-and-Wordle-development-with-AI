#include "FonctionsUtiles.hpp"
#include "Menu.hpp"
#include "CombiWordle.hpp"
#include "IA_Decodeur.hpp"
#include "IA_Decodeur_Wordle.hpp"
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

IA_Decodeur_Wordle :: IA_Decodeur_Wordle() : IA_Decodeur() {
	toutLesMotsCombi=Combi_possible();
}

void IA_Decodeur_Wordle :: jouer(){
	setCombinaison(CombiWordle(choisirCombinaison()));
}

vector<Combinaison> IA_Decodeur_Wordle :: Combi_possible(){
	//charge tout le dictionnaire pour la longueur et la langue choisie
	
	vector<string> toutLesMots;	
	string res;
	ifstream Handle;
	string CurrLine;
	string premiereLettre;

	string alphabet = "abcdefghijklmnopqrstuvwxyz";
    vector<char> char_alphabet(alphabet.length());
    std::copy(alphabet.begin(), alphabet.end(), char_alphabet.begin());
    
    for (const char &premiereLettre: char_alphabet) {
	Handle.open(Menu::ENSEMBLE_ELEMENT+"/"+premiereLettre+".txt");
	cin.clear();
	if(Handle.is_open()) {
		while (!Handle.eof()){
			getline(Handle,CurrLine);
			toutLesMots.push_back(CurrLine);
		}
		
	}
	
	Handle.close();
}
	 
	vector<Combinaison> toutLesMotsCombi;
	
	for (string temp: toutLesMots){
		toutLesMotsCombi.push_back(CombiWordle(res));
	}
	
	 
	return toutLesMotsCombi;
}

void IA_Decodeur_Wordle :: Maj_ensemble(Combinaison combi,int bienPlace,int malPlace){
}
		 
/*Combinaison IA_Decodeur_Wordle::choixCombinaisonWordle(CombiWordle(combi),int bienPlace,int malPlace){
	return Combinaison();
}*/

Combinaison IA_Decodeur_Wordle :: choisirCombinaison(){
	
	Combinaison combi;
	combi=toutLesMotsCombi[rand()% toutLesMotsCombi.size()];
	return combi;
	


}
	

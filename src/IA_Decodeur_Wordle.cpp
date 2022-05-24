#include "../include/Menu.hpp"
#include "../include/CombiWordle.hpp"
#include "../include/IA_Decodeur.hpp"
#include "../include/IA_Decodeur_Wordle.hpp"
#include "../include/FonctionsUtiles.hpp"

#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <algorithm>




using namespace std;

IA_Decodeur_Wordle :: IA_Decodeur_Wordle() : IA_Decodeur() {
	toutLesMotsCombi=Combi_possible();
	historiqueRes="";
}

void IA_Decodeur_Wordle :: jouer(){
	FonctionsUtiles f;
	string result;
	if (historiqueRes==""){
		setCombinaison(CombiWordle(choisirCombinaison()));
		}
	else {
		result=historiqueRes;
		Maj_ensemble(CombiWordle(combinaison),result);
		setCombinaison(CombiWordle(choisirCombinaison()));

		}
	
}

vector<Combinaison> IA_Decodeur_Wordle :: Combi_possible(){
	//charge tout le dictionnaire pour la longueur et la langue choisie
	vector<string> toutLesMots;	
	string res;
	
	string CurrLine;
	string premiereLettre;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	vector<char> char_alphabet(alphabet.length());
	copy(alphabet.begin(), alphabet.end(), char_alphabet.begin());
	for (const char premiereLettre: char_alphabet) 
	{
	ifstream Handle;
	Handle.open(Menu::ENSEMBLE_ELEMENT+"/"+premiereLettre+".txt");
	cin.clear();
	if(Handle.is_open()) {
		while (!Handle.eof())
				{getline(Handle,CurrLine);
				if (CurrLine!="")
					{toutLesMots.push_back(CurrLine);}
				}
	}
	Handle.close();
	}
	
	
	vector<Combinaison> toutLesMotsCombi;
	for (string temp: toutLesMots){
		toutLesMotsCombi.push_back(CombiWordle(temp));
	} 
	return toutLesMotsCombi;
}

void IA_Decodeur_Wordle :: Maj_ensemble(Combinaison combi,string resultat){
	FonctionsUtiles f;	
	vector<Combinaison>::iterator itr;
	int taille=toutLesMotsCombi.size();

	for (itr=toutLesMotsCombi.begin();itr!=toutLesMotsCombi.end();itr++)
		{

		if(!f.equals((CombiWordle(combi)).resultat_couleur((CombiWordle(*itr))),resultat))
			{toutLesMotsCombi.erase(itr);
			itr--;}
			
		else{
			

		}

}

	for (int i=0;i<taille;i++)
	{
		
	}
	
}
		 

Combinaison IA_Decodeur_Wordle :: choisirCombinaison(){
	CombiWordle ress;
	ress=toutLesMotsCombi[rand()%(int)toutLesMotsCombi.size()];
	return CombiWordle(ress);

}
	

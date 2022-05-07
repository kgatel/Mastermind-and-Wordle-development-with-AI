#include <string>
#include "FonctionsUtiles.hpp"
#include "Combinaison.hpp"
#include "Menu.hpp"
#include "CombiWordle.hpp"
#include "IA_Codeur.hpp"
#include "IA_Codeur_Wordle.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <ncurses.h>
#include <unistd.h>

using namespace std;


IA_Codeur_Wordle :: IA_Codeur_Wordle() : IA_Codeur(){
}

void IA_Codeur_Wordle :: jouer(){
	setCombinaison(CombiWordle(choisirCombinaison()));
}

Combinaison IA_Codeur_Wordle :: choisirCombinaison(){
	return genererCode();
}

Combinaison IA_Codeur_Wordle :: genererCode(){
	FonctionsUtiles f;
	vector<string> Mots;	
	string res;
	ifstream Handle;
	string CurrLine;
	string premiereLettre;
	int random26;
	srand (time(NULL));
	random26=rand()%26;
	
	premiereLettre=f.charToString(char(int('a')+random26))+".txt";
	
	Handle.open(Menu::ENSEMBLE_ELEMENT+"/"+premiereLettre);
	cin.clear();
	if(Handle.is_open()) {
		while (!Handle.eof()){
			getline(Handle,CurrLine);
			Mots.push_back(CurrLine);
		}
	}
	Handle.close();
		
	srand (time(NULL));
	res=Mots[rand() % (int)Mots.size()];	
	cout << f.cyan("Code bien enregistré, décodeur à vous de jouer !") << endl;
	return CombiWordle(res);
}

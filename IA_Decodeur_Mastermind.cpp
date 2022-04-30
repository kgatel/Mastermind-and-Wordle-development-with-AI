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
#include <chrono>
#include <thread>
#include <unistd.h>

#define TIME_TO_SLEEP 500

using namespace std;



IA_Decodeur_Mastermind :: IA_Decodeur_Mastermind() : IA_Decodeur(){
}
void IA_Decodeur_Mastermind :: jouer(){
	setCombinaison(CombiMastermind(choisirCombinaison()));
	std::this_thread::sleep_for(std::chrono::milliseconds(TIME_TO_SLEEP));
}

vector<Combinaison> IA_Decodeur_Mastermind :: Combi_possible(){

	//int taille=Menu::NB_CASE;

	vector<string> Colorset;
	ifstream Handle;
	string CurrLine;
	Handle.open(Menu::ENSEMBLE_ELEMENT);
	cin.clear();
	if(Handle.is_open()) {
		while(getline(Handle,CurrLine)) {
			if (CurrLine!="end")
			{
				Colorset.push_back(CurrLine);
			}
		}
	}
	Handle.close();
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

void IA_Decodeur_Mastermind :: Maj_ensemble(CombiMastermind combi,int bienPlace,int malPlace,vector<Combinaison> ensemble){
	FonctionsUtiles f;
	vector<Combinaison>::iterator itr;
	int taille=ensemble.size();
	for (int i=0;i<taille;i++)
	{
		if(!f.equals(f.charToString(CombiMastermind(combi).resultat(ensemble[i])[0]),f.intToString(bienPlace)) || !f.equals(f.charToString(CombiMastermind(combi).resultat(ensemble[i])[1]),f.intToString(malPlace)))
		{
			itr= ensemble.begin()+i;
			ensemble.erase(itr);
		}
	}

}
		 
Combinaison IA_Decodeur_Mastermind :: choisirCombinaison(){
	
	//cas random
	vector<Combinaison> ensemble = Combi_possible();
	Combinaison combi;
	int r;
	
	r= rand()% ensemble.size();
	combi=ensemble[r];
	
	return combi;
}
	

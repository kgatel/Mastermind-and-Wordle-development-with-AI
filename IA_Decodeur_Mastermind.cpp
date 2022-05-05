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

#define TIME_TO_SLEEP 200

using namespace std;



IA_Decodeur_Mastermind :: IA_Decodeur_Mastermind() : IA_Decodeur(){
	ensemble=Combi_possible();
	historiqueRes="";
}
void IA_Decodeur_Mastermind :: jouer(){
	FonctionsUtiles f;
	string resultat;
	resultat=historiqueRes;
	if (f.equals(historiqueRes,"")){
		setCombinaison(CombiMastermind(choisirCombinaison()));
		}
	else {
		Maj_ensemble(CombiMastermind(combinaison),resultat);
		setCombinaison(CombiMastermind(choisirCombinaison()));
		}
		this_thread::sleep_for(chrono::milliseconds(TIME_TO_SLEEP));
}
vector<string> IA_Decodeur_Mastermind :: produit(vector<string> ensemble,vector<string> colorset){
    vector <string> res;
    string temp;
    for (string i1: colorset){
        for (string i2: ensemble){
			temp=i2+" "+i1;
            res.push_back(temp);
        } 
    }
    return res;
	}
	
vector<Combinaison> IA_Decodeur_Mastermind :: Combi_possible(){
	

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
	
	vector<Combinaison> ensembleCombi;
	vector<string> ensemble = Colorset;
	string temp;
	Combinaison combi;
	
	for (int i=0;i<Menu::NB_CASE-1;i++){
		ensemble=produit(ensemble,Colorset);
	}
	
	for (string temp: ensemble){
		ensembleCombi.push_back(CombiMastermind(temp));
    
	}
	
	return ensembleCombi;
}

void IA_Decodeur_Mastermind :: Maj_ensemble(Combinaison combi,string resultat){
	FonctionsUtiles f;
	int bienPlace;
	int malPlace;
	
	bienPlace=stoi(f.charToString(resultat[0]));
	malPlace=stoi(f.charToString(resultat[1]));
	
	vector<Combinaison>::iterator itr;
	int taille=ensemble.size();
	for (int i=0;i<taille;i++)
	{
		if(!f.equals(f.charToString(CombiMastermind(ensemble[i]).resultat(CombiMastermind(combi))[0]),f.intToString(bienPlace)) || !f.equals(f.charToString(CombiMastermind(ensemble[i]).resultat(CombiMastermind(combi))[1]),f.intToString(malPlace)))
		{
			itr=ensemble.begin()+i;
			ensemble.erase(itr);
			taille--;
			i--;
		}
	}
	

}
		 
Combinaison IA_Decodeur_Mastermind :: choisirCombinaison(){
	
	//cas random
	Combinaison combi;
	int r;
	
	r= rand()% ensemble.size();
	combi=ensemble[r];
	
	return combi;
}
	

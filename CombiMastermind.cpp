#include <vector>
#include "CombiMastermind.hpp"
#include "FonctionsUtiles.hpp"
#include <cstring>  //Package permettant de comparer deux chaines de caractère
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


CombiMastermind :: CombiMastermind() {
	combinaison=vector<string>();
}

CombiMastermind :: CombiMastermind(const string &chaine){
	FonctionsUtiles f;
	combinaison=f.split(chaine,' ');
}

CombiMastermind :: CombiMastermind(Combinaison c){
	combinaison=c.get();
}
int CombiMastermind :: bienPlace(const CombiMastermind code){
	int res=0;
	for(int i=0;i<(int)combinaison.size();i++){
		if (strcasecmp(combinaison[i].c_str(), code.get(i).c_str()) == 0){ //vérifier si combinaison[i]==code.get(i)
			res++;
		}
	}
	return res;
}
		
int CombiMastermind :: malPlace(const CombiMastermind code){
	int res=0;
	int j=0;
	bool exit=false;
	for(int i=0;i<(int)combinaison.size();i++){
		//on doit vérifier que l'élément n'est pas bien placé, ensuite on vérifiera si la couleur existe sur les cases voisines
		if (!strcasecmp(combinaison[i].c_str(), code.get(i).c_str()) == 0){ //vérifier si combinaison[i]!=code.get(i)
			while((j<(int)combinaison.size()) && (!exit)){
				if (i!=j){
					if (strcasecmp(combinaison[i].c_str(), code.get(j).c_str()) == 0){ //vérifier si combinaison[i]!=code.get(j) avec i!=j
						res++;
						exit=true;	//on sort pour ne pas compter deux fois s'il l'élément existe deux fois
					}
				}
				j++;
			}
		}
		j=0;
		exit=false;
	}
	return res;
}

string CombiMastermind :: toString() {
	string res="";
	for (int i=0;i<(int)combinaison.size();i++){
		res+=combinaison[i] + " ";
	}
	return res;
}



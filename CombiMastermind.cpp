#include <vector>
#include "CombiMastermind.hpp"
#include "FonctionsUtiles.hpp"
#include <cstring>  //Package permettant de comparer deux chaines de caractère
#include <iostream>
#include <fstream>
#include <sstream>
#include "FonctionsUtiles.hpp"

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

string CombiMastermind :: resultat(const Combinaison code){
	FonctionsUtiles f;
	return f.intToString(bienPlace(code))+f.intToString(malPlace(code));
}

int CombiMastermind :: bienPlace(const CombiMastermind code){
	FonctionsUtiles f;
	int res=0;
	for(int i=0;i<Menu::NB_CASE;i++){
		if (f.equals(combinaison[i],code.get(i))){ //vérifier si combinaison[i]==code.get(i)
			res++;
		}
	}
	return res;
}

int CombiMastermind :: malPlace(const CombiMastermind code){
	FonctionsUtiles f;
	bool memoireJ[Menu::NB_CASE];
	for (int Indice = 0; Indice < Menu::NB_CASE; Indice++) {
		memoireJ[Indice] = false;
	}
	int res=0;
	int j=0;
	bool exit=false;
	for(int i=0;i<Menu::NB_CASE;i++){
		//on doit vérifier que l'élément n'est pas bien placé, ensuite on vérifiera si la couleur existe sur les cases voisines
		if (!f.equals(combinaison[i],code.get(i))){ //vérifier si combinaison[i]!=code.get(i)
			while((j<Menu::NB_CASE) && (!exit)){
				if (i!=j){
					if (f.equals(combinaison[i],code.get(j))){ //vérifier si combinaison[i]==code.get(j) avec i!=j
						if((!f.equals(combinaison[j],code.get(j)))&&(!memoireJ[j])){
							res++;
							memoireJ[j]=true;
							exit=true;	//on sort pour ne pas compter deux fois s'il l'élément existe deux fois
						}
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



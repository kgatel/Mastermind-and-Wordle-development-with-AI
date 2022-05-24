#include <vector>
#include "../include/CombiWordle.hpp"
#include <cstring>  //Package permettant de comparer deux chaines de caractère
#include <iostream>
#include <fstream>
#include <sstream>
#include "../include/FonctionsUtiles.hpp"

//#include <windows.h>
using namespace std;


CombiWordle :: CombiWordle() : Combinaison(){
}

CombiWordle :: CombiWordle(const string &chaine){
	for (int i=0;i<(int)chaine.size();i++){
		char c=chaine[i];
        string s(1, c);
        combinaison.push_back(s);
	}
}

CombiWordle :: CombiWordle(Combinaison c){
	combinaison=c.get();
}

CombiWordle :: CombiWordle(vector<string> v) : Combinaison(v){
}

string CombiWordle :: resultat(const Combinaison code){
	FonctionsUtiles f;
	string res="";   //initialise le vecteur à 0
	bool memoireJ[Menu::NB_CASE];
	for (int Indice = 0; Indice < Menu::NB_CASE; Indice++) {
		memoireJ[Indice] = false;
	}
	int j=0;
	bool exit=false;
	for(int i=0;i<Menu::NB_CASE;i++){
		if (f.equals(combinaison[i],code.get(i))){ //vérifier si combinaison[i]==code.get(i)
			res+="\033[32m"+f.toCarre(combinaison[i])+" \033[0m";
		}else{
			while((j<Menu::NB_CASE) && (!exit)){
				if (i!=j){
					if (f.equals(combinaison[i],code.get(j))){ //vérifier si combinaison[i]!=code.get(j) avec i!=j
						if((!f.equals(combinaison[j],code.get(j)))&&(!memoireJ[j])){
							res+="\033[33m"+f.toCarre(combinaison[i])+" \033[0m";
							memoireJ[j]=true;
							exit=true;	//on sort pour ne pas compter deux fois s'il l'élément existe deux fois
						}
					}
				}
				j++;
			}
			if (exit==false){
				res+=f.toCarre(combinaison[i]);
				res+=" ";
			}
			exit=false;
			j=0;
		}
	}
	return res;
}

string CombiWordle :: resultat_couleur(const Combinaison combin){
	FonctionsUtiles f;
	string res="";  
	bool memoireJ[Menu::NB_CASE];
	
	for (int Indice = 0; Indice < Menu::NB_CASE; Indice++) {
		memoireJ[Indice] = false;
	}
	int j=0;
	bool exit=false;
	for(int i=0;i<Menu::NB_CASE;i++){
		if (f.equals(combinaison[i],combin.get(i))){
			res+="v";
		}else{
			while((j<Menu::NB_CASE) && (!exit)){
				if (i!=j){
					if (f.equals(combinaison[i],combin.get(j))){ //vérifier si combinaison[i]!=code.get(j) avec i!=j
						if((!f.equals(combinaison[j],combin.get(j)))&&(!memoireJ[j])){
							res+="j";
							memoireJ[j]=true;
							exit=true;	
						}
					}
				}
				j++;
			}
			if (exit==false){
				res+="b";
			}
			exit=false;
			j=0;
		}
	}
	return res;
}



string CombiWordle :: toString() {
	string res="";
	for (int i=0;i<Menu::NB_CASE;i++){
		res+=combinaison[i];
	}
	return res;
}



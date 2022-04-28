#include <vector>
#include "CombiWordle.hpp"
#include <cstring>  //Package permettant de comparer deux chaines de caractère
#include <iostream>
#include <fstream>
#include <sstream>
#include "FonctionsUtiles.hpp"

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

CombiWordle :: CombiWordle(Combinaison *c){
	combinaison=(*c).get();
}


string CombiWordle :: resultat(Combinaison *code){
	FonctionsUtiles f;
	string res="";   //initialise le vecteur à 0
	int j=0;
	bool exit=false;
	for(int i=0;i<(int)combinaison.size();i++){
		if (strcasecmp(combinaison[i].c_str(), (*code).get(i).c_str()) == 0){ //vérifier si combinaison[i]==(*code).get(i)
			res+="\033[32m"+combinaison[i]+"\033[0m";
		}else{
			while((j<(int)combinaison.size()) && (!exit)){
				if (i!=j){
					if (f.equals(combinaison[i],(*code).get(j))){ //vérifier si combinaison[i]!=(*code).get(j) avec i!=j
						res+="\033[33m"+combinaison[i]+"\033[0m";
						exit=true;	//on sort pour ne pas compter deux fois s'il l'élément existe deux fois
					}
				}
				j++;
			}
			if (exit==false){
				res+=combinaison[i];
			}
			exit=false;
			j=0;
		}
	}
	return res;
}

/*void CombiWordle :: afficherResultat(const string & resultat) {
	for(int i=0;i<(int)resultat.size();i++){
	if (resultat[i]=='*') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);cout <<combinaison[i];}
	if (resultat[i]=='_') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);cout <<combinaison[i];}
	if ((resultat[i]!='_')&&(resultat[i]!='*')){ SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);cout <<combinaison[i];}	
		}
cout << endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}*/

string CombiWordle :: toString() {
	string res="";
	for (int i=0;i<(int)combinaison.size();i++){
		res+=combinaison[i];
	}
	return res;
}



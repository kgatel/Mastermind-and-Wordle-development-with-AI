#include <vector>
#include "CombiWordle.hpp"
#include <cstring>  //Package permettant de comparer deux chaines de caractère
#include <iostream>
#include <fstream>
#include <sstream>
//#include <windows.h>
using namespace std;


CombiWordle :: CombiWordle() {
	combinaison=vector<string>();
}

CombiWordle :: CombiWordle(const string &chaine){
	for (int i=0;i<(int)chaine.size();i++){
		char c=chaine[i];
        string s(1, c);
        combinaison.push_back(s);
	}
}


string CombiWordle :: resultat(const CombiWordle code){
	string res="";   //initialise le vecteur à 0
	int j=0;
	bool exit=false;
	for(int i=0;i<(int)combinaison.size();i++){
		if (strcasecmp(combinaison[i].c_str(), code.get(i).c_str()) == 0){ //vérifier si combinaison[i]==code.get(i)
			res+=combinaison[i];
		}else{
			while((j<(int)combinaison.size()) && (!exit)){
				if (i!=j){
					if (strcasecmp(combinaison[i].c_str(), code.get(j).c_str()) == 0){ //vérifier si combinaison[i]!=code.get(j) avec i!=j
						res+="*";
						exit=true;	//on sort pour ne pas compter deux fois s'il l'élément existe deux fois
					}
				}
				j++;
			}
			if (exit==false){
				res+="_";
			}
			exit=false;
			j=0;
		}
	}
	return res;
}

/*void CombiWordle :: afficherResultat(string resultat) {
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



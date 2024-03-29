#include <vector>
#include "../include/Combinaison.hpp"
#include "../include/FonctionsUtiles.hpp"
#include <cstring>  //Package permettant de comparer deux chaines de caractère
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


Combinaison :: Combinaison() {
}

void  Combinaison ::setCombinaison (vector<string> c){
	combinaison = c;
}

Combinaison :: Combinaison(vector<string> v) {
	combinaison=v;
}

vector<string> Combinaison :: get() const{
	return combinaison;
}

string Combinaison :: get(const int i) const{
	return combinaison[i];
}

string Combinaison :: resultat(const Combinaison code){
	return "yo\n";
}

string Combinaison :: toString() {
	string res="";
	for (int i=0;i<(int)combinaison.size();i++){
		res+=combinaison[i] + " ";
	}
	return res;
}


#include <vector>
#include "CombiMastermind.hpp"
#include <cstring>  //Package permettant de comparer deux chaines de caractère
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


CombiMastermind :: CombiMastermind() {
	combinaison=vector<string>();
}

CombiMastermind :: CombiMastermind(string &chaine){
	combinaison=split(chaine,' ');
}

int CombiMastermind :: bienPlace(const Combinaison code){
	return 0;
}
		
int CombiMastermind :: malPlace(const Combinaison code){
	return 0;
}

string CombiMastermind :: toString() {
	string res="";
	for (int i=0;i<(int)combinaison.size();i++){
		res+=combinaison[i] + " ";
	}
	return "";
}



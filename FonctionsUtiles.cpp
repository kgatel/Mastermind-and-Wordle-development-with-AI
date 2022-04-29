#include <vector>
#include "FonctionsUtiles.hpp"
#include <cstring>  //Package permettant de comparer deux chaines de caractère
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


FonctionsUtiles :: FonctionsUtiles() {
}

vector<string> FonctionsUtiles :: split(const string &chaine, char delimiteur) {
	vector<string> elements;
	stringstream ss(chaine);
	string sousChaine;
	while (getline(ss, sousChaine, delimiteur)){
		elements.push_back(sousChaine);
	}
	return elements;
}

bool FonctionsUtiles :: checkMotFichier(string fichier, string mot){
	//int offset; 
    string ligne;
    ifstream monFichier;
    monFichier.open(fichier);

    if (monFichier.is_open())
    {
        while (!monFichier.eof())
        {
            getline(monFichier,ligne);
            //if ((offset = ligne.find(mot, 0)) != (int)string::npos) 
            if (equals(ligne,mot))
            {
                monFichier.close();
                return true;
            }
           
        }
        monFichier.close();
    }
    else
        cout << "Erreur fichier" << endl;

    return false;
}

bool FonctionsUtiles :: isNumber(const string& str){
	for (char const &c : str) {
		if (std::isdigit(c) == 0) return false;
	}
	return true;
}

bool FonctionsUtiles :: equals(const string& s1,const string& s2){
	return ((strcasecmp(s1.c_str(), s2.c_str())) == 0);
}

string FonctionsUtiles :: intToString(int a){
	stringstream ss;
	ss << a;
	return ss.str();
}

string FonctionsUtiles :: charToString(char c){
	string s(1, c);
	return s;
}

void FonctionsUtiles :: clear()
{
    cout << "\x1B[2J\x1B[H";
}

string FonctionsUtiles :: vert(string s){
	return "\033[32m"+s+"\033[0m";
}

string FonctionsUtiles :: rouge(string s){
	return "\033[31m"+s+"\033[0m";
}

string FonctionsUtiles :: jaune(string s){
	return "\033[33m"+s+"\033[0m";
}

string FonctionsUtiles :: bleu(string s){
	return "\033[34m"+s+"\033[0m";
}

string FonctionsUtiles :: violet(string s){		
	return "\033[35m"+s+"\033[0m";
}

string FonctionsUtiles :: vertclair(string s){		
	return "\033[1;92;49m"+s+"\033[0m";
}

string FonctionsUtiles :: violetclair(string s){
	return "\033[1;95;49m"+s+"\033[0m";
}

string FonctionsUtiles :: cyan(string s){
	return "\033[36m"+s+"\033[0m";
}

string FonctionsUtiles :: blanc(string s){
	return "\033[0m"+s+"\033[0m";}
	
string FonctionsUtiles :: carrevert(){
	return "\033[32m\u2588\u2588\u001b[0m";
}

string FonctionsUtiles :: carrerouge(){
	return "\033[31m\u2588\u2588\u001b[0m";
}

string FonctionsUtiles :: carrejaune(){
	return "\033[33m\u2588\u2588\u001b[0m";
}

string FonctionsUtiles :: carrebleu(){
	return "\033[34m\u2588\u2588\u001b[0m";
}

string FonctionsUtiles :: carreviolet(){
	return "\u001b[35m\u2588\u2588\u001b[0m";
}

string FonctionsUtiles :: carrerose(){
	return "\033[48:5:200m  \033[m";}

string FonctionsUtiles :: carreorange(){
	return "\033[48:5:208m  \033[m";}

string FonctionsUtiles :: carremarron(){
	return "\033[48:5:094m  \033[m";}
	
string FonctionsUtiles :: carreblanc(){
	return "\u001b[0m\u2588\u2588";}
	
string FonctionsUtiles :: carrevide(){
	return "▢";
}

string FonctionsUtiles :: toCarre(string s) {
	if (s=="a"){return "🅰";}
	if (s=="b"){return "🅱";}
	if (s=="c"){return "🅲";}
	if (s=="d"){return "🅳";}
	if (s=="e"){return "🅴";}
	if (s=="f"){return "🅵";}
	if (s=="g"){return "🅶";}
	if (s=="h"){return "🅷";}
	if (s=="i"){return "🅸";}
	if (s=="j"){return "🅹";}
	if (s=="k"){return "🅺";}
	if (s=="l"){return "🅻";}
	if (s=="m"){return "🅼";}
	if (s=="n"){return "🅽";}
	if (s=="o"){return "🅾";}
	if (s=="p"){return "🅿";}
	if (s=="q"){return "🆀";}
	if (s=="r"){return "🆁";}
	if (s=="s"){return "🆂";}
	if (s=="t"){return "🆃";}
	if (s=="u"){return "🆄";}
	if (s=="v"){return "🆅";}
	if (s=="w"){return "🆆";}
	if (s=="x"){return "🆇";}
	if (s=="y"){return "🆈";}
	if (s=="z"){return "🆉";}
	else {return "";}
}

string FonctionsUtiles :: blink(string s){
	return "\033[5;39;49m"+s+"\033[25m";
}

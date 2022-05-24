#include "../include/FonctionsUtiles.hpp"
#include "../include/CombiWordle.hpp"
#include "../include/Humain_Decodeur.hpp"
#include "../include/Humain_Decodeur_Wordle.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Humain_Decodeur_Wordle :: Humain_Decodeur_Wordle() {
}

void Humain_Decodeur_Wordle :: jouer(){
	setCombinaison(CombiWordle(entrerCombinaison()));
}

string Humain_Decodeur_Wordle :: choixFichier(string mot) {
	string repertoire="ressources";
	if (Menu::Langue==1) {repertoire=repertoire.append("//").append("Francais");}
	if (Menu::Langue==2) {repertoire=repertoire.append("//").append("Anglais");}
	if (mot.size()==6) {repertoire=repertoire.append("//").append("6lettres");}
	if (mot.size()==5) {repertoire=repertoire.append("//").append("5lettres");}
	if (mot.size()==4) {repertoire=repertoire.append("//").append("4lettres");}
return repertoire+"//"+mot[0]+".txt";
}	

bool Humain_Decodeur_Wordle :: verifierEntree(string entree) {
	FonctionsUtiles f;
	string chemin;
	chemin=choixFichier(entree);
	return f.checkMotFichier(chemin,entree);
}

Combinaison Humain_Decodeur_Wordle :: entrerCombinaison() {
	FonctionsUtiles f;
	string mot;
	bool t=false;
	while(!t) {
		cout << "Décodeur entrez votre mot ici (" << Menu::NB_CASE << " lettres minuscules): ";
		cin >> mot;
		if ((int)mot.size()==Menu::NB_CASE) {
		if (verifierEntree(mot)) {t=true;}
		else {
			cout << "Le mot "+f.rouge(mot)+" n'existe pas dans le dictionnaire, veuillez essayer à nouveau \n\n";
			}
		}
		if ((int)mot.size()!=Menu::NB_CASE){cout << "Le mot "+f.rouge(mot)+" ne fait pas " <<Menu::NB_CASE<<" caracteres \n\n";
											}}
	return CombiWordle(mot);
}

#include "FonctionsUtiles.hpp"
#include "CombiWordle.hpp"
#include "IA_Decodeur.hpp"
#include "IA_Decodeur_Wordle.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

IA_Decodeur_Wordle :: IA_Decodeur_Wordle() {
}

string IA_Decodeur_Wordle :: choixFichier(string mot) {
	string repertoire="ressources";
	if (Menu::Langue==1) {repertoire=repertoire.append("//").append("Francais");}
	if (Menu::Langue==2) {repertoire=repertoire.append("//").append("Anglais");}
	if (mot.size()==6) {repertoire=repertoire.append("//").append("6lettres");}
	if (mot.size()==5) {repertoire=repertoire.append("//").append("5lettres");}
	if (mot.size()==4) {repertoire=repertoire.append("//").append("4lettres");}
return repertoire+"//"+mot[0]+".txt";
}	

bool IA_Decodeur_Wordle :: VerifierEntree(string entree) {
	FonctionsUtiles f;
	string chemin;
	chemin=choixFichier(entree);
	return f.checkMotFichier(chemin,entree);
}

Combinaison IA_Decodeur_Wordle :: entrerCombinaison() {
	string mot;
	bool t=false;
	while(!t) {
		cout << "Décodeur entrez votre mot ici : ";
		cin >> mot;
		if ((int)mot.size()==Menu::NB_CASE) {
		if (VerifierEntree(mot)) {t=true;}
		else cout << "Le mot n'existe pas dans le dictionnaire, veuillez essayer à nouveau \n";
		}
		if ((int)mot.size()!=Menu::NB_CASE){cout << "Le mot ne fait pas " <<Menu::NB_CASE<<" caracteres \n";}}
	return CombiWordle(mot);
}

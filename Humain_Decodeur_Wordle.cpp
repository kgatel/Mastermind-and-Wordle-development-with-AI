#include <string>
#include "CombiWordle.hpp"
#include "Humain_Decodeur.hpp"
#include "Humain_Decodeur_Wordle.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Humain_Decodeur_Wordle :: Humain_Decodeur_Wordle() {
}

string Humain_Decodeur_Wordle :: choixFichier(string mot) {
	string repertoire="ressources";
	if (mot.size()==6) {repertoire=repertoire.append("//").append("6lettres");}
	if (mot.size()==5) {repertoire=repertoire.append("//").append("5lettres");}
	if (mot.size()==4) {repertoire=repertoire.append("//").append("4lettres");}
return repertoire+"//"+mot[0]+".txt";
}	

bool Humain_Decodeur_Wordle :: checkMotFichier(string fichier, string mot)
{
    int offset; 
    string ligne;
    ifstream monFichier;
    monFichier.open(fichier);

    if (monFichier.is_open())
    {
        while (!monFichier.eof())
        {
            getline(monFichier,ligne);
            if ((offset = ligne.find(mot, 0)) != string::npos) 
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

bool Humain_Decodeur_Wordle :: VerifierEntree(string entree) {
	string chemin;
	chemin=choixFichier(entree);
	return checkMotFichier(chemin,entree);
}

CombiWordle Humain_Decodeur_Wordle :: entrerCombinaison() {
	string mot;
	bool t=false;
	while(t==false) {
		cout << "Decodeur rentrez votre combinaison: ";
		cin >> mot;
		if ((int)mot.size()==Menu::NB_CASE) {
		if (VerifierEntree(mot)) {t=true;}
		else cout << "Le mot rentree existe pas dans le dictionnaire essayer a nouveau \n";
		}
		if ((int)mot.size()!=Menu::NB_CASE){cout << "Le mot rentree ne fait pas " <<Menu::NB_CASE<<" caracteres \n";}}
	return CombiWordle(mot);
}

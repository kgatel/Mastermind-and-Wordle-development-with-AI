#include <string>
#include "Combinaison.hpp"
#include "CombiWordle.hpp"
#include "Humain_Codeur.hpp"
#include "Humain_Codeur_Wordle.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Humain_Codeur_Wordle :: Humain_Codeur_Wordle() {
}

string Humain_Codeur_Wordle :: choixFichier(string mot) {
	string repertoire="ressources";
	if (mot.size()==5) {repertoire=repertoire.append("\\").append("5lettres");}
	if (mot.size()==4) {repertoire=repertoire.append("\\").append("4lettres");}
return repertoire+"\\"+mot[0]+".txt";
}	

bool Humain_Codeur_Wordle :: checkMotFichier(string fichier, string mot)
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

bool Humain_Codeur_Wordle :: VerifierEntree(string entree) {
	string chemin;
	chemin=choixFichier(entree);
	return checkMotFichier(chemin,entree);
}

Combinaison Humain_Codeur_Wordle :: entrerCode() {
	string mot;
	bool t=false;
	while(t==false) {
		cout << "Rentrez votre mot:\t";
		cin >> mot;
		if (VerifierEntree(mot)) {t=true;}
		else cout << "Le mot rentree existe pas dans le dictionnaire essayer a nouveau \n";
		}
	return CombiWordle(mot);
}

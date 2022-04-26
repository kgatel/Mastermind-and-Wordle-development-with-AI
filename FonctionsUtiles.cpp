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

bool FonctionsUtiles :: checkMotFichier(string fichier, string mot) {
	int offset; 
    string ligne;
    ifstream monFichier;
    monFichier.open(fichier);

    if (monFichier.is_open())
    {
        while (!monFichier.eof())
        {
            getline(monFichier,ligne);
            if ((offset = ligne.find(mot, 0)) != (int)string::npos) 
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

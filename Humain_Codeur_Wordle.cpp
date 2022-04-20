#include <string>
#include "Combinaison.hpp"
#include "Menu.hpp"
#include "CombiWordle.hpp"
#include "Humain_Codeur.hpp"
#include "Humain_Codeur_Wordle.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <ncurses.h>

using namespace std;
int Menu::NB_CASE;

Humain_Codeur_Wordle :: Humain_Codeur_Wordle() {
}

string Humain_Codeur_Wordle :: choixFichier(string mot) {
	string repertoire="ressources";
	if (mot.size()==6) {repertoire=repertoire.append("//").append("6lettres");}
	if (mot.size()==5) {repertoire=repertoire.append("//").append("5lettres");}
	if (mot.size()==4) {repertoire=repertoire.append("//").append("4lettres");}
return repertoire+"//"+mot[0]+".txt";
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

CombiWordle Humain_Codeur_Wordle :: entrerCode() {
    string mot;
    bool t=false;
    while(t==false) {
        cout << "Codeur rentrez votre code:   ";
        mot=cachermot();
        if ((int)mot.size()==Menu::NB_CASE) {
        if (VerifierEntree(mot)) {t=true;}
        else cout << "Le mot rentree existe pas dans le dictionnaire essayer a nouveau \n";
        }
        if ((int)mot.size()!=Menu::NB_CASE){cout << "Le mot rentree ne fait pas " <<Menu::NB_CASE<<" caracteres \n";}}

    return CombiWordle(mot);
}

string Humain_Codeur_Wordle :: cachermot(){
	string mot="";
	int a;
    bool entr=false;
    initscr();
    noecho();
    cbreak();
    while (entr==false) {
    a=getch();
    if((a>=97&&a<=122)||(a>=65&&a<=90)) {
		mot+=a;
		printw("*");
    }
    if(a==127&&!mot.empty()) { //si le joueur veut effacer un caractere
    printw("\b \b"); // on efface le caractére "" derriére le curseur
    mot.pop_back(); //on supprime le caractére rentré par le joueur

    }
    if (a==10) {  //si le joueur appuie sur entrée

		entr=true;
    }
    }
    endwin();
    return mot;
}

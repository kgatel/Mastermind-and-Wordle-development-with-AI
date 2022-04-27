#include <string>
#include "FonctionsUtiles.hpp"
#include "Combinaison.hpp"
#include "Menu.hpp"
#include "CombiWordle.hpp"
#include "Humain_Codeur.hpp"
#include "Humain_Codeur_Wordle.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <ncurses.h>
#include <unistd.h>

using namespace std;


Humain_Codeur_Wordle :: Humain_Codeur_Wordle() : Humain_Codeur(){
}

string Humain_Codeur_Wordle :: choixFichier(string mot) {
	string repertoire="ressources";
	if (Menu::Langue==1) {repertoire=repertoire.append("//").append("Francais");}
	if (Menu::Langue==2) {repertoire=repertoire.append("//").append("Anglais");}
	if (mot.size()==6) {repertoire=repertoire.append("//").append("6lettres");}
	if (mot.size()==5) {repertoire=repertoire.append("//").append("5lettres");}
	if (mot.size()==4) {repertoire=repertoire.append("//").append("4lettres");}
return repertoire+"//"+mot[0]+".txt";
}	

bool Humain_Codeur_Wordle :: VerifierEntree(string entree) {
	FonctionsUtiles f;
	string chemin;
	chemin=choixFichier(entree);
	return f.checkMotFichier(chemin,entree);
}

Combinaison Humain_Codeur_Wordle :: entrerCode() {
    string mot;
    bool t=false;
    bool longueurMotBonne=true;
    bool motExiste=true;
    while(!t) {
        mot=cachermot(longueurMotBonne,motExiste);
        if ((int)mot.size()==Menu::NB_CASE) {
			if (VerifierEntree(mot)){
				t=true;
				motExiste=true;
			}
			else {
				motExiste=false;			//cout << "Le mot rentree existe pas dans le dictionnaire essayer a nouveau \n";
			}
        }
        if ((int)mot.size()!=Menu::NB_CASE){
			longueurMotBonne=false;			//cout << "Le mot rentree ne fait pas " <<Menu::NB_CASE<<" caracteres \n";
		}else{
			longueurMotBonne=true;
		}
    }
	cout << "Code bien enregistré, décodeur à vous de jouer !\n" << endl;
    return CombiWordle(mot);
}

string Humain_Codeur_Wordle :: cachermot(bool longueurMotBonne,bool motExiste){
	string mot="";
	int a;
    bool entr=false;
    initscr();
    if (!longueurMotBonne){
		printw("\nVeuillez entrer un mot de longueur égale à %d\n\n",Menu::NB_CASE);			//changer la longueur car 5 est arbitraire ici
	}else{
		if (!motExiste){
			printw("\nVeuillez entrer un mot appartenant au dictionnaire anglais\n\n");
		}
	}
    printw("Codeur rentrez votre code (en minuscule) : ");
    noecho();
    cbreak();
    while (!entr) {
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

#include <string>
#include <iostream>
#include <vector>
#include "Menu.hpp"

using namespace std;

Menu :: Menu() {}

Menu :: Menu(int nbcase,int nbtour,int langue){
	NB_CASE=nbcase;
	NB_TOUR=nbtour;
	Langue=langue;}
	
	
void Menu::choisirModeDeJeu(int mdj){
	ModeDeJeu=mdj;
	cout<<"Mode de jeu mis à jour";
	}	
	
void Menu::parametreDeJeu(int nbelement, vector<string> enselement,int nbcase,int nbtour){
	NB_ELEMENT=nbelement;
	ENSEMBLE_ELEMENT=enselement;
	NB_CASE=nbcase;
	NB_TOUR=nbtour;
	}
	
void Menu :: afficherMenu(){
	bool finchoix=false;
	int choix=-1 ;
	int tmp=0;
	while(!finchoix){
		
		cout<<"que voulez vous définir ?";
		cout<<"1 - Mode de jeu ";
		cout<<"2 - Nombre de tours ";
		cout<<"3 - Nombre de case  ";
		
		cout<<"0 - lancer la partie ";
		cin >>choix;
			switch (choix) {
		case 0:
		finchoix = true;
		break;
		case 1:
		cout<<"choisissez votre mode de jeu :";
		cout<<"1 pour Mastermind ";
		cout<<"2 pour Wordle ";
		cin>>tmp;
		choisirModeDeJeu(tmp);
		
		break;
		case 2:
		cout<<"choisissez le nombre de tours:";
		cin>>tmp;
		parametreDeJeu(NB_ELEMENT,ENSEMBLE_ELEMENT,NB_CASE,tmp);
		cout<<"nombre de tours modifié";
		break;
		case 3:
		cout<<"choisissez le nombre de cases:";
		cin>>tmp;
		parametreDeJeu(NB_ELEMENT,ENSEMBLE_ELEMENT,tmp,NB_TOUR);
		cout<<"nombre de cases modifié";
		break;
		default:
		break;
		
		}
		cout<<"itéboucle";
		
		}
}
	
	


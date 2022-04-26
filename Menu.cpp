#include <string>
#include <iostream>
#include <vector>
#include "Menu.hpp"

using namespace std;
	int Menu::ModeDeJeu = 1;
	int Menu::Langue=1;
	int Menu::NB_TOUR=10;
	int Menu::NB_CASE=4;
	int Menu::NB_ELEMENT=0;
	vector<string> Menu::ENSEMBLE_ELEMENT={};
	
Menu :: Menu() {
	}

Menu :: Menu(int nbcase,int nbtour,int langue){
	NB_CASE=nbcase;
	NB_TOUR=nbtour;
	Langue=langue;}
	
	
void Menu::choisirModeDeJeu(int mdj){
	ModeDeJeu=mdj;
	cout<<"Mode de jeu mis à jour\n";
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
		
		cout<<"\nque voulez vous définir ?\n";
		cout<<"1 - Mode de jeu \n";
		cout<<"2 - Nombre de tours \n";
		cout<<"3 - Nombre de case  \n";
		
		cout<<"0 - lancer la partie \n";
		cin >>choix;
			switch (choix) {
		case 0:
		finchoix = true;
		break;
		case 1:
		cout<<"choisissez votre mode de jeu :\n";
		cout<<"1 pour Mastermind \n";
		cout<<"2 pour Wordle \n";
		cin>>tmp;
		choisirModeDeJeu(tmp);
		
		break;
		case 2:
		cout<<"choisissez le nombre de tours:\n";
		cin>>tmp;
		NB_TOUR=tmp;
		cout<<"nombre de tours modifié\n";
		break;
		case 3:
		cout<<"choisissez le nombre de cases:\n";
		cin>>tmp;
		NB_CASE=tmp;
		cout<<"nombre de cases modifié\n";
		break;
		default:
		break;
		
		}

		
		}
}
	
	


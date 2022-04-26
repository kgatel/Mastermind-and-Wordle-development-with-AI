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
	string Menu::ENSEMBLE_ELEMENT="ressources";
	
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
	
void Menu::parametreDeJeu(int nbelement, string enselement,int nbcase,int nbtour){
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
		if (ModeDeJeu==1){
			ENSEMBLE_ELEMENT=ENSEMBLE_ELEMENT.append("//").append("Couleurs");
			}
		else{if (Langue==1){
					ENSEMBLE_ELEMENT=ENSEMBLE_ELEMENT.append("//").append("Francais");
					}
			else {ENSEMBLE_ELEMENT=ENSEMBLE_ELEMENT.append("//").append("Anglais");}
			}
		cout<<ENSEMBLE_ELEMENT;
		finchoix = true;
		break;
		
		
		case 1:
		cout<<"choisissez votre mode de jeu :\n";
		cout<<"1 pour Mastermind \n";
		cout<<"2 pour Wordle \n";
		cin>>tmp;
		choisirModeDeJeu(tmp);
		if (tmp==2){
			cout<<"choisissez la langue\n1 - Français\n2 - Anglais";
			cin>>tmp;
			Langue=tmp;
			}
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
	
	


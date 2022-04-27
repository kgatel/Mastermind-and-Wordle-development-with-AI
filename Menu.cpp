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
	afficherMenu();
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
	int tmp=0,tmp2=0;
	while(!finchoix){
		
		cout<<"\nque voulez vous définir ?\n";
		cout<<"1 - Mode de jeu \n";
		cout<<"2 - Nombre de tours \n";
		
		
		cout<<"0 - Lancer la partie \n";
		cin >>choix;
			switch (choix) {
		
		case 0:
		if (ModeDeJeu==1){
			ENSEMBLE_ELEMENT=ENSEMBLE_ELEMENT.append("//").append("Couleurs").append("//").append("liste");
			}
		else{if (Langue==1){
					ENSEMBLE_ELEMENT=ENSEMBLE_ELEMENT.append("//").append("Francais");
					}
			else {ENSEMBLE_ELEMENT=ENSEMBLE_ELEMENT.append("//").append("Anglais");}
			if (NB_CASE==7) {ENSEMBLE_ELEMENT=ENSEMBLE_ELEMENT.append("//").append("7lettres");}
			if (NB_CASE==6) {ENSEMBLE_ELEMENT=ENSEMBLE_ELEMENT.append("//").append("6lettres");}
			if (NB_CASE==5) {ENSEMBLE_ELEMENT=ENSEMBLE_ELEMENT.append("//").append("5lettres");}
			if (NB_CASE==4) {ENSEMBLE_ELEMENT=ENSEMBLE_ELEMENT.append("//").append("4lettres");}
			}
		
		cout<<ENSEMBLE_ELEMENT<<"\n";
		finchoix = true;
		break;
		
		
		case 1:
		do{
			cout<<"\nchoisissez votre mode de jeu :\n";
			cout<<"1 pour Mastermind \n";
			cout<<"2 pour Wordle \n";
			cin>>tmp;
		}while((tmp!=1)&&(tmp!=2));
		choisirModeDeJeu(tmp);
			if (tmp==1){do {
				cout<<"\nchoisissez la taille de la combinaison de couleur entrée :\nIl doit être compris entre 3 et 10\n";
				cin>>tmp2;
				}while (tmp2<3||tmp2>10);
				NB_CASE=tmp2;
				cout<<"taille de la combinaison modifiée\n";
			}
			if (tmp==2){
				do{
					cout<<"\nchoisissez la langue\n1 - Français\n2 - Anglais\n";
					cin>>tmp;
				}while((tmp!=1)&&(tmp!=2));
				Langue=tmp;
				cout<<"langue modifiée\n";
				do{
				cout<<"\nchoisissez le nombre de lettres des mots:\nIl doit être compris entre 4 et 7\n";
				cin>>tmp2;
				}while (tmp2<4||tmp2>7);
				NB_CASE=tmp2;
				cout<<"nombre de lettre modifié\n";
			}
			
		break;
		case 2:
		do{
			cout<<"\nchoisissez le nombre de tours:\nIl doit être compris entre 5 et 20\n";
			cin>>tmp;
		}while (tmp<5||tmp>20);
		NB_TOUR=tmp;
		cout<<"nombre de tours modifié\n";
		break;
		/*case 3:
		cout<<"choisissez le nombre de cases:\n";
		cin>>tmp;
		NB_CASE=tmp;
		cout<<"nombre de cases modifié\n";
		break;*/
		default:
		break;
		
		}

		
		}
}
	
	


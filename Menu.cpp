#include <string>
#include <iostream>
#include <vector>
#include "Menu.hpp"
#include "FonctionsUtiles.hpp"

using namespace std;
	string Menu:: JEU = "Mastermind";
	int Menu::ModeDeJeu = 1;
	int Menu::Langue=2;
	int Menu::NB_TOUR=12;
	int Menu::NB_CASE=4;
	int Menu::NB_ELEMENT=0;
	string Menu::ENSEMBLE_ELEMENT="ressources";
	
Menu :: Menu() {
	}

Menu :: Menu(int nbcase,int nbtour,int langue){
	NB_CASE=nbcase;
	NB_TOUR=nbtour;
	Langue=langue;}
	
void Menu::choisirJeu(const string &j)
{
	JEU=j;
	FonctionsUtiles f;
	cout << f.jaune("Jeu mis à jour\n");
}
	

void Menu::choisirModeDeJeu(int mdj){
	ModeDeJeu=mdj;
	FonctionsUtiles f;
	cout<<f.jaune("Mode de jeu mis à jour\n");
	}	
	
void Menu::parametreDeJeu(int nbelement, string enselement,int nbcase,int nbtour){
	NB_ELEMENT=nbelement;
	ENSEMBLE_ELEMENT=enselement;
	NB_CASE=nbcase;
	NB_TOUR=nbtour;
	}
	
void Menu :: afficherMenu(){
	FonctionsUtiles f;
	f.clear();
	cout << f.violetclair("Bienvenue dans le menu des jeux de déduction !") << endl;
	bool finchoix=false;
	int choix=-1 ;
	string tmpChoix="";
	int tmp=0,tmp2=0;
	while(!finchoix){
		do{
			cout<<f.bleu("\nQue voulez vous faire ?\n");
			cout<<"1 - Définir le jeu \n";
			cout<<"2 - Définir le mode de jeu \n";
			cout<<"3 - Définir le nombre de tours max \n";
			string text="";
			text+=JEU+" ";
			if (JEU=="Mastermind"){
				text+="- ";
			}else{
				if (Langue==1){
					text+="fr - ";
				}
				if (Langue==2){
					text+="engl - ";
				}
			}
			if (ModeDeJeu==1){
				text+="Humain vs Humain - ";
			}
			if (ModeDeJeu==2){
				text+="Humain vs IA codeur - ";
			}
			if (ModeDeJeu==3){
				text+="Humain vs IA décodeur - ";
			}
			if (ModeDeJeu==4){
				text+="IA vs IA - ";
			}
			text+="TourMax="+f.intToString(NB_TOUR);
			
			cout<<"0 - Lancer la partie (\033[4;39;49m"+text+"\033[0m)\n";
			cin >>tmpChoix;
		}while(!f.isNumber(tmpChoix));
		choix=stoi(tmpChoix);
		
		switch (choix) {
		
			case 0:
			if (f.equals(JEU,"Mastermind")){
				ENSEMBLE_ELEMENT=ENSEMBLE_ELEMENT.append("/").append("Couleurs").append("/").append("liste").append(".txt");
				}
			else{if (Langue==1){
						ENSEMBLE_ELEMENT=ENSEMBLE_ELEMENT.append("/").append("Francais");
						}
				else {ENSEMBLE_ELEMENT=ENSEMBLE_ELEMENT.append("/").append("Anglais");}
				if (NB_CASE==7) {ENSEMBLE_ELEMENT=ENSEMBLE_ELEMENT.append("/").append("7lettres");}
				if (NB_CASE==6) {ENSEMBLE_ELEMENT=ENSEMBLE_ELEMENT.append("/").append("6lettres");}
				if (NB_CASE==5) {ENSEMBLE_ELEMENT=ENSEMBLE_ELEMENT.append("/").append("5lettres");}
				if (NB_CASE==4) {ENSEMBLE_ELEMENT=ENSEMBLE_ELEMENT.append("/").append("4lettres");}
			}
			finchoix = true;
			break;
			
			case 1:
			do{
				do{
					cout<<f.bleu("\nChoisissez votre jeu :\n");
					cout<<"1- Mastermind \n";
					cout<<"2- Wordle \n";
					cin>>tmpChoix;
				}while(!f.isNumber(tmpChoix));
				tmp=stoi(tmpChoix);
			}while((tmp!=1)&&(tmp!=2));
	
			if (tmp==1){
				choisirJeu("Mastermind");
					do{
						do{
							cout<<f.bleu("\nChoisissez la taille de la combinaison de couleur entrée :\n")+"Il doit être compris entre 3 et 10\n";
							cin>>tmpChoix;
						}while(!f.isNumber(tmpChoix));
						tmp2=stoi(tmpChoix);
					}while (tmp2<3||tmp2>10);
					NB_CASE=tmp2;
					cout<<f.jaune("Taille de la combinaison modifiée\n");
				}
			if (tmp==2){
				choisirJeu("Wordle");
					do{
						do{
							cout<<f.bleu("\nChoisissez la langue\n")+"1 - Français\n2 - Anglais\n";
							cin>>tmpChoix;
						}while(!f.isNumber(tmpChoix));
						tmp=stoi(tmpChoix);
					}while((tmp!=1)&&(tmp!=2));
					Langue=tmp;
					cout<<f.jaune("Langue modifiée\n");
					do{
						do{
							cout<<f.bleu("\nChoisissez le nombre de lettres des mots:\n")+"Il doit être compris entre 4 et 7\n";
							cin>>tmpChoix;
						}while(!f.isNumber(tmpChoix));
						tmp2=stoi(tmpChoix);
					}while (tmp2<4||tmp2>7);
					NB_CASE=tmp2;
					cout<<f.jaune("Nombre de lettre modifié\n");
				}
			break;
			
			case 2:
			do{
				do{
					cout<<f.bleu("\nChoisissez votre mode de jeu :\n");
					cout<<"1- Humain vs Humain \n";
					cout<<"2- Humain decodeur vs IA codeur \n";
					cout<<"3- Humain codeur vs IA décodeur \n";
					cout<<"4- IA vs IA\n";
					cin>>tmpChoix;
				}while(!f.isNumber(tmpChoix));
				tmp=stoi(tmpChoix);
			}while((tmp!=1)&&(tmp!=2)&&(tmp!=3)&&(tmp!=4));	
			choisirModeDeJeu(tmp);	
			break;
			
			case 3:
			do{
				do{
					cout<<f.bleu("\nChoisissez le nombre de tours:\n")+"Il doit être compris entre 5 et 20\n";
					cin>>tmpChoix;
				}while(!f.isNumber(tmpChoix));
				tmp=stoi(tmpChoix);
			}while (tmp<5||tmp>20);
			NB_TOUR=tmp;
			cout<<f.jaune("Nombre de tours modifié\n");
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
	
	


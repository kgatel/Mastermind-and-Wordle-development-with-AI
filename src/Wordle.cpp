#include <string>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "../include/Wordle.hpp"
#include "../include/JeuDeDeduction.hpp"
#include "../include/Joueur.hpp"
#include "../include/Combinaison.hpp"
#include "../include/Menu.hpp"
#include "../include/FonctionsUtiles.hpp"
#include "../include/CombiWordle.hpp"

using namespace std;

extern int NB_CASE;
extern int Langue;
extern int NB_TOUR;

Wordle :: Wordle() : JeuDeDeduction(){

}

Wordle :: Wordle(Joueur *codeur1, Joueur *decodeur1) : JeuDeDeduction(codeur1,decodeur1){
	
}


void Wordle :: partie(){
	FonctionsUtiles f;
	f.clear();
	cout << f.vertclair("Bienvenue dans le Wordle !\n") << endl;
	(*codeur).jouer();
	do{
		cout << f.jaune("\nTour n°"+f.intToString(numeroTour+1))<<endl;
		(*decodeur).jouer();
		historiqueCombinaison.push_back((*decodeur).getCombinaison());
		historiqueResultat.push_back(CombiWordle((*decodeur).getCombinaison()).resultat((*codeur).getCombinaison()));
		(*decodeur).set_historiqueRes(CombiWordle((*decodeur).getCombinaison()).resultat_couleur((*codeur).getCombinaison()));
		afficherHistorique();
		incrTour();
	}while(detectionVictoire()==NULL);
	cout << endl;
	if (detectionVictoire()==codeur){
		system("aplay -q ressources/Song/defaite.wav &");
		cout << "Le code était : " + CombiWordle((*codeur).getCombinaison()).toString() << endl;
		cout << (*codeur).toString();
		cout << " a remporté la partie." << endl;
	}else{
		system("aplay -q ressources/Song/victoire.wav &");
		cout << (*decodeur).toString();
		cout << " a remporté la partie." << endl;
	}
}

void Wordle :: afficherHistorique(){
	FonctionsUtiles f;
	string resultat = CombiWordle((*decodeur).getCombinaison()).resultat((*codeur).getCombinaison());
	int i,j;
	int taille;
	taille=(int)historiqueCombinaison.size();
	string espace="";
	string underscore="";
	for (int jj=1;jj<Menu::NB_CASE;jj++){
		underscore+="__";
	}
	cout <<"______________________"+underscore<< endl;
	for (i=0;i<Menu::NB_TOUR-taille ; i++) {
		if (Menu::NB_TOUR-i<10) {
			espace=" ";
		}else{
			espace="";
		}
		string chaine="";
		for (int cpt=0;cpt<Menu::NB_CASE;cpt++){
			chaine+=f.carrevide()+" ";
		}
		if ((i==Menu::NB_TOUR-taille-1)&&(detectionVictoire()!=decodeur)){
			cout<<f.cyan("Tentative : ")<<espace<<Menu::NB_TOUR-i<<"   "+f.blink(chaine)+"   |"<<endl;
		}else{
			cout<<f.cyan("Tentative : ")<<espace<<Menu::NB_TOUR-i<<"   "+chaine+"   |"<<endl;
		}
	}
	for (j=0;j<taille ; j++) {
		if (taille-j<10) {
			espace=" ";
		}else{
			espace="";
		}
		cout<<f.cyan("Tentative : ")<<espace<<taille-j<<"   ";
		cout<<historiqueResultat[taille-j-1]<< "   |"<<endl;
	}
	cout <<"______________________"+underscore+"|"<<endl;
}



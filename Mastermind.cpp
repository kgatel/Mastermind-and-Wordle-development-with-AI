#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include "Mastermind.hpp"  
#include "FonctionsUtiles.hpp"
#include "CombiMastermind.hpp"
#include "Menu.hpp"
using namespace std;


Mastermind::Mastermind() : JeuDeDeduction(){
}

Mastermind :: Mastermind(Joueur *codeur1, Joueur *decodeur1) : JeuDeDeduction(codeur1,decodeur1){
	
}

void Mastermind :: partie(){
	FonctionsUtiles f;
	f.clear();
	cout << f.vertclair("Bienvenue dans le Mastermind !\n") << endl;
	(*codeur).jouer();
	cout << f.vertclair("Bienvenue dans le Mastermind !\n") << endl;
	cout << f.cyan("Code couleur entré, décodeur à vous de le trouver !\n") << endl;
	afficherCouleurs();	
	do{
		cout << f.jaune("Tour n°"+f.intToString(numeroTour+1))<<endl;
		(*decodeur).jouer();
		historiqueCombinaison.push_back((*decodeur).getCombinaison());
		historiqueResultat.push_back(CombiMastermind((*decodeur).getCombinaison()).resultat((*codeur).getCombinaison()));
		(*decodeur).set_historiqueRes(historiqueResultat[historiqueResultat.size()-1]);
		afficherHistorique();
		incrTour();
		cout << endl;
	}while(detectionVictoire()==NULL);
	cout << endl;
	if (detectionVictoire()==codeur){
		system("aplay -q ressources/Song/defaite.wav &");
		cout << "Le code était : " + CombiMastermind((*codeur).getCombinaison()).toString() << endl;
		cout << (*codeur).toString();
		cout << " a remporté la partie." << endl;
	}else{
		system("aplay -q ressources/Song/victoire.wav &");
		cout << (*decodeur).toString();
		cout << " a remporté la partie." << endl;
	}
	
}

void Mastermind :: afficherHistorique(){
	FonctionsUtiles f;
	string resultat = CombiMastermind((*decodeur).getCombinaison()).resultat((*codeur).getCombinaison());
	int i,j;
	int taille;
	taille=(int)historiqueCombinaison.size();
	string espace="";
	string underscore="";
	for (int jj=1;jj<Menu::NB_CASE;jj++){
		underscore+="_______";
	}
	cout <<"________________"+underscore+"___"+f.cyan("Résultats")<< endl;
	for (i=0;i<Menu::NB_TOUR-taille ; i++) {
		if (Menu::NB_TOUR-i<10) {
			espace=" ";
		}else{
			espace="";
		}
		string chaine="";
		for (int cpt=0;cpt<Menu::NB_CASE;cpt++){
			chaine+=f.carrevide()+"      ";
		}
		if ((i==Menu::NB_TOUR-taille-1)&&(!f.equals(f.charToString(historiqueResultat[taille-1][0]),f.intToString(Menu::NB_CASE)))){
			cout<<f.cyan("Tentative : ")<<espace<<Menu::NB_TOUR-i<<"  "+f.blink(chaine)+"     |"<<endl;
		}else{
			cout<<f.cyan("Tentative : ")<<espace<<Menu::NB_TOUR-i<<"  "+chaine+"     |"<<endl;
		}
	}
	for (j=0;j<taille ; j++) {
		if (taille-j<10) {
			espace=" ";
		}else{
			espace="";
		}
		cout<<f.cyan("Tentative : ")<<espace<<taille-j<<" ";
		cout << CombiMastermind(historiqueCombinaison[taille-j-1]).toString();
		cout<<f.rouge(f.charToString(historiqueResultat[taille-j-1][0]))<<" "<<f.blanc(f.charToString(historiqueResultat[taille-j-1][1]))<<	"   |" << endl;
	}
	cout <<"________________"+underscore+"____________|"<< endl;
}

void Mastermind :: afficherCouleurs(){
	FonctionsUtiles f;
	ifstream Handle;
	string chaine="",chaine2="";
	string CurrLine;
	Handle.open(Menu::ENSEMBLE_ELEMENT);
	cin.clear();
	cout << "Liste des couleurs :" <<endl;
	if(Handle.is_open()) {	 
		while(getline(Handle,CurrLine)) {
			if (CurrLine!="end")
			{
				if (f.equals(CurrLine,"Rouge")) {chaine2+=f.carrerouge()+" Rouge";}
				if (f.equals(CurrLine,"Vert")) {chaine2+=f.carrevert()+" Vert";}
				if (f.equals(CurrLine,"Jaune")) {chaine2+=f.carrejaune()+" Jaune";}
				if (f.equals(CurrLine,"Bleu")) {chaine2+=f.carrebleu()+" Bleu";}
				if (f.equals(CurrLine,"Violet")) {chaine2+=f.carreviolet()+" Violet";}
				if (f.equals(CurrLine,"Blanc")) {chaine2+=f.carreblanc()+" Blanc";}	
				if (f.equals(CurrLine,"Orange")) {chaine2+=f.carreorange()+" Orange";}
				if (f.equals(CurrLine,"Rose")) {chaine2+=f.carrerose()+" Rose";}	
				if (f.equals(CurrLine,"Marron")) {chaine2+=f.carremarron()+" Marron";}
				cout << chaine2 << endl;
			}
			chaine2="";
		}
	}
	cout << endl;
}

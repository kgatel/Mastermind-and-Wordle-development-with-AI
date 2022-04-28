#include <iostream>
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
	cout << f.vert("Bienvenue dans le Mastermind !\n") << endl;
	(*codeur).jouer();
	do{
		
		cout << f.jaune("\nTour n°"+f.intToString(numeroTour+1))<<endl;
		(*decodeur).jouer();
		historiqueCombinaison.push_back((*decodeur).getCombinaison());
		historiqueResultat.push_back(CombiMastermind((*decodeur).getCombinaison()).resultat((*codeur).getCombinaison()));
		afficherHistorique();
		incrTour();
	}while(detectionVictoire()==NULL);
	cout << endl;
	if (detectionVictoire()==codeur){
		cout << (*codeur).toString();
	}else{
		cout << (*decodeur).toString();
	}
	cout << " a remporté la partie." << endl;
}

void Mastermind :: afficherHistorique(){
	FonctionsUtiles f;
	string resultat = CombiMastermind((*decodeur).getCombinaison()).resultat((*codeur).getCombinaison());
	int i,j,k=0;
	int taille;
	taille=(int)historiqueCombinaison.size();
	string espace="";
	string zero="";
	cout <<"________________________________________"+f.cyan("Résultats")<< endl;
	for (i=0;i<Menu::NB_TOUR-taille ; i++) {
		if (Menu::NB_TOUR-i<10) {
			espace=" ";
		}else{
			espace="";
		}
		if (i==Menu::NB_TOUR-taille-1){
			cout<<f.cyan("Tentative : ")<<espace<<Menu::NB_TOUR-i<<"  "<<f.blink(f.carrevide()+"      "+f.carrevide()+"      "+f.carrevide()+"      "+f.carrevide())+"           |"<<endl;
		}else{
			cout<<f.cyan("Tentative : ")<<espace<<Menu::NB_TOUR-i<<"  "<<f.carrevide()<<"      "<<f.carrevide()<<"      "<<f.carrevide()<<"      "<<f.carrevide()<<"           |"<<endl;
		}
	}
	for (j=0;j<taille ; j++) {
		if (taille-j<10) {
			espace=" ";
		}else{
			espace="";
		}
		cout<<f.cyan("Tentative : ")<<espace<<taille-j<<" ";
		for (k=0;k<Menu::NB_CASE;k++) {
			if (historiqueCombinaison[taille-j-1].get(k)=="Rouge") {cout<<" "<<f.carrerouge()<<"    ";}
			if (historiqueCombinaison[taille-j-1].get(k)=="Vert") {cout<<" "<<f.carrevert()<<"    ";}
			if (historiqueCombinaison[taille-j-1].get(k)=="Jaune") {cout<<" "<<f.carrejaune()<<"    ";}
			if (historiqueCombinaison[taille-j-1].get(k)=="Bleu") {cout<<" "<<f.carrebleu()<<"    ";}
			if (historiqueCombinaison[taille-j-1].get(k)=="Violet") {cout<<" "<<f.carreviolet()<<"    ";}
			if (historiqueCombinaison[taille-j-1].get(k)=="Blanc") {cout<<" "<<f.carreblanc()<<"    ";}	
			if (historiqueCombinaison[taille-j-1].get(k)=="Orange") {cout<<" "<<f.carreorange()<<"    ";}
			if (historiqueCombinaison[taille-j-1].get(k)=="Rose") {cout<<" "<<f.carrerose()<<"    ";}	
			if (historiqueCombinaison[taille-j-1].get(k)=="Marron") {cout<<" "<<f.carremarron()<<"    ";}				
		}
		cout<<f.rouge(f.charToString(historiqueResultat[taille-j-1][0]))<<" "<<f.blanc(f.charToString(historiqueResultat[taille-j-1][1]))<<	"   |" << endl;
	}
	cout <<"_________________________________________________|"<< endl;
}

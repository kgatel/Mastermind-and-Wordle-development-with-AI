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
	for (i=0;i<Menu::NB_TOUR-taille ; i++) {
		if (Menu::NB_TOUR-i<10) {
		cout<<f.jaune("tentative ")<<Menu::NB_TOUR-i<<" "<<f.carrevide()<<"      "<<f.carrevide()<<"      "<<f.carrevide()<<"      "<<f.carrevide()<<endl;
	}
	
	}
	for (j=0;j<taille ; j++) {
		cout<<f.jaune("tentative ")<<taille-j;
		for (k=0;k<Menu::NB_CASE;k++) {
			if (historiqueCombinaison[taille-j-1].get(k)=="Rouge") {cout<<" "<<f.carrerouge()<<"    ";}
			if (historiqueCombinaison[taille-j-1].get(k)=="Vert") {cout<<" "<<f.carrevert()<<"    ";}
			if (historiqueCombinaison[taille-j-1].get(k)=="Jaune") {cout<<" "<<f.carrejaune()<<"    ";}
			if (historiqueCombinaison[taille-j-1].get(k)=="Bleu") {cout<<" "<<f.carrebleu()<<"    ";}
			if (historiqueCombinaison[taille-j-1].get(k)=="Violet") {cout<<" "<<f.carreviolet()<<"    ";}
			if (historiqueCombinaison[taille-j-1].get(k)=="BLanc") {cout<<" "<<f.carreblanc()<<"    ";}	
		}
		cout<<f.rouge(f.charToString(historiqueResultat[taille-j-1][0]))<<" "<<f.blanc(f.charToString(historiqueResultat[taille-j-1][1]))<<endl;
		
	}
	
	//historiqueCombinaison[0].get()
	//string resultat = CombiMastermind((*decodeur).getCombinaison()).resultat((*codeur).getCombinaison());
	//cout << f.rouge(f.charToString(resultat[0]))+" "+f.blanc(f.charToString(resultat[1])) << endl; 
}

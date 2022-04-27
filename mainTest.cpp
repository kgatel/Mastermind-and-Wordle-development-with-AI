#include <iostream>
#include "CombiMastermind.hpp"
#include "Humain_Codeur_Wordle.hpp"
#include "Humain_Decodeur_Wordle.hpp"
#include "Humain_Codeur_Mastermind.hpp"
#include "Humain_Decodeur_Mastermind.hpp"
#include "CombiWordle.hpp"
#include "Menu.hpp"
#include <vector>
#include <iostream>
#include <sstream>
#include "FonctionsUtiles.hpp"

using namespace std;

int main() 


{	
	FonctionsUtiles f;
	cout<<"***************************PARTIE MASTERMIND***************************\n";
	Menu::ModeDeJeu=1;
	Menu menu;
	menu.afficherMenu();
	Humain_Codeur_Mastermind codeur;
	Humain_Decodeur_Mastermind decodeur;
	CombiMastermind c1=CombiMastermind(codeur.entrerCode());
    CombiMastermind c2=CombiMastermind(decodeur.entrerCombinaison());
    cout << "\nNombre de couleurs bien placées : " << c2.resultat(c1)[0] << "\nNombre de couleurs mal placées : " << c2.resultat(c1)[1] << "\n"<< endl;
    cout << "*************************FIN TEST*************************\n\n" << endl;
    

   /* cout<< "***************************PARTIE WORDLE***************************\n";
    
    Humain_Codeur_Wordle codeurWordle;
    
	Humain_Decodeur_Wordle decodeurWordle;
    
    Menu(4,0,2);
    CombiWordle c3=CombiWordle(codeurWordle.entrerCode());
    CombiWordle c4=CombiWordle(decodeurWordle.entrerCombinaison());
    string resultat="";
	string chaine1, chaine2;
	resultat =c4.resultat(c3);
    //cout << c3.toString() << "\n" << c4.toString() << "\nRésultat : " << c3.afficherResultat(resultat) << "\n" << endl;
    cout << c3.toString() << endl;
    cout << resultat << endl;
    //c4.afficherResultat(resultat);
    cout << "*************************FIN TEST*************************\n" << "\n" << endl;*/
    
    
    
    
    
    return 0;
}


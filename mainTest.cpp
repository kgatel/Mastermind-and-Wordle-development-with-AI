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

using namespace std;

int main() 


{	
	"***************************PARTIE MASTERMIND***************************\n"
	Menu::ModeDeJeu=1;
	Humain_Codeur_Mastermind codeur;
	Humain_Decodeur_Mastermind decodeur;
	cout << "***************************TEST***************************\n"<< endl;
	CombiMastermind c1=CombiMastermind(codeur.entrerCode());
    CombiMastermind c2=CombiMastermind(decodeur.entrerCombinaison());
    cout << c1.toString() << "\n" << c2.toString() << "\nNombre de couleurs bien placées : " << c1.bienPlace(c2) << "\nNombre de couleurs mal placées : " << c1.malPlace(c2) << "\n"<< endl;
    cout << "*************************FIN TEST*************************\n\n" << endl;
    

    "***************************PARTIE WORDLE***************************\n"
    
  cout << "***************************TEST***************************\n" << endl;
    Humain_Codeur_Wordle codeur;
    
	Humain_Decodeur_Wordle decodeur;
    
    Menu(4,0,2);
    CombiWordle c3=CombiWordle(codeur.entrerCode());
    CombiWordle c4=CombiWordle(decodeur.entrerCombinaison());
    string resultat="";
	string chaine1, chaine2;
	resultat =c4.resultat(c3);
    //cout << c3.toString() << "\n" << c4.toString() << "\nRésultat : " << c3.afficherResultat(resultat) << "\n" << endl;
    cout << c3.toString() << endl;
    cout << resultat << endl;
    //c4.afficherResultat(resultat);
    cout << "*************************FIN TEST*************************\n" << "\n" << endl;
    
    
    
    
    
    return 0;
}


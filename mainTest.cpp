#include <iostream>
#include "CombiMastermind.hpp"
#include "Humain_Codeur_Wordle.hpp"
#include "Humain_Decodeur_Wordle.hpp"
#include "CombiWordle.hpp"
#include "Menu.hpp"
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

int main() 
{
	cout << "***************************TEST***************************\n"<< endl;
	CombiMastermind c1("rouge bleu vert violet orange");
	CombiMastermind c2("blanc vert bleu violet rouge");
    cout << c1.toString() << "\n" << c2.toString() << "\nNombre de couleurs bien placées : " << c1.bienPlace(c2) << "\nNombre de couleurs mal placées : " << c1.malPlace(c2) << "\n"<< endl;
    cout << "*************************FIN TEST*************************\n\n" << endl;
    
    cout << "***************************TEST***************************\n"<< endl;
	CombiWordle c5("TABLE");
	CombiWordle c6("TREES");
    cout << "Code : " + c5.toString() << "\nCombinaison testée : " << c6.toString() << "\nRésultat : " << c6.resultat(c5) << "\n"<< endl;
    cout << "*************************FIN TEST*************************\n\n" << endl;
    
    
    cout << "***************************TEST***************************\n" << endl;
    Humain_Codeur_Wordle codeur;
    Humain_Decodeur_Wordle decodeur;
    Menu(5,0,2);
    CombiWordle c3=codeur.entrerCode();
    CombiWordle c4=decodeur.entrerCombinaison();
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


#include <iostream>
#include "CombiMastermind.hpp"
#include "Humain_Codeur_Wordle.hpp"
#include "CombiWordle.hpp"
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
    
    cout << "***************************TEST***************************\n" << endl;
    Humain_Codeur_Wordle codeur;
	CombiWordle c3=codeur.entrerCode();
	CombiWordle c4("apfle");
	string resultat="";
	string chaine1, chaine2;
    cout << c3.toString() << "\n" << c4.toString() << "\nRésultat : " << c3.resultat(c4) << "\n" << endl;
    cout << "*************************FIN TEST*************************\n" << "\n" << endl;
    
    
    
    
    
    return 0;
}


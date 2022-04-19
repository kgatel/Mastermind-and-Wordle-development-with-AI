#include <iostream>
#include "CombiMastermind.hpp"
#include "CombiWordle.hpp"
#include "Joueur.hpp"
#include "Humain.hpp"
#include "IA.hpp"
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
	CombiWordle c3("KEVING");
	CombiWordle c4("KCYNIT");
	string resultat="";
	string chaine1, chaine2;
    cout << c3.toString() << "\n" << c4.toString() << "\nRésultat : " << c3.resultat(c4) << "\n" << endl;
    cout << "*************************FIN TEST*************************\n\n" << endl;
    
    Joueur j1("eric");
    Humain j2("sam");
    IA j3("ordi");
    cout << "Joueur 1 :"+j1.toString()+"\nJoueur 2 : "+j2.toString()+"\nJoueur 3 : "+j3.toString()+"\n"<< endl;
    
    
    
    return 0;
}


#include "FonctionsUtiles.hpp"
#include "Combinaison.hpp"
#include "Menu.hpp"
#include "CombiMastermind.hpp"
#include "IA_Codeur.hpp"
#include "IA_Codeur_Mastermind.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

IA_Codeur_Mastermind :: IA_Codeur_Mastermind () {

}

void IA_Codeur_Mastermind :: jouer(){
	setCombinaison(CombiMastermind(genererCode()));
}

Combinaison IA_Codeur_Mastermind :: genererCode(){
	return Combinaison();
}

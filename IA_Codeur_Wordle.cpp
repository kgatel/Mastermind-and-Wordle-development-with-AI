#include <string>
#include "FonctionsUtiles.hpp"
#include "Combinaison.hpp"
#include "Menu.hpp"
#include "CombiWordle.hpp"
#include "IA_Codeur.hpp"
#include "IA_Codeur_Wordle.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <ncurses.h>
#include <unistd.h>

using namespace std;


IA_Codeur_Wordle :: IA_Codeur_Wordle() : IA_Codeur(){
}

void IA_Codeur_Wordle :: jouer(){
	setCombinaison(CombiWordle(choisirCombinaison()));
}

Combinaison IA_Codeur_Wordle :: choisirCombinaison(){
	return genererCode();
}

Combinaison IA_Codeur_Wordle :: genererCode(){
	return Combinaison();
}

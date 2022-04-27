#include <stdio.h>


#include <iostream>
#include "CombiMastermind.hpp"

#include "JeuDeDeduction.hpp"
#include "Mastermind.hpp"
#include "Wordle.hpp"
#include "Humain_Codeur_Wordle.hpp"
#include "Humain_Decodeur_Wordle.hpp"
#include "Humain_Decodeur_Mastermind.hpp"
#include "Humain_Codeur_Mastermind.hpp"
#include "CombiWordle.hpp"
#include "Menu.hpp"
#include <vector>
#include <iostream>
#include <sstream>


using namespace std;

int main() {
	
	Menu menu;
	
	switch (Menu::ModeDeJeu) {
		case 1:{
			Humain_Codeur_Wordle codeur ;
			Humain_Decodeur_Wordle decodeur;
		}
		break;
		case 2:{
			Humain_Codeur_Mastermind codeur;
			Humain_Decodeur_Mastermind decodeur;
		}
		break;
		case 3://cas avec IA ...
		
		break;
	
		default:
		break;
		
		};
		//JeuDeDeduction* Jeu;
		
		if (Menu::ModeDeJeu==1)
		{
			Mastermind Jeu;
			//Jeu=&Mast;
		}else{
			Wordle Jeu;
			//Jeu=&Word;
		}

  return 0;
}

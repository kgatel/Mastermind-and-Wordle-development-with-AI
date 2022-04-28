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
#include "IA_Decodeur_Mastermind.hpp"
#include "IA_Decodeur_Wordle.hpp"
#include "IA_Codeur_Mastermind.hpp"
#include "IA_Codeur_Wordle.hpp"
#include "CombiWordle.hpp"
#include "Menu.hpp"
#include <vector>
#include <iostream>
#include <sstream>


using namespace std;

int main() {
	
	Menu menu;
	menu.afficherMenu();
	
	Joueur *codeur,*decodeur;
	
	Humain_Codeur_Mastermind j1;
	Humain_Codeur_Wordle j2;
	Humain_Decodeur_Mastermind j3;
	Humain_Decodeur_Wordle j4;
	IA_Codeur_Mastermind j5;
	IA_Codeur_Wordle j6;
	IA_Decodeur_Mastermind j7;
	IA_Decodeur_Wordle j8;
	
	switch (Menu::ModeDeJeu) {
		case 1:{
			if (Menu::JEU=="Mastermind"){
				codeur=&j1;
				decodeur=&j3;
			}else{
				codeur=&j2;
				decodeur=&j4;
			}
		}
		break;
		case 2:{
			if (Menu::JEU=="Mastermind"){
				codeur=&j1;
				decodeur=&j7;
			}else{
				codeur=&j2;
				decodeur=&j8;
			}
		}
		break;
		case 3:
			if (Menu::JEU=="Mastermind"){
				codeur=&j5;
				decodeur=&j3;
			}else{
				codeur=&j6;
				decodeur=&j4;
			}
		
		break;
		case 4:
		if (Menu::JEU=="Mastermind"){
				codeur=&j5;
				decodeur=&j7;
			}else{
				codeur=&j6;
				decodeur=&j8;
			}
	
		default:
		break;
		
		};
		
		JeuDeDeduction *Jeu;
		Mastermind Mast(codeur,decodeur);
		Wordle Word(codeur,decodeur);
			
		if (Menu::JEU=="Mastermind")
		{
			Jeu=&Mast;
		}else{
			Jeu=&Word;
		}

		(*Jeu).partie();
		
		
  return 0;
}

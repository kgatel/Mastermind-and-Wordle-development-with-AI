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
	
	switch (Menu::ModeDeJeu) {
		case 1:{
			if (Menu::JEU=="Mastermind"){
				Humain_Codeur_Mastermind j1 ;
				codeur=&j1;
				Humain_Decodeur_Mastermind j2;
				decodeur=&j2;
			}else{
				Humain_Codeur_Wordle j1 ;
				codeur=&j1;
				Humain_Decodeur_Wordle j2;
				decodeur=&j2;
			}
		}
		break;
		case 2:{
			if (Menu::JEU=="Mastermind"){
				Humain_Codeur_Mastermind j1;
				codeur=&j1;
				IA_Decodeur_Mastermind j2;
				decodeur=&j2;
			}else{
				Humain_Codeur_Wordle j1;
				codeur=&j1;
				IA_Decodeur_Wordle j2;
				decodeur=&j2;
			}
		}
		break;
		case 3:
			if (Menu::JEU=="Mastermind"){
				IA_Codeur_Mastermind j1;
				codeur=&j1;
				Humain_Decodeur_Mastermind j2;
				decodeur=&j2;
			}else{
				IA_Codeur_Wordle j1;
				codeur=&j1;
				Humain_Decodeur_Wordle j2;
				decodeur=&j2;
			}
		
		break;
		case 4:
		if (Menu::JEU=="Mastermind"){
				IA_Codeur_Mastermind j1;
				codeur=&j1;
				IA_Decodeur_Mastermind j2;
				decodeur=&j2;
			}else{
				IA_Codeur_Wordle j1;
				codeur=&j1;
				IA_Decodeur_Wordle j2;
				decodeur=&j2;
			}
	
		default:
		break;
		
		};
		JeuDeDeduction *Jeu;
		
		if (Menu::JEU=="Mastermind")
		{
			Mastermind Mast(codeur,decodeur,menu);
			Jeu=&Mast;
		}else{
			Wordle Word(codeur,decodeur,menu);
			Jeu=&Word;
		}
		
		(*Jeu).partie();
		
		
  return 0;
}

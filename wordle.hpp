#ifndef MASTERMIND_H
#define MASTERMIND_H

#include <string>
#include <iostream>
#include "Menu.hpp"
#include "Joueur.hpp"
#include "Combinaison.hpp"

using std::string;
using namespace std;

/*! \class Wordle
* \brief Classe principale permettant de lancement d'une partie de Wordle.
* \author Groupe A7
* \version 1.0
* \date avril 2022
*
* Cette classe permet de définir l'objet Combinaison. Elle transforme une chaine de caractère (lettre) séparée d'espace en tableau d'entier. 
*/

class Wordle {
	
		Wordle(const string chaine);
		
				
		/*! \fn void partie() 
		* \brief Elle permet de lancer une partie une fois que les paramètres et le mode de jeu ont bien été choisi par le joueur s'il le souhaite
		*/		
		void partie();
		/*! \fn void afficherPartie()
		* \brief Cette méthode permet d’afficher le jeu entier comprenant les historiques des combinaisons rentrées avec le résultat de comparaison avec le code associé (nombre de couleur bien placé et mal placé). Cette méthode ne permet pas d’afficher le code car nous sommes du point de vue décodeur.
		*/
		void afficherPartie();
		
		/*! \fn void afficherCode();
		* \brief Cette méthode permet au joueur codeur de regarder son code discrètement. Pour activer cette méthode il faudra rentrer un mot de passe. Si le mot de passe rentré est le même que l’attribut du codeur alors le code sera affiché quelques secondes.
		*/
		 void choisirFichierDeMot()	
		* \brief Cette méthode permet de choisir le fichier de mot dictionnaire pour le Wordle. 	
};

#endif // CODEUR_H


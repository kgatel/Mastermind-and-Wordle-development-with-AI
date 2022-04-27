#ifndef MASTERMIND_H
#define MASTERMIND_H

#include <string>
#include <iostream>
#include "Menu.hpp"
#include "Joueur.hpp"
#include "Combinaison.hpp"

using std::string;
using namespace std;

/*! \class Mastermind
* \brief Classe principale permettant de lancement d'une partie. Elle comprend le main et
* \author Groupe A7
* \version 1.0
* \date avril 2022
*
* Cette classe permet de définir l'objet Combinaison. Elle transforme une chaine de caractère (suite de couleur) séparée d'espace en tableau d'entier.
*/

class Mastermind {

		/*! \fn void partie() 
		* \brief Elle permet de lancer une partie de Mastermind.
		*/		
		void partie();
		
		/*! \fn void afficherPartie()
		* \brief Cette méthode permet d’afficher le jeu entier comprenant les historiques des combinaisons rentrées avec le résultat de comparaison avec le code associé (nombre de couleur bien placé et mal placé). Cette méthode ne permet pas d’afficher le code car nous sommes du point de vue décodeur.
		*/
		void afficherPartie();
		
		};

#endif // CODEUR_H


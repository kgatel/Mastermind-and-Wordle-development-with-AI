#ifndef MASTERMIND_H
#define MASTERMIND_H

#include <iostream>
#include "Menu.hpp"
#include "Joueur.hpp"
#include "Combinaison.hpp"

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

		/*! \fn Mastermind()
		  * \brief Constructeur neutre de la classe Mastermind
		  */
		Mastermind();
		
		/*! \fn Mastermind(const string chaine)
		  * \brief Constructeur de la classe Mastermind
		  * \param chaine est la chaine de caractère comprenant la suite de couleurs séparées d'espace
		*/
		Mastermind(const string chaine);

		/*! \fn void partie() 
		* \brief Elle permet de lancer une partie de Mastermind.
		*/		
		void partie();
		
		/*! \fn void afficherPartie()
		* \brief Cette méthode permet d’afficher le jeu entier comprenant les historiques des combinaisons rentrées avec le résultat de comparaison avec le code associé (nombre de couleur bien placé et mal placé). Cette méthode ne permet pas d’afficher le code car nous sommes du point de vue décodeur.
		*/
		void afficherPartie();
		
		};

#endif // MASTERMIND_H


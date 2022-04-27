#ifndef MASTERMIND_H
#define MASTERMIND_H

#include <iostream>
#include "Menu.hpp"
#include "Joueur.hpp"
#include "Combinaison.hpp"
#include "JeuDeDeduction.hpp"

using namespace std;

/*! \class Mastermind
* \brief Classe principale permettant de lancement d'une partie. Elle comprend le main et
* \author Groupe A7
* \version 1.0
* \date avril 2022
* \namespace std
* 
* Cette classe permet de définir l'objet Combinaison. Elle transforme une chaine de caractère (suite de couleur) séparée d'espace en tableau d'entier.
*/

class Mastermind : public JeuDeDeduction {
	public:
		/*! \fn Mastermind()
		  * \brief Constructeur neutre de la classe Mastermind
		  */
		Mastermind();

<<<<<<< HEAD
		Mastermind(Joueur *codeur1, Joueur *decodeur1);
=======
<<<<<<< HEAD
=======
		Mastermind(Joueur *codeur1, Joueur *decodeur1,Menu menu1);
>>>>>>> 3a9de75c5a9d38d9ca9a8d2a5522defb7416f3e8
		
>>>>>>> d2884787e6a21be2f72d8ef0cee0092a58a41b81
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


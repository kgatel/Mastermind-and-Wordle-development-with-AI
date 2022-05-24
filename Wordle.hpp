#ifndef WORDLE_H
#define WORDLE_H

#include <string>
#include <iostream>
#include "Menu.hpp"
#include "Joueur.hpp"
#include "Combinaison.hpp"
#include "JeuDeDeduction.hpp"

using std::string;
using namespace std;

/*! \class Wordle
* \brief Classe principale permettant de lancement d'une partie de Wordle. Elle définit les méthodes abstraites présente dans JeuDeDeduction. 
* \author Groupe A7
* \version 1.0
* \date avril 2022
* \namespace std
*/


class Wordle : public JeuDeDeduction {
		public :

		/*! \fn Wordle();
		  * \brief Constructeur neutre de la classe Wordle
		  */
		Wordle();
		
		/*! \fn Wordle()
		  * \brief Constructeur de la classe Wordle avec les paramètres
		  * \param codeur : joueur codeur qui propose une combinaison 
		  * \param decodeur : joueur décodeur qui va deviner la combinaison
		*/
		Wordle(Joueur *codeur1, Joueur *decodeur1);
		
		/*! \fn partie() 
		* \brief Elle permet de lancer une partie de Wordle.
		*/		
		virtual void partie();
		
		/*! \fn void afficherHistorique()
		* \brief Cette méthode permet d’afficher le jeu entier comprenant les historiques des combinaisons rentrées avec le résultat de comparaison avec le code associé (nombre de couleur bien placé et mal placé).
		* \brief Cette méthode ne permet pas d’afficher le code quand nous sommes du point de vue décodeur.
		*/
		virtual void afficherHistorique();
		
		/*! \fn void choisirFichierDeMot();
		* \brief Cette méthode permet de choisir le fichier de mot qui sera alors le dictionnaire pour le Wordle. 
		*/
		void choisirFichierDeMot();
		
};
#endif // WORDLE_H


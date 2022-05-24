#ifndef MASTERMIND_H
#define MASTERMIND_H

#include <iostream>
#include "Menu.hpp"
#include "Joueur.hpp"
#include "Combinaison.hpp"
#include "JeuDeDeduction.hpp"

using namespace std;

/*! \class Mastermind
* \brief Classe principale permettant de lancement d'une partie de Mastermind. Elle définit les méthodes abstraites présente dans JeuDeDeduction. 
* \author Groupe A7
* \version 1.0
* \date avril 2022
* \namespace std
*/

class Mastermind : public JeuDeDeduction {
	public:
		/*! \fn Mastermind()
		  * \brief Constructeur neutre de la classe Mastermind
		  */
		Mastermind();

		/*! \fn Mastermind();
		  * \brief Constructeur neutre de la classe Mastermind avec paramètres
		  * \param codeur : joueur codeur qui propose une combinaison 
		  * \param decodeur : joueur décodeur qui va deviner la combinaison
		  */
		Mastermind(Joueur *codeur1, Joueur *decodeur1);

		/*! \fn partie()                                                                                                                                                                         
		 * 	\brief Elle permet de lancer une partie de Mastermind.
		 */		
		void partie();
		
		/*! \fn afficherPartie()
		 *  \brief Cette méthode permet d’afficher le jeu entier comprenant les historiques des combinaisons rentrées avec le résultat de comparaison avec le code associé (nombre de couleur bien placé et mal placé).
		 *  \brief Cette méthode ne permet pas d’afficher le code quand nous sommes du point de vue décodeur.
		 */
		virtual void afficherHistorique();
	
	private :
		/*! \fn affichercouleur()                                                                                                                                                                         
		 * 	\brief Elle permet d'afficher la suite de couleur qui correspond à la combinaison saisie.
		 */
		void afficherCouleurs();
	};

#endif // MASTERMIND_H


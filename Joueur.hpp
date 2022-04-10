#ifndef JOUEUR_H
#define JOUEUR_H

#include <string>
#include "Combinaison.hpp"

/*! \class Joueur
* \brief classe abstraite regroupant tout joueur
* \author Groupe A7
* \version 1.0
* \date avril 2022
*
* Il s’agit d’une classe abstraite qui définit tout joueur du Mastermind. On y retrouve deux attributs, le premier est un élément de la classe combinaison et le second est le nombre de tours écoulés qui est équivalent au nombre de combinaisons entrées par le joueur décodeur. 
* */

class Joueur {
	private:
		Combinaison combinaison;
		static int numeroTour;

public:
		/*! \fn Codeur(string mdp)
		  * \brief Constructeur de la classe joueur
		  * \param comb la combinaison associée au joueur 
		  * \param nbtour le nombre de tours écoulés

		  */
		Joueur(Combinaison comb, int nbtour);
		
		
		/*! \fn getCombinaison();
		* \brief Pour accéder à l'attribut combinaison 
		*/
		Combinaison getCombinaison();
		
		/*! \fn getnumeroTour();
		* \brief Pour accéder à l'attribut numeroTour 
		*/
		int getnumeroTour();
		
		/*! \fn entrerCombinaison();
		* \brief Méthode demandant la saisie d'une combinaison
		*/
		void entrerCombinaison();
		
};

#endif // JOUEUR_H


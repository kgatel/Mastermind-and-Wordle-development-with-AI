#ifndef IA_Codeur_Mastermind_H
#define IA_Codeur_Mastermind_H
#include <string>

#include "Combinaison.hpp"
#include "IA_Codeur.hpp"

/*! \class IA_Codeur_Mastermind
* \brief Cette classe est utilisée pour représenter un joueur artificiel (IA) en mode codeur dans le mode de jeu Mastermind
* \author Groupe A7
* \version 1.0
* \date avril 2022
* \namespace std
*/

class IA_Codeur_Mastermind : public IA_Codeur{
	
	public :
	
		/*! \fn IA_Codeur_Mastermind()
		  * \brief Constructeur de la classe IA_Codeur_Mastermind
		  */
		IA_Codeur_Mastermind();
		
		/*! \fn genererCode()
		* \brief méthode permettant à la machine de générer un code que l'intelligence artificielle devra ensuite trouver
		*\return retourne le code créé par la machine
		*/
		virtual Combinaison genererCode();
		
		/*! \fn choisirCombinaison()
		* \brief Cette méthode permet de a l'IA de choisir une combinaison parmis l'ensemble.
		* \return retourne la combinaison choisie
		*/
		virtual Combinaison choisirCombinaison();
		
		/*! \fn jouer()
		* \brief Méthode qui Permet de lancer la partie mastermind avec IA codeur
		*/
		virtual void jouer();
	
};

#endif 

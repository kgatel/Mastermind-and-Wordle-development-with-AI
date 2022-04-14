#ifndef Humain_Decodeur_H
#define Humain_Decodeur_H

#include "Humain.hpp"
#include "Combinaison.hpp"
/*! \class Humain_Decodeur
* \brief Cette classe abstraite permet de décrire les joueurs humains en mode decodeur peu importe le mode de jeu (Mastermind ou wordle).
* \author Groupe A7
* \version 1.0
* \date avril 2022
*
*/

class Humain_Decodeur : public Humain {
	
	public:
		
		/*! \fn Humain_Decodeur()
		  * \brief Constructeur de la classe Humain_Decodeur
		  */
		Humain_Decodeur();
		
		/*! \fn virtual Combinaison entrerCombinaison()
		* \brief methode abstraite à redefinir pour les différents modes de jeu
		*/
		virtual Combinaison entrerCombinaison();
		
};

#endif
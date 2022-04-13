#ifndef Humain_Codeur_Mastermind_H
#define Humain_Codeur_Mastermind_H
#include <string>

#include "Combinaison.hpp"


/*! \class Humain_Codeur_Mastermind
* \brief Cette classe est utilisée pour représenter un joueur humain en mode codeur dans le mode de jeu Mastermind
* \author Groupe A7
* \version 1.0
* \date avril 2022
*
*/

class Humain_Codeur_Mastermind {

	
		/*! \fn Humain_Codeur_Mastermind()
		  * \brief Constructeur de la classe Humain_Codeur_Mastermind
		  */
		Humain_Codeur_Mastermind();
		
		/*! \fn Combinaison entrerCode()
		* \brief méthode permettant à l'utilisateur de saisir le code que le joueur décodeur devra ensuite deviner
		*\return retourne le code saisi par le joueur codeur
		*/
		Combinaison entrerCode();
		  
		/*! \fn bool VerifierEntree(string entree)()
		* \brief Méthode qui Permet de vérifier si l'entrée du joueur codeur peut être interpréter en une combinaison du Mastermind
		*\return retourne un booleen, true si la chaîne peut être considérée comme une combinaison et false sinon
		*/
		bool VerifierEntree(string entree);
		  
	
};

#endif 

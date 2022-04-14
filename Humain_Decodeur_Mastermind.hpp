#ifndef Humain_Decodeur_Mastermind_H
#define Humain_Decodeur_Mastermind_H
#include <string>

#include "Combinaison.hpp"
#include "Humain_Decodeur.hpp"


/*! \class Humain_Decodeur_Mastermind
* \brief Cette classe est utilisée pour représenter un joueur humain en mode decodeur dans le mode de jeu Mastermind
* \author Groupe A7
* \version 1.0
* \date avril 2022
*
*/

class Humain_Decodeur_Mastermind : Humain_Decodeur{
	
	
		/*! \fn Humain_Decodeur_Mastermind()
		  * \brief Constructeur de la classe Humain_Decodeur_Mastermind
		  */
		Humain_Decodeur_Mastermind();
		
		/*! \fn Combinaison entrerCombinaison()
		* \brief méthode permettant à l'utilisateur de saisir une combinaison qu'il propose pour deviner le code donnée par le joueur codeur
		*\return retourne la combinaison saisi par le joueur decodeur
		*/
		Combinaison entrerCombinaison();
		
		/*! \fn bool VerifierEntree(string entree)()
		* \brief Méthode qui Permet de vérifier si l'entrée du joueur decodeur peut être interpréter en une combinaison du Mastermind
		*\return retourne un booleen, true si la chaîne peut être considérée comme une combinaison et false sinon
		*/
		bool VerifierEntree(string entree);
		
};

#endif
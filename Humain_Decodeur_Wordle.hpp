#ifndef Humain_Decodeur_Wordle_H
#define Humain_Decodeur_Wordle_H
#include <string>

#include "Combinaison.hpp"
#include "Humain_Decodeur.hpp"


/*! \class Humain_Decodeur_Wordle
* \brief Cette classe est utilisée pour représenter un joueur humain en mode decodeur dans le mode de jeu Wordle
* \author Groupe A7
* \version 1.0
* \date avril 2022
* \namespace std
*
*/

class Humain_Decodeur_Wordle : Humain_Decodeur{
	
	public :
		/*! \fn Humain_Decodeur_Wordle()
		  * \brief Constructeur de la classe Humain_Decodeur_Wordle
		  */
		Humain_Decodeur_Wordle();
		
		/*! \fn Combinaison entrerCombinaison()
		* \brief méthode permettant à l'utilisateur de saisir une combinaison qu'il propose pour deviner le mot donnée par le joueur codeur
		*\return retourne la combinaison saisi par le joueur decodeur
		*/
		Combinaison entrerCombinaison();
		
		/*! \fn bool VerifierEntree(string entree)()
		* \brief Méthode qui Permet de vérifier si l'entrée du joueur decodeur peut être interpréter en un mot de Wordle
		*\return retourne un booleen, true si la chaîne peut être considérée comme un mot et false sinon
		*/
		bool VerifierEntree(string entree);
		
};

#endif

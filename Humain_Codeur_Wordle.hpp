#ifndef Humain_Codeur_Wordle_H
#define Humain_Codeur_Wordle_H
#include <string>

#include "Combinaison.hpp"
#include "Humain_Codeur.hpp"


/*! \class Humain_Codeur_Wordle
* \brief Cette classe est utilisée pour représenter un joueur humain en mode codeur dans le mode de jeu Wordle
* \author Groupe A7
* \version 1.0
* \date avril 2022
* \namespace std
*
*/

class Humain_Codeur_Wordle : public Humain_Codeur{

	public:
		/*! \fn Humain_Codeur_Wordle()
		  * \brief Constructeur de la classe Humain_Codeur_Wordle
		  */
		Humain_Codeur_Wordle();
		
		/*! \fn Combinaison entrerCode()
		* \brief méthode permettant à l'utilisateur de saisir le code que le joueur décodeur devra ensuite deviner
		*\return retourne le code saisi par le joueur codeur
		*/
		Combinaison entrerCode();
		  
		/*! \fn bool VerifierEntree(string entree)()
		* \brief Méthode qui Permet de vérifier si l'entrée du joueur codeur peut être interpréter en un mot du dictionnaire du jeu Wordle
		*\return retourne un booleen, true si la chaîne peut être considérée comme un mot du dictionnaire et false sinon
		*/
		bool VerifierEntree(string entree);
		  
	
};

#endif 

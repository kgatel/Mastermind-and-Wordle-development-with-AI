#ifndef IA_Codeur_Wordle_H
#define IA_Codeur_Wordle_H
#include <string>

#include "Combinaison.hpp"
#include "IA_Codeur.hpp"


/*! \class IA_Codeur_Wordle
* \brief Cette classe est utilisée pour représenter un joueur virtuel (IA) en mode codeur dans le mode de jeu Wordle
* \author Groupe A7
* \version 1.0
* \date avril 2022
* \namespace std
*
*/

class IA_Codeur_Wordle : public IA_Codeur{

	public :
	
		/*! \fn IA_Codeur_Wordle()
		  * \brief Constructeur de la classe IA_Codeur_Wordle
		  */
		IA_Codeur_Wordle();
		
		/*! \fn Combinaison genererCode()
		* \brief méthode permettant à la machine de générer un code que le joueur artificiel décodeur devra ensuite trouver
		*\return retourne le code créé par la machine
		*/
		Combinaison genererCode();
		  
		virtual void jouer();
		  
	
};

#endif

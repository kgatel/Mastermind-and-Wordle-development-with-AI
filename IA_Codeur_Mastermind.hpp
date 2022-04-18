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
*
*/

class IA_Codeur_Mastermind : public IA_Codeur{
	
	public :
	
		/*! \fn IA_Codeur_Mastermind()
		  * \brief Constructeur de la classe IA_Codeur_Mastermind
		  */
		IA_Codeur_Mastermind();
		
		/*! \fn Combinaison genererCode()
		* \brief méthode permettant à la machine de générer un code que l'intelligence artificielle devra ensuite trouver
		*\return retourne le code créé par la machine
		*/
		Combinaison genererCode();
		  
		  
	
};

#endif 

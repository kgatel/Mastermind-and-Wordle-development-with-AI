#ifndef IA_Codeur_H
#define IA_Codeur_H

#include "IA.hpp"
#include "Combinaison.hpp"
/*! \class Humain_Codeur
* \brief Cette classe abstraite permet de décrire l'intelligence artificielle en mode codeur peu importe le mode de jeu (Mastermind ou wordle).
* \author Groupe A7
* \version 1.0
* \date avril 2022
*
*/

class IA_Codeur : public IA {

	public:

		int Mdp;
	
		
		/*! \fn IA_Codeur()
		  * \brief Constructeur de la classe IA_Codeur
		  */
		IA_Codeur();
		
		/*! \fn virtual void genererCode()=0
		* \brief methode abstraite à redefinir pour les différents modes de jeu
		*/
		virtual Combinaison entrerCode()=0;
		  
		/*! \fn int genererMdP()
		* \brief Méthode qui permet à la machine de générer un mot de passe
		*\return retourne l'entier généré
		*/
		int entrerMdP();
		  
	  	/*! \fn int getMdP()
	 	* \brief acccesseur de l'attribut MdP
		*\return retourne l'attribut MdP de la classe IA_Codeur
		*/
		int getMdP();		
};

#endif 

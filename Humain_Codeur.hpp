#ifndef Humain_Codeur_H
#define Humain_Codeur_H


/*! \class Humain_Codeur
* \brief Cette classe abstraite permet de décrire les joueurs humains en mode codeur peu importe le mode de jeu (Mastermind ou wordle).
* \author Groupe A7
* \version 1.0
* \date avril 2022
*
*/

class Humain_Codeur {

	public:

		int Mdp;
	
		
		/*! \fn Humain_Codeur()
		  * \brief Constructeur de la classe Humain_Codeur
		  */
		Humain_Codeur();
		
		/*! \fn virtual void entrerCode()=0
		* \brief methode abstraite à redefinir pour les différents modes de jeu
		*/
		virtual void entrerCode()=0;
		  
		/*! \fn int entrerMdP()
		* \brief Méthode qui permet à l'utilisateur d'entrer son mot de passe
		*\return retourne l'entier entré par l'utilisateur
		*/
		int entrerMdP();
		  
	  	/*! \fn int getMdP()
	 	* \brief acccesseur de l'attribut MdP
		*\return retourne l'attribut MdP de la classe Humain_Codeur
		*/
		int getMdP();		
};

#endif 

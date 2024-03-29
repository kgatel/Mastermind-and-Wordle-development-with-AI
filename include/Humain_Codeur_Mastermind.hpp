#ifndef Humain_Codeur_Mastermind_H
#define Humain_Codeur_Mastermind_H
#include <string>

#include "Combinaison.hpp"
#include "Humain_Codeur.hpp"

/*! \class Humain_Codeur_Mastermind
* \brief Cette classe est utilisée pour représenter un joueur humain en mode codeur dans le mode de jeu Mastermind
* \author Groupe A7
* \version 1.0
* \date avril 2022
* \namespace std
*
*/

class Humain_Codeur_Mastermind : public Humain_Codeur{

	
	public:
		/*! \fn Humain_Codeur_Mastermind()
		  * \brief Constructeur de la classe Humain_Codeur_Mastermind
		  */
		Humain_Codeur_Mastermind();
		
		/*! \fn Combinaison entrerCode()
		* \brief méthode permettant à l'utilisateur de saisir le code que le joueur décodeur devra ensuite deviner
		*\return retourne le code saisi par le joueur codeur
		*/
		virtual Combinaison entrerCode();
		  
		/*! \fn bool VerifierEntree(string entree)()
		* \brief Méthode qui Permet de vérifier si l'entrée du joueur codeur peut être interpréter en une combinaison du Mastermind
		*\return retourne un booleen, true si la chaîne peut être considérée comme une combinaison et false sinon
		*/
		virtual bool verifierEntree(string entree);
		
		/*! \fn jouer()
		* \brief Méthode qui Permet de lancer la partie mastermind avec humain codeur
		*/
		virtual void jouer();
		  
	
};

#endif 

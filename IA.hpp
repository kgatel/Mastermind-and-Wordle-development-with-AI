#ifndef IA_H
#define IA_H

#include "Joueur.hpp"

using namespace std;

/*! \class IA
* \brief Si le joueur est un IA
* \author Groupe A7
* \version 1.0
* \date avril 2022
* \namespace std
*
* Cette classe hérite de la classe Joueur, elle représente  l'ordi/IA qui devra proposer une combinaison à trouver pour le joueur décodeur. Elle possède les mêmes attributs que Joueur avec un argument en plus, le mot de passe qui sera demandé au moment de voir la combinaison cherchée s'il le souhaite durant une partie.
*/

class IA: public Joueur {
	protected:
		int difficulte;
	public:
	
		/*! \fn IA()
		* \brief Constructeur de la classe IA
		*/
		IA();
		
		/*! \fn IA(string pseudo1)
		  * \brief Constructeur de la classe IA avec paramètre 
		  * \param pseudo1 du joueur
		  */
		IA(string pseudo1);
	
		/*! \fn Combinaison choisirCombinaison()
		  * \brief une méthode abstraite qui permettera à l'IA de trouver la combinaison correct selon le mode de jeu
		  * \return une combinaison
		  */
		//virtual Combinaison choisirCombinaison()=0;
		 
		//virtual void jouer()=0;
		
		virtual void jouer();	
	};
	
#endif // IA_H

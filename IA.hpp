#ifndef HUMAIN_H
#define HUMAIN_H

#include <string>

#include "Joueur.hpp"

using std::string;
using namespace std;

/*! \class IA
* \brief Si le joueur est un IA
* \author Groupe A7
* \version 1.0
* \date avril 2022
*
* Cette classe hérite de la classe Joueur, elle représente  l'ordi/IA qui devra proposer une combinaison à trouver pour le joueur décodeur. Elle possède les mêmes attributs que Joueur avec un argument en plus, le mot de passe qui sera demandé au moment de voir la combinaison cherchée s'il le souhaite durant une partie.
*/

class IA: public Joueur {
	private:
		int difficulte;
	public:
	
		/*! \fn Combinaison choisirCombinaison()
		  * \brief une méthode abstraite qui permettera à l'IA de trouver la combinaison correct selon le mode de jeu
		  * \return une combinaison
		  */
		virtual Combinaison choisirCombinaison()=0;
		 
	};
#endif // IA_H

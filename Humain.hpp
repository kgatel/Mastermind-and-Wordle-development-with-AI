#ifndef HUMAIN_H
#define HUMAIN_H

#include <string>

#include "Joueur.hpp"

using namespace std;

/*! \class Humain
* \brief Si le joueur est un humain
* \author Groupe A7
* \version 1.0
* \date avril 2022
* \namespace std
*
* Classe abrstaire représentant un joueur humain codeur ou bien décodeur.
*/

class Humain: public Joueur {
	public:
	
		/*! \fn Humain()
		* \brief Constructeur de la classe Humain
		*/
		Humain();
		
		/*! \fn Humain(string pseudo1)
		  * \brief Constructeur de la classe Humain avec paramètre 
		  * \param pseudo1 du joueur
		  */
		Humain(string pseudo1);
	
		/*! \fn verifierEntree(string entree)
		  * \brief une méthode abstraite qui permettera de vérifier la syntaxe de l'entrée selon le mode de jeu
		  * \param string entree
		  * \return retourne un booléen (vraie seulement si la syntaxe est bonne)
		  */
		virtual bool verifierEntree(string entree)=0;
		
	};
#endif 

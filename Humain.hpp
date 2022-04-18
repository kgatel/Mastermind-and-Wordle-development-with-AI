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
*
* Classe abrstaire représentant un joueur humain codeur ou bien décodeur.
*/

class Humain: public Joueur {
	public:
	
		/*! \fn virtual bool verifierEntree(string entree)
		  * \brief une méthode abstraite qui permettera de vérifier la syntaxe de l'entrée selon le mode de jeu
		  * \param string entree
		  * \return retourne un booléen (vraie seulement si la syntaxe est bonne)
		  */
		virtual bool verifierEntree(string entree);
		
		/*! \fn vector<string> split(const string chaine, char delimiteur)
		* \brief permet de séparer une chaine de caractère avec un caractère delimiteur donné
		* \param chaine string : la chaine à découper
		* \param char delimiteur caractère précisant où séparer la chaine
		* \return retourne un vecteur
		*/
		vector<string> split(const string &chaine, char delimiteur) ; 
	};
#endif 

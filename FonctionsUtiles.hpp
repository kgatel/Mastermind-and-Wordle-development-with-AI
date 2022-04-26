#ifndef FONCTIONS_UTILES
#define FONCTIONS_UTILES

#include <string>
#include <iostream>
#include <vector>
#include "Menu.hpp"
#include "Joueur.hpp"
#include "Combinaison.hpp"

using namespace std;

/*! \class FonctionsUtiles
* \brief Bibliothèque regroupant des fonctions utiles
* \author Groupe A7
* \version 1.0
* \date avril 2022
* \namespace std
*
* Cette classe permet de regrouper des fonctions utiles.
*/

class FonctionsUtiles {
	
	public:
	
		/*! \fn FonctionsUtiles();
		  * \brief Constructeur neutre de la classe FonctionsUtiles
		*/
		FonctionsUtiles();
		
		/*! \fn vector<string> split(const string &chaine, char delimiteur)
		* \brief méthode permettant de découper une chaine de caractère en plusieurs grâce à un delimiteur
		* \param chaine : chaine à découper
		* \param delimiteur : le séparateur de mot, ici l'espace
		* \return un tableau de string
		*/
		vector<string> split(const string &chaine, char delimiteur);
		
		/*! \fn checkMotFichier(string fichier, string mot)
		* \brief méthode permettant de vérifier si le mot rentré par le codeur existe dans un fichier donnée ou pas
		* \param chaine string : le mot rentré par l'utilisateur
		* \param chaine string : le fichier correspondant au mot
		*\return un booléen : Vrai si le mot existe , Faux sinon
		*/
		
		bool checkMotFichier(string fichier, string mot);
		
};

#endif // FONCTIONS_UTILES

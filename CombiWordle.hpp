#ifndef COMBIWORDLE_H
#define COMBIWORDLE_H

#include <string>
#include <vector>
#include <iostream>

#include "Menu.hpp"
#include "Combinaison.hpp"

using namespace std;

/*! \class CombiWordle
* \brief Tableau d'entier représentant une combinaison de lettre
* \author Groupe A7
* \version 1.0
* \date avril 2022
*
* Cette classe, héritée de Combinaison, permet de définir l'objet CombiWordle. Elle transforme une chaine de caractère (suite de lettre) séparée d'espace en un vecteur de string. Elle possède un seul attribut.
*/

class CombiWordle : public Combinaison{
	
	public:
		/*! \fn CombiWordle()
		  * \brief Constructeur neutre de CombiWordle
		  */
		CombiWordle();
		
		/*! \fn CombiWordle(string chaine)
		  * \brief Constructeur de la classe CombiWordle
		  * \param chaine est la chaine de caractère comprenant la suite de lettre séparée d'espace
		  */
		CombiWordle(string &chaine);
		
		/*! \fn int bienPlace(Combinaison code)
		* \brief renvoie les indices des lettres placées
		* \param code Combinaison : le mot recherché par le décodeur
		* \return un tableau d'entier
		*/
		vector<int> bienPlace(const Combinaison code) ;
		
		/*! \fn int malPlace(Combinaison code)
		* \brief renvoie les indices des lettres appartenant au mot recherché mais mal placées
		* \param code Combinaison : le mot valide recherché par le décodeur
		* \return un tablaeu d'entier
		*/
		vector<int> malPlace(const Combinaison code);
		
		/*! \fn string toString();
		* \brief permet l'affichage du mot
		* \return un string
		*/
		string toString();
			
};

#endif // COMBIWORDLE_H


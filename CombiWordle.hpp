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
* \namespace std
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
		CombiWordle(const string &chaine);
		
		/*! \fn int resultat(CombiWordle code)
		* \brief renvoie les indices des lettres placée
		* \param code Combinaison : le mot recherché par le décodeur
		* \return un tableau d'entier
		*/
		string resultat(const CombiWordle code) ;
		
		/*! \fn afficherResultat(string resultat)
		  * \brief Affiche les caractéres rentrés par le décodeur avec un code de couleur précis : Vert le caractére est dans la bonne place , Jaune le caractére est dans la mauvaise place , Rouge le caractére existe pas dans le code.
		  * \param un string correspondant au résultat de la vérification du mot rentré par le décodeur
		  */
		void afficherResultat(string resultat);
		
		/*! \fn string toString();
		* \brief permet l'affichage du mot
		* \return un string
		*/
		string toString();
			
};

#endif // COMBIWORDLE_H


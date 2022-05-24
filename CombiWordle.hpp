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
* Cette classe, héritée de Combinaison, permet de définir l'objet CombiWordle. Elle transforme une chaine de caractère (suite de lettre) séparée d'espace en un vecteur de string.
*/

class CombiWordle : public Combinaison{
	
	public:
		/*! \fn CombiWordle()
		  * \brief Constructeur neutre de CombiWordle
		  */
		CombiWordle();
		
		/*! \fn ~CombiWordle()
		  * \brief Destructeur neutre de CombiWordle
		  */
		virtual ~CombiWordle(){};
		
		/*! \fn CombiWordle(string chaine)
		  * \brief Constructeur de la classe CombiWordle
		  * \param chaine est la chaine de caractère comprenant la suite de lettre séparée d'espace
		  */
		CombiWordle(const string &chaine);
		
		/*! \fn CombiWordle(vector<string> v)
		  * \brief Constructeur de la classe CombiWordle à partir d'un vecteur
		  * \param v est un vecteur contenant tous les caractères d'un mot
		  */
		CombiWordle(vector<string> v);
		
		/*! \fn CombiWordle(Combinaison c)
		  * \brief Constructeur de la classe CombiWordle à partir d'une combinaison
		  * \param c est une combinaison correspondant à un mot
		  */
		CombiWordle(Combinaison c);
		
		/*! \fn resultat(CombiWordle code)
		* \brief renvoie les indices des lettres placée
		* \param code Combinaison : le mot recherché par le décodeur
		* \return une chaîne de caratère
		*/
		virtual string resultat(const Combinaison code) ;
		
		/*! \fn resultat_couleur(const Combinaison code)
		* \param code Combinaison : le mot recherché par le décodeur
		* \return une chaîne de caratère
		*/
		string resultat_couleur(const Combinaison code);

		
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


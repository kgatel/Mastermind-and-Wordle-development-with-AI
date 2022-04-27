#ifndef COMBIMASTERMIND_H
#define COMBIMASTERMIND_H

#include <string>

#include "Menu.hpp"
#include "Combinaison.hpp"

using namespace std;

/*! \class CombiMastermind
* \brief Tableau d'entier représentant une combinaison de couleur
* \author Groupe A7
* \version 1.0
* \date avril 2022
* \namespace std
*
* Cette classe, héritée de Combinaison, permet de définir l'objet CombiMastermind. Elle transforme une chaine de caractère (suite de couleur) séparée d'espace en un vecteur de string. Elle possède un seul attribut.
*/

class CombiMastermind : public Combinaison{
	
	public:
		/*! \fn CombiMastermind()
		  * \brief Constructeur neutre de CombiMastermind
		  */
		CombiMastermind();
		
		/*! \fn CombiMastermind(string chaine)
		  * \brief Constructeur de la classe CombiMastermind
		  * \param chaine est la chaine de caractère comprenant la suite de couleur séparée d'espace
		  */
		CombiMastermind(const string &chaine);
		
		CombiMastermind(Combinaison c);
		
		virtual string resultat(const Combinaison code) ;
		
		/*! \fn string toString();
		* \brief permet l'affichage de la combinaison de couleur
		* \return un string
		*/
		string toString();
		
	private:
	
		/*! \fn int bienPlace(CombiMastermind code)
		* \brief renvoie le nombre de couleurs bien placées par rapport à la combinaison du codeur
		* \param code Combinaison : la combinaison de couleur valide recherchée par le décodeur
		* \return un entier
		*/
		int bienPlace(const CombiMastermind code) ;
		
		/*! \fn int malPlace(CombiMastermind code)
		* \brief renvoie le nombre de couleurs appartenant à la combinaison de couleur recherchée mais mal placées
		* \param code Combinaison : la combinaison de couleur valide recherchée par le décodeur
		* \return un entier
		*/
		int malPlace(const CombiMastermind code);
			
};

#endif // COMBIMASTERMIND_H


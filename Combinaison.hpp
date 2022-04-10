#ifndef COMBINAISON_H
#define COMBINAISON_H

#include <string>
#include <iostream>
#include "Menu.hpp"

using std::string;
using namespace std;

/*! \class Combinaison
* \brief Tableau d'entier représentant une combinaison de couleur ou de lettre
* \author Groupe A7
* \version 1.0
* \date avril 2022
*
* Cette classe permet de définir l'objet Combinaison. Elle transforme une chaine de caractère (suite de couleur ou de lettre) séparée d'espace en tableau d'entier. Elle possède un seul attribut : le tableau d'entier.
*/

class Combinaison {
	private:
		int combinaison[10];
	
	public:
		/*! \fn Combinaison(string chaine)
		  * \brief Constructeur de la classe Combinaison
		  * \param chaine est la chaine de caractère comprenant la suite de couleur ou de lettre séparée d'espace
		  */
		Combinaison(string chaine);
		
		/*! \fn setCombinaison(string chaine);
		* \brief setteur de l'attribut combinaison
		* \param chaine string 
		*/
		void setCombinaison(string chaine);
		
		/*! \fn get()
		* \brief getteur de l'attribut combinaison
		* \return un pointeur sur un entier, 
		*/
		int* get();
		
		/*! \fn get(int i)
		* \brief getteur du ième élément de l'attribut combinaison
		* \param i entier : l'indice
		* \return un entier
		*/
		int get(int i);
		
		/*! \fn int bienPlace(Combinaison code)
		* \brief renvoie le nombre d'élément (couleur ou lettre) bien placé par rapport à la combinaison du codeur
		* \param code Combinaison : la combinaison valide recherchée par le décodeur
		* \return un entier
		*/
		int bienPlace(Combinaison code);
		
		/*! \fn int malPlace(Combinaison code)
		* \brief renvoie le nombre d'élément (couleur ou lettre) appartenant à la combinaison du codeur mais mal placé
		* \param code Combinaison : la combinaison valide recherchée par le décodeur
		* \return un entier
		*/
		int malPlace(Combinaison code);
		
		/*! \fn string toString();
		* \brief permet l'affichage de la combinaison
		* \return un string
		*/
		string toString();
		
};

#endif // CODEUR_H


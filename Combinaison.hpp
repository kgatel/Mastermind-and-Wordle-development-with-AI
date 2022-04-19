#ifndef COMBINAISON_H
#define COMBINAISON_H

#include <string>
#include <vector>
#include <iostream>
#include "Menu.hpp"


using namespace std;

/*! \class Combinaison abstraite
* \brief Tableau d'entier représentant une combinaison de couleur ou de lettre
* \author Groupe A7
* \version 1.0
* \date avril 2022
* \namespace std
*
* Cette classe permet de définir l'objet Combinaison. Elle transforme une chaine de caractère (suite de couleur ou de lettre) séparée d'espace en un vecteur de string. Elle possède un seul attribut.
*/

class Combinaison {
	protected:
		vector<string>  combinaison;
	
	public:
		/*! \fn Combinaison()
		  * \brief Constructeur neutre de Combinaison
		  */
		Combinaison();
		
		/*! \fn Combinaison(string chaine)
		  * \brief Constructeur de la classe Combinaison
		  * \param chaine est la chaine de caractère comprenant la suite de couleur ou de lettre séparée d'espace
		  */
		Combinaison(const string &chaine);
		
		/*! \fn void setCombinaison(string chaine);
		* \brief setteur de l'attribut combinaison
		* \param chaine string 
		*/
		void setCombinaison(vector<string> c);
		
		/*! \fn get()
		* \brief getteur de l'attribut combinaison
		* \return retourne un vecteur 
		*/
		vector<string> get() const;
		
		/*! \fn get(int i)
		* \brief getteur du ième élément de l'attribut combinaison
		* \param i entier : l'indice
		* \return un entier
		*/
		string get(const int i) const;
		
		/*! \fn string toString() abstraite;
		* \brief permet l'affichage de la combinaison
		* \return un string
		*/
		virtual string toString();
			
};

#endif // COMBINAISON_H


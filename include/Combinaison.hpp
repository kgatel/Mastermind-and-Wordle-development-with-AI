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
		
		/*! \fn Combinaison()
		  * \brief Constructeur neutre de Combinaison
		  * \param v : un vecteur de chaîne de caractères
		  */
		
		Combinaison(vector<string> v);
		
		/*! \fn void setCombinaison(string chaine);
		* \brief setteur de l'attribut combinaison
		* \param c : un vecteur de chaîne de caractères
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
		* \return une chaîne de caractère
		*/
		string get(const int i) const;
		
		/*! \fn resultat(combinaison: code);
		* \brief elle permet de retourner le resultat aorès une tentative
		* \param code atibut de type combinaison
		* \return une chaîne de caractère
		*/
		virtual string resultat(Combinaison code);
		
		/*! \fn string toString() abstraite;
		* \brief permet l'affichage de la combinaison
		* \return un string
		*/
		virtual string toString();
			
};

#endif // COMBINAISON_H


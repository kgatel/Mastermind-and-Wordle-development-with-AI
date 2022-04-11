#ifndef COMBINAISON_H
#define COMBINAISON_H

#include <string>
#include <vector>
#include <iostream>
#include "Menu.hpp"

using std::string;
using std::vector;
using namespace std;

/*! \class Combinaison
* \brief Tableau d'entier représentant une combinaison de couleur ou de lettre
* \author Groupe A7
* \version 1.0
* \date avril 2022
*
* Cette classe permet de définir l'objet Combinaison. Elle transforme une chaine de caractère (suite de couleur ou de lettre) séparée d'espace en un vecteur de string. Elle possède un seul attribut.
*/

class Combinaison {
	private:
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
		Combinaison(string &chaine);
		
		/*! \fn void setCombinaison(string chaine);
		* \brief setteur de l'attribut combinaison
		* \param chaine string 
		*/
		void setCombinaison(const string chaine);
		
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
		
		/*! \fn int bienPlace(Combinaison code)
		* \brief renvoie le nombre d'élément (couleur ou lettre) bien placé par rapport à la combinaison du codeur
		* \param code Combinaison : la combinaison valide recherchée par le décodeur
		* \return un entier
		*/
		int bienPlace(const Combinaison code) ;
		
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
		
		/*! \fn vector<string> split(const string chaine, char delimiteur);
		* \brief permet de séparer une chaine de caractère
		* \param chaine string : la chaine à découper
		* \param delimiteur char : le caractère qui va servir à séparer les éléments de la chaine (souvent un ' ')
		* \return Renvoie un vecteur de string
		*/
		
		vector<string> split(const string &chaine, char delimiteur) ; 
			
};

#endif // CODEUR_H


#ifndef HUMAIN_H
#define HUMAIN_H

#include <string>

#include "Joueur.hpp"

using std::string;
using namespace std;

/*! \class Humain
* \brief Si le joueur est un humain
* \author Groupe A7
* \version 1.0
* \date avril 2022
*
* Cette classe hérite de la classe Joueur, elle représente l'humain qui devra proposer une combinaison à trouver pour le joueur décodeur. Elle possède les mêmes attributs que Joueur avec un argument en plus, le mot de passe qui sera demandé au moment de voir la combinaison cherchée s'il le souhaite durant une partie.
*/

class Humain: public Joueur {
	public:
	
		/*! \fn abstract bool verifierEntree(string entree)
		  * \brief une méthode abstraite qui permettera de vérifier la syntaxe de l'entrée selon le mode de jeu
		  * \param string entree
		  * \return un booléen
		  */
		virtual bool verifierEntree(string entree)=0;
		
		/*! \fn void split(const string chaine, char delimiteur, vector elements);
		* \brief permet de séparer une chaine de caractère et de mettres les éléments dans un vecteur
		* \param chaine string : la chaine à découper, delimiteur char : le caractère qui va servir à séparer les éléments de la chaine (souvent un ' '), elements vector: le vecteur crée avec les différents éléments 
		* \param char delimiteur caractère précisant où séparer la chaine
		* \return un vecteur
		*/
		vector<string> split(const string &chaine, char delimiteur) ; 
	};
#endif // HUMAIN_H

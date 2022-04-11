#ifndef JOUEUR_H
#define JOUEUR_H

#include <string>
#include "Combinaison.hpp"

/*! \class Joueur
* \brief classe abstraite regroupant tout joueur
* \author Groupe A7
* \version 1.0
* \date avril 2022
*
* Il s’agit d’une classe abstraite qui définit tout joueur du Mastermind. On y retrouve deux attributs, le premier est un élément de la classe combinaison et le second est le nombre de tours écoulés qui est équivalent au nombre de combinaisons entrées par le joueur décodeur. 
* */

class Joueur {
	private:
		Combinaison combinaison;
		static int numeroTour;

public:
		/*! \fn Joueur()
		* \brief Constructeur de la classe joueur
		*/
		Joueur();
		
		/*! \fn Joueur(Combinaison comb,int nb)
		  * \brief Constructeur de la classe joueur avec paramètre
		  * \param comb la combinaison 
		  * \param nb le nombre de tour
		  */
		Joueur(Combinaison comb,int nb);
		
		/*! \fn Combinaison getCombinaison()
		* \brief Pour accéder à l'attribut combinaison 
		* \return retourne la combinaison en attribut
		*/
		Combinaison getCombinaison();
		
		/*! \fn int getnumeroTour();
		* \brief Pour accéder à l'attribut numeroTour 
		* \return un entier
		*/
		int getnumeroTour();
		
		/*! \fn void entrerCombinaison();
		* \brief Méthode demandant la saisie d'une combinaison
		*/
		void entrerCombinaison();
	
		/*! \fn void split(const string chaine, char delimiteur, vector elements);
		* \brief permet de séparer une chaine de caractère et de mettres les éléments dans un vecteur
		* \param chaine string : la chaine à découper, delimiteur char : le caractère qui va servir à séparer les éléments de la chaine (souvent un ' '), elements vector: le vecteur crée avec les différents éléments 
		* \return un vecteur
		*/
		
		vector<string> split(const string &chaine, char delimiteur) ; 
		
		/*! \fn bool verification(const string &chaine);
		* \brief permet de verifier une chaine de caractère pour savoir si elle peut être transformée en combinaison
		* \param chaine string : la chaine à vérifier
		* \return un booleen
		*/
		bool verification(const string chaine);
	};

#endif // JOUEUR_H


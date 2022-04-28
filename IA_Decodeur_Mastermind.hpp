#ifndef IA_Decodeur_Mastermind_H
#define IA_Decodeur_Mastermind_H
#include <string>

#include "Combinaison.hpp"
#include "IA_Decodeur.hpp"

/*! \class IA_Decodeur_Mastermind
* \brief Cette classe est utilisée pour représenter un joueur artificiel (IA) en mode Decodeur dans le mode de jeu Mastermind
* \author Groupe A7
* \version 1.0
* \date avril 2022
* \namespace std
*
*/

class IA_Decodeur_Mastermind : public IA_Decodeur{

	public : 
	
		/*! \fn IA_Decodeur_Mastermind()
		  * \brief Constructeur de la classe IA_Decodeur_Mastermind
		  */
		IA_Decodeur_Mastermind();
		
		/*! \fn vector<Combinaison> Combi_possible()
		* \brief Cette méthode abstraite permet de créer l'ensemble S de toutes les combinaisons possibles dans le cas du Mastermind ou prendre l'ensemble des mots présents sur le dictionnaire pour le Wordle.
		* \return retourne une liste de combinaison
		*/
		vector<Combinaison> Combi_possible();
		  
		/*! \fn void Maj_ensemble()
		* \brief Si la proposition est incorrecte, cette méthode permet retirer de S tout code qui ne donnerait pas la même réponse si la supposition actuelle était le code.
		*/
		void Maj_ensemble();
		  
	  	/*! \fn Combinaison Choisir_combi()
	 	* \brief Cette méthode permet de choisir la prochaine proposition soit dans l’ordre de son apparition dans l’ensemble, soit en choisissant une de manière aléatoire, soit en utilisant l’algorithme MinMax.
		*\return retourne une combinaison
		*/
		Combinaison* Choisir_combi();

		virtual void jouer();

};

#endif 

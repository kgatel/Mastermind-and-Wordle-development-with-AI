#ifndef IA_Decodeur_H
#define IA_Decodeur_H

#include "IA.hpp"
#include "Combinaison.hpp"
/*! \class IA_Decodeur
* \brief Cette classe abstraite permet de décrire l'intelligence artificielle en mode Decodeur peu importe le mode de jeu (Mastermind ou wordle).
* \author Groupe A7
* \version 1.0
* \date avril 2022
* \namespace std
*
*/

class IA_Decodeur : public IA {
		
	public :	
		
		/*! \fn IA_Decodeur()
		  * \brief Constructeur de la classe IA_Decodeur
		  */
		IA_Decodeur();
		
		/*! \fn virtual vector<Combinaison> Combi_possible()
		* \brief Cette méthode abstraite permet de créer l'ensemble S de toutes les combinaisons possibles dans le cas du Mastermind ou prendre l'ensemble des mots présents sur le dictionnaire pour le Wordle.
		* \return retourne une liste de combinaison
		*/
		virtual vector<Combinaison> Combi_possible()=0;
		  
		/*! \fn virtual void Maj_ensemble()
		* \brief Si la proposition est incorrecte, cette méthode permet retirer de S tout code qui ne donnerait pas la même réponse si la supposition actuelle était le code.
		*/
		virtual void Maj_ensemble()=0;
		  
	  	/*! \fn virtual Combinaison Choisir_combi()
	 	* \brief Cette méthode permet de choisir la prochaine proposition soit dans l’ordre de son apparition dans l’ensemble, soit en choisissant une de manière aléatoire, soit en utilisant l’algorithme MinMax.
		*\return retourne une combinaison
		*/
		virtual Combinaison Choisir_combi()=0;		
};

#endif 

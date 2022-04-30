#ifndef IA_Decodeur_Wordle_H
#define IA_Decodeur_Wordle_H
#include <string>

#include "Combinaison.hpp"
#include "IA_Decodeur.hpp"
#include "CombiMastermind.hpp"


/*! \class IA_Decodeur_Wordle
* \brief Cette classe est utilisée pour représenter un joueur virtuel (IA) en mode Decodeur dans le mode de jeu Wordle
* \author Groupe A7
* \version 1.0
* \date avril 2022
* \namespace std
*
*/

class IA_Decodeur_Wordle : public IA_Decodeur{

	public :
	
		/*! \fn IA_Decodeur_Wordle()
		  * \brief Constructeur de la classe IA_Decodeur_Wordle
		  */
		IA_Decodeur_Wordle();
		
		/*! \fn vector<Combinaison> Combi_possible()
		* \brief Cette méthode abstraite permet de créer l'ensemble S de toutes les combinaisons de couleurs possibles.
		* \return retourne une liste de combinaison
		*/
		virtual vector<Combinaison> Combi_possible();
		  
		/*! \fn void Maj_ensemble()
		* \brief Si la proposition est incorrecte, cette méthode permet retirer de S tout code qui ne donnerait pas la même réponse si la supposition actuelle était le code.
		*/
		virtual void Maj_ensemble(CombiMastermind combi,int bienPlace,int malPlace,vector<Combinaison> ensemble);	
		
		Combinaison choixCombinaisonWordle(CombiMastermind combi,int bienPlace,int malPlace,vector<Combinaison> ensemble);
		
		virtual Combinaison choisirCombinaison();
		
		virtual void jouer();

	
};

#endif

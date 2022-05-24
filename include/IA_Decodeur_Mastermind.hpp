#ifndef IA_Decodeur_Mastermind_H
#define IA_Decodeur_Mastermind_H
#include <string>

#include "Combinaison.hpp"
#include "CombiMastermind.hpp"

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
		virtual vector<Combinaison> Combi_possible();
		  
		/*! \fn void Maj_ensemble()
		* \brief Si la proposition est incorrecte, cette méthode permet retirer de S tout code qui ne donnerait pas la même réponse si la supposition actuelle était le code.
		*/
		virtual void Maj_ensemble(Combinaison combi,string resultat);
		
		/*! \fn choisirCombinaison()
		* \brief Cette méthode permet de a l'IA de choisir une combinaison parmis l'ensemble.
		* \return retourne la combinaison choisie
		*/
	  	virtual Combinaison choisirCombinaison();

		/*! \fn jouer()
		* \brief Méthode qui Permet de lancer la partie mastermind avec IA décodeur
		*/
		virtual void jouer();
		

	
	private:
		vector<Combinaison> ensemble;
		
		vector<string> produit(vector<string> ensemble,vector<string> colorset);

};

#endif 

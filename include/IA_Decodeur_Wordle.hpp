#ifndef IA_Decodeur_Wordle_H
#define IA_Decodeur_Wordle_H

#include <string>
#include "FonctionsUtiles.hpp"


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
		
		/*! \fn Combi_possible()
		* \brief Cette méthode abstraite permet de créer l'ensemble S de toutes les combinaisons de couleurs possibles.
		* \return retourne une liste de combinaison
		*/
		virtual vector<Combinaison> Combi_possible();
		  
		/*! \fn Maj_ensemble()
		* \brief Si la proposition est incorrecte, cette méthode permet retirer de S tout code qui ne donnerait pas la même réponse si la supposition actuelle était le code.
		* \param combi la combinaison saisie
		* \param resultat string
		*/
		virtual void Maj_ensemble(Combinaison combi,string resultat);
		
		/*! \fn choisirCombinaison()
		* \brief Cette méthode permet de a l'IA de choisir une combinaison parmis l'ensemble.
		* \return retourne la combinaison choisie
		*/
		Combinaison choisirCombinaison();
		
		/*! \fn jouer()
		* \brief Méthode qui Permet de lancer la partie wordle avec IA décodeur
		*/
		virtual void jouer();
		
	private:
	
		vector<Combinaison> toutLesMotsCombi;

	
};

#endif

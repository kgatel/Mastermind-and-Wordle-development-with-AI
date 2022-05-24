#ifndef JEU_DE_DEDUCTION
#define JEU_DE_DEDUCTION

#include <string>
#include <iostream>
#include <vector>
#include "Menu.hpp"
#include "Joueur.hpp"
#include "Combinaison.hpp"

using namespace std;

/*! \class JeuDeDeduction
* \brief Classe principale permettant de lancement d'une partie. Elle comprend le main et
* \author Groupe A7
* \version 1.0
* \date avril 2022
* \namespace std
*
* Cette classe permet de définir un jeu de déduction dans son intégralité, elle a comme attribut les joueurs, la combinaison et le menu pour récuperer les constantes. 
*/
class JeuDeDeduction {
	protected:
		Joueur *codeur,*decodeur;
		vector<Combinaison> historiqueCombinaison; //historique des combinaisons
		int numeroTour; //numéro du tour initial
		Menu menu; //menu qui a été initialisé
		vector<string> historiqueResultat;	//pour Wordle c'est le mot avec les couleurs vert et jaune, pour Mastermind on colle le résultatBienPlacé et resultatMalplacé exemple 31 -> 3 bien placés -- 1 mal placé
	
	public:
	
		/*! \fn JeuDeDeduction();
		  * \brief Constructeur neutre de la classe JeuDeDeduction
		  */
		JeuDeDeduction();
		
		/*! \fn JeuDeDeduction();
		  * \brief Constructeur neutre de la classe JeuDeDeduction avec paramètres
		  * \param codeur : joueur codeur qui propose une combinaison 
		  * \param decodeur : joueur décodeur qui va deviner la combinaison
		*/
		JeuDeDeduction(Joueur *codeur1, Joueur *decodeur1);

		/*! \fn ~JeuDeDeduction();
		  * \brief Déstructeur de la classe JeuDeDeduction
		  */
		virtual ~JeuDeDeduction(){}
		
		
		
		/*! \fn void partie() 
		* \brief Cette méthode abstraite permet de lancer une partie une fois que les paramètres et le mode de jeu ont bien été choisi par le joueur s'il le souhaite
		*/		
		virtual void partie()=0;

		
		/*! \fn void afficherPartie()
		* \brief Cette méthode abstraite permet d’afficher le jeu entier comprenant les historiques des combinaisons rentrées avec le résultat de comparaison avec le code associé (nombre de couleur bien placé et mal placé). Cette méthode ne permet pas d’afficher le code car nous sommes du point de vue décodeur.
		*/
		virtual void afficherHistorique()=0;
		

		/*! \fn Joueur detectionVictoire()
		* \brief Cette méthode permet de savoir s'il y a un gagnant au cours de la partie ou non
		* \return Renvoie le joueur gagant s'il en existe un, sinon elle retourne null
		*/
		Joueur* detectionVictoire();
		
		/*! \fn int getTour();
		* \brief Cette méthode permet de savoir le numéro du tour surlequelle le joueur est en train de jouer
		* \return renvoie un entier
		*/
		int getTour();
		
		/*! \fn void incrTour();
		* \brief Cette méthode permet d'incrémenter de 1 l'attribut numeroTour
		*/
		void incrTour();
		
};

#endif // JEU_DE_DEDUCTION


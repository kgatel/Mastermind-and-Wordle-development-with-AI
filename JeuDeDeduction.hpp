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
* Cette classe permet de définir l'objet Combinaison. Elle transforme une chaine de caractère (suite de couleur ou de lettre) séparée d'espace en tableau d'entier. Elle possède un seul attribut : le tableau d'entier.
*/

class JeuDeDeduction {
	protected:
		Joueur *codeur,*decodeur;
		vector<Combinaison> HistoriqueCombinaison;
		int numeroTour;
		Menu menu;
		vector<string> historiqueResultatBienPlace,historiqueResultatMalPlace;
	
	public:
	
		/*! \fn JeuDeDeduction();
		  * \brief Constructeur neutre de la classe JeuDeDeduction
		  */
		JeuDeDeduction();
		
		/*! \fn JeuDeDeduction();
		  * \brief Constructeur neutre de la classe JeuDeDeduction avec paramètres
		  * \param codeur : joueur codeur
		  * \param decodeur : joueur décodeur
		  * \param HistoriqueCombinaison : historique des combinaisons
		  * \param numeroTour : numéro du tour initial
		  * \param menu : menu qui a été initialisé
		  * \param historiqueResultatBienPlace : tableau de string permettant de stocker les résultats des combinaisons entrées
		  * \param historiqueResultatMalPlace : tableau de string permettant de stocker les résultats des combinaisons entrées
		  */
		JeuDeDeduction(Joueur *codeur1, Joueur *decodeur1,Menu menu1);
		virtual ~JeuDeDeduction(){}
		
		virtual int main();
		
		/*! \fn void partie() 
		* \brief Cette méthode abstraite permet de lancer une partie une fois que les paramètres et le mode de jeu ont bien été choisi par le joueur s'il le souhaite
		*/		
		virtual void partie()=0;

		
		/*! \fn void afficherPartie()
		* \brief Cette méthode abstraite permet d’afficher le jeu entier comprenant les historiques des combinaisons rentrées avec le résultat de comparaison avec le code associé (nombre de couleur bien placé et mal placé). Cette méthode ne permet pas d’afficher le code car nous sommes du point de vue décodeur.
		*/
		virtual void afficherPartie()=0;
		
		/*! \fn void afficherCode();
		* \brief Cette méthode permet au joueur codeur de regarder son code discrètement. Pour activer cette méthode il faudra rentrer un mot de passe. Si le mot de passe rentré est le même que l’attribut du codeur alors le code sera affiché quelques secondes.
		*/
		void afficherCode();
		
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


#ifndef MENU_H
#define MENU_H

#include <string>


using std::string;
using namespace std;

/*! \class Menu
* \brief La classe Menu permet à l'utilisateur de choisir le mode et les parametres du jeu
* \author Groupe A7
* \version 1.0
* \date avril 2022
*
*/

class Menu {

	public:

		int NB_ELEMENT;
		int ENSEMBLE_ELEMENT;
		int NB_CASE;
		int NB_TOUR;
		int ModeDeJeu;	
		
		/*! \fn afficherMenu()
		* \brief getteur de l'attribut motDePasse
		*/
		void afficherMenu();
		  
		/*! \fn ChoisirModeDeJeu(int ModeDeJeu)
		* \brief Fonction qui permet à l'utilisateur de choisir le mode de jeu
		* \param ModeDejeu est un entier qui indique le mode Joueur contre Joueur ou Joueur contre IA
		*/
		void choisirModeDeJeu(int ModeDeJeu);
		  
	  	/*! \fn parametreDeJeu(NB_ELEMENT,ENSEMBLE_ELEMENT,NB_CASE,NB_TOUR)
	 	* \brief Fonction qui permet à l'utilisateur de choisir le parametre de jeu
	 	* \param NB_ELEMENT indique le nombre d'éléments constitutifs parmi lesquels on choisit pour la combinaision à faire deviner qui sera de taille NB_CASE, ENSEMBLE_ELEMENT définit si on choisit de jouer avec des couleurs ou des lettres, NB_TOUR le nombre de tours maximale pour faire deviner la combinaison
		*/		
		void parametreDeJeu(int NB_ELEMENT,int ENSEMBLE_ELEMENT,int NB_CASE,int NB_TOUR);
		
};

#endif //MENU_H

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
* Cette classe hérite de la classe Joueur, elle représente l'humain ou l'ordi/IA qui devra proposer une combinaison à trouver pour le joueur décodeur. Elle possède les mêmes attributs que Joueur avec un argument en plus, le mot de passe qui sera demandé au moment de voir la combinaison cherchée s'il le souhaite durant une partie.
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
		*/
		void choisirModeDeJeu(int ModeDeJeu);
		  
	  	/*! \fn parametreDeJeu(NB_ELEMENT,ENSEMBLE_ELEMENT,NB_CASE,NB_TOUR)
	 	* \brief Fonction qui permet à l'utilisateur de choisir le parametre de jeu
		*/		
		void parametreDeJeu(int NB_ELEMENT,int ENSEMBLE_ELEMENT,int NB_CASE,int NB_TOUR);
		
};

#endif //MENU_H

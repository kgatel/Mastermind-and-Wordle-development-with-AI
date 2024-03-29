#ifndef MENU_H
#define MENU_H

#include <string>
#include <vector>

using std::string;
using namespace std;

/*! \class Menu
* \brief La classe Menu permet à l'utilisateur de choisir le mode et les parametres du jeu
* \author Groupe A7
* \version 1.0
* \date avril 2022
* \namespace std
*/

class Menu {

	public:
		static string JEU;  //Mastermind ou Wordle
		static int NB_ELEMENT;
		static string ENSEMBLE_ELEMENT;
		static int NB_CASE;
		static int NB_TOUR;
		static int Langue; //1 pour Francais , 2 pour Anglais
		static int ModeDeJeu;
		
		/*! \fn Menu()
		  * \brief Constructeur de la classe Menu
		  */
		Menu();
		
		/*! \fn Menu(int nbcase,int nbtour,int langue)
		  * \brief Constructeur de la classe Menu avec paramètres
		  * \param nbcase un entier pour definir le nombre de case
		  * \param nbtour un entier pour définir le nombre de tour de la partie
          * \param langue un entier (1 ou 2) pour définir la lanque de jeu dans le cas de wordle
		  */
		Menu(int nbcase,int nbtour,int langue);

		/*! \fn afficherMenu()
		* \brief affiche le menu.
		*/
		void afficherMenu();
		
		/*! \fn choisirJeu(const string &jeu)
		* \brief Fonction qui permet à l'utilisateur de choisir le jeu
		* \param jeu est une chaîne de caractère qui indique le jeu choisi
		*/
		void choisirJeu(const string &jeu);
		  
		/*! \fn ChoisirModeDeJeu(int mdj)
		* \brief Fonction qui permet à l'utilisateur de choisir le mode de jeu
		* \param mdj est un entier qui indique le mode Joueur contre Joueur ou Joueur contre IA
		*/
		void choisirModeDeJeu(int mdj);
		
		/*! \fn choisirDifficulteIA()
		* \brief Fonction qui permet à l'utilisateur de choisir la difficulté de l'IA
		*/
		void choisirDifficulteIA();
		  
	  	/*! \fn parametreDeJeu(NB_ELEMENT,ENSEMBLE_ELEMENT,NB_CASE,NB_TOUR)
	 	* \brief Fonction qui permet à l'utilisateur de choisir le parametre de jeu
	 	* \param NB_ELEMENT indique le nombre d'éléments constitutifs parmi lesquels on choisit pour la combinaision à faire deviner
		* \param NB_CASE indique la taille du tableau d'entier combinaison
		* \param ENSEMBLE_ELEMENT définit si on choisit de jouer avec des couleurs ou des lettres
		* \param NB_TOUR le nombre de tours maximale pour faire deviner la combinaison
		*/
		void parametreDeJeu(int NB_ELEMENT,string ENSEMBLE_ELEMENT,int NB_CASE,int NB_TOUR);

		/*! \fn appartientEE(string couleur)
		 * \brief Fonction qui permet de vérifier si une combinaison de couleurs est valide syntaxiquement ou non.
		 * \param couleur est un string qui correspond à une succession de couleurs différentes définissant une combinaison
		 */ 
		bool appartientEE(string couleur);
		
		/*! \fn appartientDico(string mot)
		 * \brief Fonction qui permet de vérifier si un mot est reconnu par le dictionnaire Wordle ou non
		 * \param mot est une combinaison qui correpond à un mot de la langue francaise 
		 */
		bool appartientDico(string mot); 
		
};

#endif //MENU_H

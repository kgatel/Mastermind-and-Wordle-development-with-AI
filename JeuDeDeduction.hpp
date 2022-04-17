#ifndef MASTERMIND_H
#define MASTERMIND_H

#include <string>
#include <iostream>
#include "Menu.hpp"
#include "Joueur.hpp"
#include "Combinaison.hpp"

using std::string;
using namespace std;

/*! \class JeuDeDeduction
* \brief Classe principale permettant de lancement d'une partie. Elle comprend le main et
* \author Groupe A7
* \version 1.0
* \date avril 2022
*
* Cette classe permet de définir l'objet Combinaison. Elle transforme une chaine de caractère (suite de couleur ou de lettre) séparée d'espace en tableau d'entier. Elle possède un seul attribut : le tableau d'entier.
*/

class JeuDeDeduction {
	private:
		Joueur codeur,decodeur;
		Combinaison HistoriqueCombinaison[20];
		int numeroTour;
		Menu menu;
		string historiqueResultatBienPlace[20,historiqueResultatMalPlace[20];
	
	public:
		/*! \fn Combinaison(string chaine)
		  * \brief Constructeur de la classe Combinaison
		  * \param chaine est la chaine de caractère comprenant la suite de couleur ou de lettre séparée d'espace
		  */
		JeuDeDeduction(const string chaine);
		
		/*! \fn int main()
		* \brief méthode principale, elle permet de lancement du jeu
		*/
		int main();
		
		/*! \fn void partie() 
		* \brief Elle permet de lancer une partie une fois que les paramètres et le mode de jeu ont bien été choisi par le joueur s'il le souhaite
		*/		
		void partie();
		
		
		/*! \fn void afficherPartie()
		* \brief Cette méthode permet d’afficher le jeu entier comprenant les historiques des combinaisons rentrées avec le résultat de comparaison avec le code associé (nombre de couleur bien placé et mal placé). Cette méthode ne permet pas d’afficher le code car nous sommes du point de vue décodeur.
		*/
		void afficherPartie();
		
		/*! \fn void afficherCode();
		* \brief Cette méthode permet au joueur codeur de regarder son code discrètement. Pour activer cette méthode il faudra rentrer un mot de passe. Si le mot de passe rentré est le même que l’attribut du codeur alors le code sera affiché quelques secondes.
		*/
		void afficherCode();
		
		/*! \fn int bienPlace(Combinaison code)
		* \brief Cette méthode permet de savoir s'il y a un gagnant au cours de la partie ou non
		* \return Renvoie le joueur gagant s'il en existe un, sinon elle retourne null
		*/
		Joueur detectionVictoire();
		*/
		int getTour();
		*/
		void incrTour();
		
};

#endif // CODEUR_H

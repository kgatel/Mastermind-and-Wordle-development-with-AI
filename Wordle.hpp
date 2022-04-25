#ifndef WORDLE_H
#define WORDLE_H

#include <string>
#include <iostream>
#include "Menu.hpp"
#include "Joueur.hpp"
#include "Combinaison.hpp"
#include "JeuDeDeduction.hpp"

using std::string;
using namespace std;

/*! \class Wordle
* \brief Classe principale permettant de lancement d'une partie de Wordle.
* \author Groupe A7
* \version 1.0
* \date avril 2022
* \namespace std
*
* Cette classe permet de définir l'objet Combinaison. Elle transforme une chaine de caractère (lettre) séparée d'espace en tableau d'entier. 
*/


class Wordle : public JeuDeDeduction {
		
		/*! \fn Wordle();
		  * \brief Constructeur neutre de la classe Wordle
		  */
		Wordle();
		
		/*! \fn Wordle(string fichierDictionnaire)
		  * \brief Constructeur de la classe Wordle selon un fichier
		  * \param fichierDictionnaire : nom du fichier comprenant l'ensemble des mots formant le dictionnaire
		*/
		Wordle(Joueur codeur1, Joueur decodeur1, vector<Combinaison> HistoriqueCombinaison1,int numeroTour1,Menu menu1,vector<string> historiqueResultatBienPlace1,vector<string> historiqueResultatMalPlace1);
		
		/*! \fn void partie() 
		* \brief Elle permet de lancer une partie une fois que les paramètres et le mode de jeu ont bien été choisi par le joueur s'il le souhaite
		*/		
		void partie(Joueur Codeur, Joueur Decodeur);
		
		/*! \fn void afficherPartie()
		* \brief Cette méthode permet d’afficher le jeu entier comprenant les historiques des combinaisons rentrées avec le résultat de comparaison avec le code associé (nombre de couleur bien placé et mal placé). Cette méthode ne permet pas d’afficher le code car nous sommes du point de vue décodeur.
		*/
		void afficherPartie();
		
};
#endif // WORDLE_H


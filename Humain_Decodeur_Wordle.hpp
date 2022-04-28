#ifndef Humain_Decodeur_Wordle_H
#define Humain_Decodeur_Wordle_H
#include <string>
#include "CombiWordle.hpp"
#include "Humain_Decodeur.hpp"


/*! \class Humain_Decodeur_Wordle
* \brief Cette classe est utilisée pour représenter un joueur humain en mode decodeur dans le mode de jeu Wordle
* \author Groupe A7
* \version 1.0
* \date avril 2022
* \namespace std
*
*/

class Humain_Decodeur_Wordle : public Humain_Decodeur{
	private:
		/*! \fn choixFichier(string mot)
		* \brief méthode permettant de choisir le fichier correspondant selon le mot rentré par l'utilisateur
		* \param chaine string : le mot rentré par l'utilisateur
		*\return retourne le nom du répertoire du fichier 
		*/
		string choixFichier(string mot);
		
	public:
		/*! \fn Humain_Decodeur_Wordle()
		  * \brief Constructeur de la classe Humain_Codeur_Decodeur
		  */
		Humain_Decodeur_Wordle();
		
		/*! \fn Combinaison entrerCode()
		* \brief méthode permettant à l'utilisateur de saisir le code que le joueur décodeur devra ensuite deviner
		*\return retourne le code saisi par le joueur codeur
		*/
		virtual Combinaison entrerCombinaison();
		  
		/*! \fn bool VerifierEntree(string entree)()
		* \brief Méthode qui Permet de vérifier si l'entrée du joueur codeur peut être interpréter en un mot du dictionnaire du jeu Wordle
		*\return retourne un booleen, true si la chaîne peut être considérée comme un mot du dictionnaire et false sinon
		*/
		bool verifierEntree(string entree);
		
		virtual void jouer();

	
};

#endif 

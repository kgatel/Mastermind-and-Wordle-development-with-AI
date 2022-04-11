#ifndef CODEUR_H
#define CODEUR_H

#include <string>

#include "Joueur.hpp"

using std::string;
using namespace std;

/*! \class Codeur
* \brief Joueur proposant la combinaison recherchée
* \author Groupe A7
* \version 1.0
* \date avril 2022
*
* Cette classe hérite de la classe Joueur, elle représente l'humain ou l'ordi/IA qui devra proposer une combinaison à trouver pour le joueur décodeur. Elle possède les mêmes attributs que Joueur avec un argument en plus, le mot de passe qui sera demandé au moment de voir la combinaison cherchée s'il le souhaite durant une partie.
*/

class Codeur {
	private:
		string motDePasse;
	
	public:
		/*! \fn Codeur(string mdp)
		  * \brief Constructeur de la classe Codeur
		  * \param mdp le mot de passe du joueur codeur
		  */
		Codeur(string mdp);
		
		/*! \fn void setMdp(string mdp);
		* \brief setteur de l'attribut motDePasse
		* \param mdp string 
		*/
		void setMdp(string mdp);
		
		/*! \fn string getMdp()
		* \brief getteur de l'attribut motDePasse
		* \return une chaine de caractère
		*/
		string getMdp();
		
};

#endif // CODEUR_H


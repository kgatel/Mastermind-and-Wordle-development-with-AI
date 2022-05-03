#ifndef JOUEUR_H
#define JOUEUR_H

#include <string>
#include "Combinaison.hpp"

/*! \class Joueur
* \brief classe abstraite regroupant tous les joueurs (humain et IA)
* \author Groupe A7
* \version 1.0
* \date avril 2022 
* \namespace std 
*/

class Joueur {
	protected:
		Combinaison combinaison;
		string pseudo;
		string historiqueRes;

	public:
		/*! \fn Joueur()
		* \brief Constructeur de la classe joueur
		*/
		Joueur();
		
		/*! \fn Joueur()
		  * \brief Constructeur de la classe joueur avec paramètre
		  * \param pseudo du joueur
		  */
		Joueur(string pseudo1);
		
		/*! \fn Combinaison getCombinaison()
		 *  \brief Pour accéder à l'attribut combinaison 
		 *  \return retourne la combinaison en attribut
		 */
		Combinaison getCombinaison();
		
		/*! \fn void setCombinaison(combinaison comb);
		* \brief setteur de l'attribut combinaison
		* \param une combinaison 
		*/
		void setCombinaison(Combinaison comb);
		
		/*! \fn void entrerPseudo();
		* \brief Pour permettre au joueur de choisir un pseudo 
		*/
		void entrerPseudo();
		
		/*! \fn string getPseudo();
		* \brief getteur de l'attribut Pseudo
		* \return retourne le pseudo en attribut
		*/
		string getPseudo();
		
		/*! \fn void setPseudo(string nom);
		* \brief setteur de l'attribut Pseudo
		* \param un string nom
		*/
		void setPseudo(string nom);
		
		/*! \fn string toString() abstraite;
		* \brief permet l'affichage du pseudo
		* \return un string
		*/
		string toString();
		void set_historiqueRes(string res);
		virtual void jouer()=0;
	};

#endif // JOUEUR_H


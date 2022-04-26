#ifndef JOUEUR_H
#define JOUEUR_H

#include <string>
#include "Combinaison.hpp"

/*! \class Joueur
* \brief classe abstraite regroupant tout joueur
* \author Groupe A7
* \version 1.0
* \date avril 2022 
* \namespace std
*
* Il s’agit d’une classe abstraite qui définit tout joueur du Mastermind. On y retrouve deux attributs, le premier est un élément de la classe combinaison et le second est le nombre de tours écoulés qui est équivalent au nombre de combinaisons entrées par le joueur décodeur. 
* */

class Joueur {
	protected:
		Combinaison combinaison;
		string pseudo;

	public:
		/*! \fn Joueur()
		* \brief Constructeur de la classe joueur
		*/
		Joueur();
		
		/*! \fn Joueur(string pseudo1)
		  * \brief Constructeur de la classe joueur avec paramètre 
		  * \param pseudo1 du joueur
		  */
		Joueur(string pseudo1);
		
		/*! \fn Combinaison getCombinaison()
		* \brief Pour accéder à l'attribut combinaison 
		* \return retourne la combinaison en attribut
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
		
		virtual void jouer()=0;
	};

#endif // JOUEUR_H


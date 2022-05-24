#ifndef FONCTIONS_UTILES
#define FONCTIONS_UTILES

#include <string>
#include <iostream>
#include <vector>
#include "Menu.hpp"
#include "Joueur.hpp"
#include "Combinaison.hpp"

using namespace std;

/*! \class FonctionsUtiles
* \brief Bibliothèque regroupant des fonctions utiles
* \author Groupe A7
* \version 1.0
* \date avril 2022
* \namespace std
*
* Cette classe permet de regrouper des fonctions utiles.
*/

class FonctionsUtiles {
	
	public:
	
		/*! \fn FonctionsUtiles();
		  * \brief Constructeur neutre de la classe FonctionsUtiles
		*/
		FonctionsUtiles();
		
		/*! \fn vector<string> split(const string &chaine, char delimiteur)
		* \brief méthode permettant de découper une chaine de caractère en plusieurs grâce à un delimiteur
		* \param chaine : chaine à découper
		* \param delimiteur : le séparateur de mot, ici l'espace
		* \return un tableau de string
		*/
		vector<string> split(const string &chaine, char delimiteur);
		
		/*! \fn bool checkMotFichier(string fichier, string mot)
		* \brief méthode qui permet de vérifier si un mot appartient au fichier
		* \param fichier : le chemin d'accés au fichier pour vérifier
		* \param mot : le mot à vérifier
		* \return un booléen si le mot est dans le fichier
		*/
		
		bool checkMotFichier(string fichier, string mot);
		
		/*! \fn bool isNumber(const string& str)
		* \brief méthode permettant de savoir si la chaine est un nombre entier supérieur à 0 ou non
		* \param str : chaine à analyser
		* \return un booléen
		*/
		bool isNumber(const string& str);
		
		/*! \fn string intToString(int a)
		* \brief méthode permettant de transformer un entier en chaine de caractère
		* \param a : entier à transformer
		* \return une chaine de caractère
		*/
		string intToString(int a);
		
		/*! \fn string charToString(char a)
		* \brief méthode permettant de transformer un caractère en chaine de caractère
		* \param c : caractère à transformer
		* \return une chaine de caractère
		*/
		string charToString(char c);
		
		/*! \fn void clear()
		* \brief méthode permettant de nettoyer le terminal
		*/
		void clear();
		
		/*! \fn string vert(string s)
		* \brief méthode permettant de mettre le texte en vert
		* \param s : texte à transformer
		* \return une chaine de caractère
		*/
		string vert(string s);
		
		/*! \fn string rouge(string s)
		* \brief méthode permettant de mettre le texte en rouge
		* \param s : texte à transformer
		* \return une chaine de caractère
		*/
		string rouge(string s);
		
		/*! \fn string jaune(string s)
		* \brief méthode permettant de mettre le texte en jaune
		* \param s : texte à transformer
		* \return une chaine de caractère
		*/
		string jaune(string s);
		
		/*! \fn string bleu(string s)
		* \brief méthode permettant de mettre le texte en bleu
		* \param s : texte à transformer
		* \return une chaine de caractère
		*/
		string bleu(string s);
		
		/*! \fn string violet(string s)
		* \brief méthode permettant de mettre le texte en violet
		* \param s : texte à transformer
		* \return une chaine de caractère
		*/
		string violet(string s);
		
		/*! \fn string blanc(string s)
		* \brief méthode permettant de mettre le texte en blanc
		* \param s : texte à transformer
		* \return une chaine de caractère
		*/
		string blanc(string s);
		
		/*! \fn string cyan(string s)
		* \brief méthode permettant de mettre le texte en cyan
		* \param s : texte à transformer
		* \return une chaine de caractère
		*/
		string cyan(string s);
		
		/*! \fn string carrevert();
		* \brief méthode permettant de renvoyer une carré vert
		* \return une chaine de caractère
		*/
		string carrevert();
		
		/*! \fn string carrerouge();
		* \brief méthode permettant de renvoyer une carré rouge
		* \return une chaine de caractère
		*/
		string carrerouge();
		
		/*! \fn string carrejaune();
		* \brief méthode permettant de renvoyer une carré jaune
		* \return une chaine de caractère
		*/
		string carrejaune();
		
		/*! \fn string carrebleu();
		* \brief méthode permettant de renvoyer une carré bleu
		* \return une chaine de caractère
		*/
		string carrebleu();
		
		/*! \fn string carreviolet();
		* \brief méthode permettant de renvoyer une carré violet
		* \return une chaine de caractère
		*/
		string carreviolet();
		
		/*! \fn string carreblanc();
		* \brief méthode permettant de renvoyer une carré blanc
		* \return une chaine de caractère
		*/
		string carreblanc();
		
		/*! \fn string carreorange();
		* \brief méthode permettant de renvoyer une carré orange
		* \return une chaine de caractère
		*/
		string carreorange();
		
		/*! \fn string carrerose();
		* \brief méthode permettant de renvoyer une carré rose
		* \return une chaine de caractère
		*/
		string carrerose();
		
		/*! \fn string carremarron();
		* \brief méthode permettant de renvoyer une carré marron
		* \return une chaine de caractère
		*/
		string carremarron();
		
		/*! \fn string carrevide();
		* \brief méthode permettant de renvoyer une carré vide
		* \return une chaine de caractère
		*/
		string carrevide();
		
		/*! \fn string toCarre();
		* \brief méthode permettant de transformer une chaine en suite de lettres carrées
		* \param s : chaine à transformer
		* \return une chaine de caractère
		*/
		string toCarre(string s) ;
		
		/*! \fn string blink();
		* \brief méthode permettant de rendre une chaine de caractère clignotante
		* \param s : chaine à transformer
		* \return une chaine de caractère
		*/
		string blink(string s);
		
		/*! \fn string violetclair(string s)
		* \brief méthode permettant de mettre le texte en violetclair et en gras
		* \param s : texte à transformer
		* \return une chaine de caractère
		*/
		string violetclair(string s);
		
		/*! \fn string vertclair(string s)
		* \brief méthode permettant de mettre le texte en vertclair et en gras
		* \param s : texte à transformer
		* \return une chaine de caractère
		*/
		string vertclair(string s);
		
		/*! \fn bool equals(const string& s1,const string& s2)
		* \brief méthode permettant de comparer deux chaines de caractère
		* \param s1 : chaine à comparer
		* \param s2 : chaine à comparer
		* \return un booléen
		*/
		bool equals(const string& s1,const string& s2);
		
};

#endif // FONCTIONS_UTILES

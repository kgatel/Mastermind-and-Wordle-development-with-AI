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
		
		bool isNumber(const string& str);
		
		string intToString(int a);
		
		string charToString(char c);
		
		void clear();
		
		string vert(string s);
		
		string rouge(string s);
		
		string jaune(string s);
		
		string bleu(string s);
		
		string violet(string s);
		
		string blanc(string s);
		
		string cyan(string s);
		
		string carrevert();
		
		string carrerouge();
		
		string carrejaune();
		
		string carrebleu();
		
		string carreviolet();
		
		string carreblanc();
		
		string carreorange();
		
		string carrerose();
		
		string carremarron();
		
		string carrevide();
		
		string blink(string s);
		
		string violetclair(string s);
		
		string vertclair(string s);
		
		bool equals(const string& s1,const string& s2);
		
};

#endif // FONCTIONS_UTILES

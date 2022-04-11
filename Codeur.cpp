#include <iostream>
#include <string>
#include "Codeur.hpp" 
	
	Codeur::Codeur(string mdp):Joueur()
    {
	motDePasse=mdp;
    }
    void Codeur::setMdp(string mdp)
    {
		motDePasse=mdp;
	}
	string Codeur::getMdp()
	{return motDePasse;
	}

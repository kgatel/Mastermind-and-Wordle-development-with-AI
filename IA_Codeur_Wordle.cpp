#include <string>
#include "FonctionsUtiles.hpp"
#include "Combinaison.hpp"
#include "Menu.hpp"
#include "CombiWordle.hpp"
#include "IA_Codeur.hpp"
#include "IA_Codeur_Wordle.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <ncurses.h>
#include <unistd.h>

using namespace std;


IA_Codeur_Wordle :: IA_Codeur_Wordle() : IA_Codeur(){
}

void IA_Codeur_Wordle :: jouer(){
	setCombinaison(CombiWordle(choisirCombinaison()));
}

Combinaison IA_Codeur_Wordle :: choisirCombinaison(){
	return genererCode();
}

Combinaison IA_Codeur_Wordle :: genererCode(){
	FonctionsUtiles f;
	vector<string> Mots;	
	string res;
	ifstream Handle;
	string CurrLine;
	string premiereLettre;
	int random26;
	srand (time(NULL));
	random26=rand()%26+1;
	if (random26==1){premiereLettre="a.txt";}
	if (random26==2){premiereLettre="b.txt";}
	if (random26==3){premiereLettre="c.txt";}
	if (random26==4){premiereLettre="d.txt";}
	if (random26==5){premiereLettre="e.txt";}
	if (random26==6){premiereLettre="f.txt";}
	if (random26==7){premiereLettre="g.txt";}
	if (random26==8){premiereLettre="h.txt";}
	if (random26==9){premiereLettre="i.txt";}
	if (random26==10){premiereLettre="j.txt";}
	if (random26==11){premiereLettre="k.txt";}
	if (random26==12){premiereLettre="l.txt";}
	if (random26==13){premiereLettre="m.txt";}
	if (random26==14){premiereLettre="n.txt";}
	if (random26==15){premiereLettre="o.txt";}
	if (random26==16){premiereLettre="p.txt";}
	if (random26==17){premiereLettre="q.txt";}
	if (random26==18){premiereLettre="r.txt";}
	if (random26==19){premiereLettre="s.txt";}
	if (random26==20){premiereLettre="t.txt";}
	if (random26==21){premiereLettre="u.txt";}
	if (random26==22){premiereLettre="v.txt";}
	if (random26==23){premiereLettre="w.txt";}
	if (random26==24){premiereLettre="x.txt";}
	if (random26==25){premiereLettre="y.txt";}
	if (random26==26){premiereLettre="z.txt";}
	Handle.open(Menu::ENSEMBLE_ELEMENT+"/"+premiereLettre);
	cin.clear();
	if(Handle.is_open()) {
		while (!Handle.eof()){
			getline(Handle,CurrLine);
			Mots.push_back(CurrLine);
		}
	}
	Handle.close();
		
	srand (time(NULL));
	res=Mots[rand() % (int)Mots.size()];	
	cout << f.cyan("Code bien enregistré, décodeur à vous de jouer !") << endl;
	return CombiWordle(res);
}

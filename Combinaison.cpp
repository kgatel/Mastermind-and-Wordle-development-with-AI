#include <vector>
#include "Combinaison.hpp"
#include <cstring>

Combinaison :: Combinaison(string chaine) {
      //combinaison
}

void  Combinaison ::setCombinaison (const string chaine){
	//combinaison = null;
}

std::vector<string> Combinaison :: get() const{
	return combinaison;
}

string Combinaison :: get(const int i) const{
	return combinaison[i];
}

int Combinaison :: bienPlace(const Combinaison code) {
	int res=0;
	for(int i=0;i<(int)combinaison.size();i++){
		if (strcasecmp(combinaison[i].c_str(), code.get(i).c_str()) == 0){ //vérifier si combinaison[i]==code.get(i)
			res++;
		}
	}
	return res;
}

int Combinaison :: malPlace(const Combinaison code) {
	int res=0;
	int j=0;
	bool exit=false;
	for(int i=0;i<(int)combinaison.size();i++){
		//on doit vérifier que l'élément n'est pas bon, ensuite on vérifiera si la couleur ou la lettre existe sur les cases voisines
		if (!strcasecmp(combinaison[i].c_str(), code.get(i).c_str()) == 0){ //vérifier si combinaison[i]!=code.get(i)
			while((j<(int)combinaison.size()) || (exit)){
				if (i!=j){
					if (strcasecmp(combinaison[i].c_str(), code.get(j).c_str()) == 0){ //vérifier si combinaison[i]!=code.get(j) avec i!=j
						res++;
						exit=true;	//on sort pour ne pas compter deux fois s'il l'élément existe deux fois
					}
				}
				j++;
			}
		}
		j=0;
		exit=false;
	}
	return res;
}

string Combinaison :: toString() {
	string res="";
	for (int i=0;i<(int)combinaison.size();i++){
		res+=combinaison[i] + " ";
	}
	return "";
}

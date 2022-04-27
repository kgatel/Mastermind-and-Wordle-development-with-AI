#include "IA.hpp"
#include "Combinaison.hpp"

IA :: IA(){
	Combinaison combinaison();
}
IA::IA(string pseudo1){
	Combinaison combinaison();
	pseudo=pseudo1;
}

Combinaison IA :: choisirCombinaison(){
	return Combinaison(); //cette méthode sera redéfinie dans ses classes inférieures
}

void IA :: jouer(){
	setCombinaison(choisirCombinaison);
}

#include "Humain.hpp"
#include "Combinaison.hpp"

Humain :: Humain(){
	Combinaison combinaison();
}
Humain::Humain(string pseudo1){
	Combinaison combinaison();
	pseudo=pseudo1;
}

bool Humain :: verifierEntree(string entree){
	return false; //cette méthode sera redéfinie dans ses classes inférieures
}
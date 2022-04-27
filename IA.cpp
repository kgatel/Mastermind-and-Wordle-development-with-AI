#include "IA.hpp"
#include "Combinaison.hpp"

IA :: IA(){
	Combinaison combinaison();
}
IA::IA(string pseudo1){
	Combinaison combinaison();
	pseudo=pseudo1;
}

Combinaison IA :: choisirCombinaison(){		//à supprimer car elle est abstraite pure
	return Combinaison();
}

#include <iostream>
#include <string>
#include "Mastermind.hpp"  


int Mastermind::main() 

{ 
	
	Menu* m = new Menu();
	m->afficherMenu();
	Mastermind::partie();
	return 0;
}


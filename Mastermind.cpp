#include <iostream>
#include <string>
#include "Mastermind.hpp"  


int Mastermind::main() 

{ 
	
	Menu menu;
	menu.afficherMenu();
	Mastermind::partie();
	return 0;
}


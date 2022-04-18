#include <iostream>
#include "CombiMastermind.hpp"
#include <vector>

using namespace std;

int main() 
{
	CombiMastermind c;
	vector <string> mots = c.split("kev gat",' ');
    cout << mots[0] << " c'est fou " << mots[1] << "\n";
    cout << "ca marche!\n";
    return 0;
}


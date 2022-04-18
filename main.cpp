#include <iostream>
#include "CombiMastermind.hpp"
#include <vector>

using namespace std;

int main() 
{
	cout << "***************************TEST***************************\n";
	CombiMastermind c1("rouge bleu vert violet orange");
	CombiMastermind c2("blanc vert bleu violet rouge");
    cout << c1.toString() << "\n" << c2.toString() << "\nNombre de couleurs bien placées : " << c1.bienPlace(c2) << "\nNombre de couleurs mal placées : " << c1.malPlace(c2) << "\n";
    cout << "*************************FIN TEST*************************\n";
    return 0;
}


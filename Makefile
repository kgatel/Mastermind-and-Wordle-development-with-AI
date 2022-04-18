FC = g++
OPT = -c

main : Combinaison.o CombiMastermind.o main.o
	$(FC) Combinaison.o CombiMastermind.o main.o -o main
	
main.o : main.cpp CombiMastermind.hpp
	$(FC) $(OPT) main.cpp

JeuDeDeduction.o : JeuDeDeduction.cpp JeuDeDeduction.hpp
	$(FC) $(OPT) JeuDeDeduction.cpp

Combinaison.o : Combinaison.cpp Combinaison.hpp
	$(FC) $(OPT) Combinaison.cpp
	
CombiMastermind.o : CombiMastermind.cpp CombiMastermind.hpp
	$(FC) $(OPT) CombiMastermind.cpp
	
all.o : 

clean : 
	rm *.gch *.o

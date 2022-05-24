# project name (generate executable with this name)
TARGET   = Jeux_de_deduction.exe

CC       = g++
# compiling flags here
CFLAGS   = -std=c++11 -Wall -I.

LINKER   = g++
# linking flags here
LFLAGS   = -Wall -I. -lm -lncurses -lcppunit

# change these to proper directories where each file should be
SRCDIR   = src
INCDIR   = include
OBJDIR   = obj
BINDIR   = bin

SOURCES  := $(wildcard $(SRCDIR)/*.cpp)
INCLUDES := $(wildcard $(INCDIR)/*.hpp)
OBJECTS  := $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
rm       = rm -rf

$(BINDIR)/$(TARGET) : $(OBJECTS)
	@$(LINKER) $^ -o $@ $(LFLAGS)
	@echo "Linking complete!"

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled "$<" successfully!\n"

.PHONY: clean
clean:
	@$(rm) $(OBJECTS)
	@echo "Cleanup complete!"

.PHONY: remove
remove: clean
	@$(rm) $(BINDIR)/$(TARGET)
	@echo "Executable removed!"
	
test : $(OBJECTS)
	@mkdir tmp;
	@mv ./obj/main.o ./tmp/
	@g++ ./obj/*.o ./unitTest/UnitTest.cpp -o ./unitTest/UnitTest $(LFLAGS)
	@mv ./tmp/main.o ./obj/
	@rmdir tmp
	@./unitTest/UnitTest > ./unitTest/resultat.txt
	@echo "Résultats dans le fichier resultat.txt"
	@rm ./unitTest/UnitTest
	@mv cppUnitTest.xml ./unitTest/
       

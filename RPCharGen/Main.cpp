#include <iostream>
#include "Generator.h"
#include "Dice.h"


using namespace std;
void main() {


	//
	srand(static_cast<unsigned int>(time(NULL)));

	Character character;
	Dice dice;
	Generator generator;
	Gender male;
	CharClass cleric;
	Species dwarf;

	cleric.hitDie = 8;
	cleric.className = "Cleric" ;
	
	character.name = "Davy Boy";
	character.inventory.items = {"Floppy Hat", "Thick Leather Belt", "Emerald Dagger", "Umber Hulk Rib"};

	male.identity = "Male";
	male.probability = 10;

	dwarf.names.male = {"Jerry", "Bobby", "Uldrik", "Hamhead"};



	generator.CreateCharacter("PC", true, 5, dwarf, cleric, male);

	system("pause");
}
#include <iostream>
#include "Generator.h"
#include "Dice.h"


using namespace std;
void main() {
    
	Character character;
	Generator generator;
	Gender male;
	CharClass cleric;
	Species dwarf;
    dwarf.names.male = {"Jerry", "Bobby", "Uldrik", "Hamhead"};

	cleric.hitDie = 8;
	cleric.className = "Cleric" ;
	
	character.name = PickRandom(dwarf.names.male);
	character.inventory.items = {"Floppy Hat", "Thick Leather Belt", "Emerald Dagger", "Umber Hulk Rib"};

	male.identity = "Male";
	male.probability = 10;

	



	generator.CreateCharacter("PC", true, 5, dwarf, cleric, male);

	system("pause");
}
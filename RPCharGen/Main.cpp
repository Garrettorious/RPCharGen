#include <iostream>
#include "Generator.h"
//#include "Dice.h"

using namespace std;


void main() {
    

	Species mySpecies;
	mySpecies.names.male = { "Jim", "Bob" };

	Stats myModifiers;
	Character character;
	Generator generator;
	CharClass cleric;
	//genderIdentity myGender = < "Male","Female","Agender","Twospirit" >;

	

	cleric.hitDie = 8;
	cleric.className = "Cleric" ;
	
	//character.name = PickRandom(mySpecies.names.male);
	character.inventory.items = { "Floppy Hat", "Thick Leather Belt", "Emerald Dagger", "Umber Hulk Rib" };

	generator.CreateCharacter("PC", true, 5, mySpecies, cleric, "boop");

	system("pause");
}
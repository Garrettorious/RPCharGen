#include <iostream>
#include "Generator.h"
//#include "Dice.h"

using namespace std;


void main() {
    
	
//	Stats myModifiers;
	Generator generator;
	//Character myCharacter = generator.CreateCharacter();
	
	generator.CreateCharacter("PC", true, 15, Dwarf, Rogue, "Male");

	//So these currently don't print. I think it has something to do with the way I'm creating the structs.
	//I'm currently trying to print a member variable of a struct. 

	//Species * mySpecies; //Made a species pointer...

	
	//mySpecies & Dwarf;

	cout << Dwarf.speciesName << "<----  This should say Dwarf." << endl; //These dont work... WHY???
	cout << Rogue.className << "<---- This should say Rogue." << endl;


	system("pause");
}
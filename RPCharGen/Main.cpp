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
	character.name = "Davy Boy";
	character.inventory.items = {"Floppy Hat", "Thick Leather Belt", "Emerald Dagger", "Umber Hulk Rib"};

	int intArray[] = { 1 , 2 , 3 , 4 , 5 };
	for (auto val : intArray) {cout << val << endl;}

	cout << "-------------------------------" << endl;

	intArray[2] = 12;
	for (auto val : intArray) {cout << val << endl;}

	cout << "-------------------------------" << endl;

	cout << character.name << " checks their pack, inside are these items:" << endl; ;

	for (auto itemName : character.inventory.items) {
		cout << itemName << endl;
	}

	cout << "-------------------------------" << endl;

	cout << dice.Roll(1,6,2) << endl;
	cout << dice.Roll(6) << endl;
	cout << dice.Roll(1, 6) << endl;
	cout << dice.Roll() << endl;

	generator.CreateCharacter();

	system("pause");
}
//Types.h
//Defines all basic data types

#ifndef TYPES_H
#define TYPES_H
#include <string>

using namespace std;


struct Skill {
	string name;
	string ability;
	string description;
};
struct Gender {
	string identity;
	int probability;
	 };

//----------------------------------

struct Names {

	vector<string> male; // Harold, Jeremiah, Uldrik, Aragorn, Frodo, Barry
	vector<string> female; // Maude, Tabitha, Urda, Emelia, Gwendolyn, Gwuinivere
	vector<string> agender; // Pat, Astor, Dendel, Oda, Chud, Antari
	vector<string> last; //Bluejeans, Ironback, Underhill, Took, Napier, Gildroven, Erikkson
	vector<string> prefix; //Doctor, Professor, Captain, Jolly, Goodie, The Magnificent, Brother, Judge, Sergeant, Pastor, High Lord etc.
	vector<string> suffix; //The Feebleminded, The Strong, The Ugly, The Powerful, The Great, Of The Many Arrows, The RedHanded, The Stained etc

};
struct Weight { //the Weight profile for a given race

	int baseWeight;

};
struct Ages { //the Aging profile for a given race
	int youth;
	int midlife;
	int old;
	int venerable;
	int maximum; //to be calculated per species 
};

//----------------------------------

struct Abilities {

	int strength;
	int dexterity;
	int wisdom;
	int intelligence;
	int charisma;
	int constitution;

};

struct Species {

	Abilities abilityMods;
	Skill skillMods;

	Weight weight;
	Ages ages;
	string size;
	int baseSpeed;
	Names names;
	vector<string> languages;

	vector<string> speciesNames;
};

struct CharClass {

	int hitDie;

};

//----------------------------------

struct Inventory {

	vector<string> items;
	vector<string> equipment;

	int copperPieces;
	int silverPieces;
	int goldPieces;
	int platinumPieces;

};

struct Character {

	//should eventually be made generic, and then instanced to hold character data.
	//Will NOT be a generator class, simply a place to hold the data.

	string name = "GenericName";

	Inventory inventory;

	int currentHP = 10;
	int maxHP = 50;

	int level = 0;
	float experience = 0.f;
	int proficiency = 2;

	Abilities abilities;



};

#endif
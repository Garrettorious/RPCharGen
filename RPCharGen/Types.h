//Types.h
//Defines all basic data types

#ifndef TYPES_H
#define TYPES_H

#include <vector>
#include <string>

using namespace std;

struct Names { //species specific Name containers

	vector<string> male; // Harold, Jeremiah, Uldrik, Aragorn, Frodo, Barry
	vector<string> female; // Maude, Tabitha, Urda, Emelia, Gwendolyn, Gwuinivere
	vector<string> agender; // Pat, Astor, Dendel, Oda, Chud, Antari
	vector<string> clan; //Bluejeans, Ironback, Underhill, Took, Napier, Gildroven, Erikkson
	vector<string> prefix; //Doctor, Professor, Captain, Jolly, Goodie, The Magnificent, Brother, Judge, Sergeant, Pastor, High Lord etc.
	vector<string> suffix; //The Feebleminded, The Strong, The Ugly, The Powerful, The Great, Of The Many Arrows, The RedHanded, The Stained etc

};

struct Ages { //the Aging profile for a given race
	int youth;
	int midlife;
	int old;
	int venerable;
	int maximum; //to be calculated per species 
};

struct Stats {

	int strength = 0;
	int dexterity = 0;
	int wisdom = 0;
	int intelligence = 0;
	int charisma = 0;
	int constitution = 0;

};

struct Skill {
	string name;
	string ability;
	string description;
};

struct Species {

	Stats modifiers;

	int weight;
	float height;
	Ages ages;
	string gameSize;
	int speed;
	Names names;

	vector<string> languages;

	vector<Species> subSpecies;
};

struct CharClass {

	int hitDie;
	string className;

};

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

	string name;

	Inventory inventory;

	int currentHP;
	int maxHP;
	float experience;

	Stats baseScores;

	int Level{};
	int Proficiency{};

};


//-----------------------------------



#endif


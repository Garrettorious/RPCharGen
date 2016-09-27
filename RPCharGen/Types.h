//Types.h
//Defines all basic data types

#ifndef TYPES_H
#define TYPES_H

#include <vector>
#include <string>

using namespace std;

/*------------------------BASICS---------------------------*/

struct Names { //species specific Name containers, Filled with Generic Data

	vector<string> male = { "Gene", "Harold", "Jeremiah", "Uldrik", "Aragorn", "Frodo", "Barry" }; 
	vector<string> female = {"Gena", "Maude", "Tabitha", "Urda", "Emelia", "Gwendolyn", "Gwuinivere"};
	vector<string> agender = { "Generico", "Pat", "Astor", "Dendel", "Oda", "Chud", "Antari" }; 

	vector<string> clan = { "Bluejeans", "Ironback", "Underhill", "Took", "Napier", "Gildroven", "Erikkson" }; 

	vector<string> prefix = { "Doctor", "Professor", "Captain", "Jolly", "Goodie", "The Magnificent", "Brother", "Judge", "Sergeant", "Pastor", "High Lord", "King" }; 
	vector<string> suffix = { "The Feebleminded", "The Strong", "The Ugly", "The Powerful", "The Great", "Of The Many Arrows", "The RedHanded", "The Stained" };
};

struct Age { //the Aging profile for a given race, Filled with Generic Data
	int youth;// = 20;
	int midlife;// = 45;
	int old; // = 60;
	int venerable;// = 100;
	int maximum;// = RollDice(2, 6, venerable); //to be calculated per species 
};

Age DummyAge{

	DummyAge.youth = 20,
	DummyAge.midlife = 45,
	DummyAge.old = 60,
	DummyAge.venerable = 100,
	DummyAge.maximum = RollDice(2, 6, DummyAge.venerable),


};

vector<string> Genders = {"Male", "Female", "Agender"};

vector<string> TypeList = { "PC", "NPC" };

struct Stats { //Filled With Generic Data
	int strength;// = 10;
	int dexterity;// = 10;
	int wisdom;// = 10;
	int intelligence;// = 10;
	int charisma;// = 10;
	int constitution;// = 10;
};

Stats DummyStats{
	DummyStats.strength = 10,
	DummyStats.dexterity = 10,
	DummyStats.wisdom  = 10,
	DummyStats.intelligence = 10,
	DummyStats.charisma = 10,
	DummyStats.constitution = 10
	
};

struct Skill { //A Basic Skill
	string name; // The friendly name of he skill
	string ability; // the base abiility score used for the skill
	string description; // a one sentence description of the skill
};


Skill Acrobatics{
	Acrobatics.name = "Acrobatics",
	Acrobatics.ability = "Strength",
	Acrobatics.description = "Leaping, twisting, and cavorting about. ",
};

Skill AnimalHandling{
	AnimalHandling.name = "Animal Handling",
	AnimalHandling.ability = "Wisdom",
	AnimalHandling.description = "Horse whispering, dog training, that sort of thing. ",
};

Skill Arcana{
	Arcana.name = "Arcana",
	Arcana.ability = "???",
	Arcana.description = "???",
};

Skill Athletics{
};
Skill Deception{
};
Skill History{
};
Skill Insight{};
Skill Intimidations{};
Skill Investigation{};
Skill Medicine{};
Skill Nature{};
Skill Perception{};
Skill Performance{};
Skill Persuasion{};
Skill Religion{};
Skill SleightOfHand{};
Skill Stealth{};
Skill Survival{};

vector<Skill> SkillList = { Acrobatics, AnimalHandling, Arcana, Athletics, Deception, History, Insight, Intimidations, Investigation, Medicine, Nature, Perception, Performance, Persuasion, Religion, SleightOfHand, Stealth, Survival };

/*------------------------SPECIES---------------------------*/

struct Species { //A generic Species

	string speciesName;
	Stats modifiers;
	int weight;
	float height; 
	Age age;
	string gameSize;
	int speed;
	Names names;
	vector<string> languages;
	vector<Species> subSpecies;

};

Species Elf{
	Elf.speciesName = "Elf",
	Elf.modifiers,
	Elf.weight = 120,
	Elf.height = 1.56f,
	Elf.age,
	Elf.gameSize = "Medium",
	Elf.speed = 30,
	Elf.names,
	Elf.languages,
	Elf.subSpecies,
};

Species Dragonborn{ Dragonborn.speciesName = "Dragonborn" };
Species Dwarf{ Dwarf.speciesName = "Dwarf" };
Species Gnome{ Gnome.speciesName = "Gnome" };
Species HalfElf{ HalfElf.speciesName = "HalfElf" };
Species HalfGiant{ HalfGiant.speciesName = "HalfGiant" };
Species Halfling{ Halfling.speciesName = "Halfling"};
Species HalfOrc{ HalfOrc.speciesName = "HalfOrc" };
Species Human{ Human.speciesName = "Human" };
Species Tiefling{ Tiefling.speciesName = "Tiefling" };

Species Ogre{};
Species Giant{};
Species Goblinoid{};

//SUBSPECIES//
Species Lightfoot{};


vector<Species> StandardSpecies = { Elf, Dragonborn, Dwarf, Gnome, HalfElf, Halfling, HalfOrc, Human, Tiefling };

struct GameLanguage { // Filled with generic Data
	string name; //= "Common";
	string rarity; //= "Standard"; // "Exotic"
	vector<Species> typicalSpeakers; //= { Human };
	string script;// = "Common"; // The written form
};

GameLanguage Common{ Common.name = "Common", Common.rarity = "Standard", Common.typicalSpeakers = {Human}, Common.script = "Common" };
GameLanguage Dwarvish{ Dwarvish.name = "Dwarvish", Dwarvish.rarity = "Standard", Dwarvish.typicalSpeakers = { Dwarf }, Dwarvish.script = "Dwarvish" };
GameLanguage Elvish{ Elvish.name = "Elvish", Elvish.rarity = "Standard", Elvish.typicalSpeakers = { Elf }, Elvish.script = "Elvish" };
GameLanguage Giantish{ Giantish.name = "Giant", Giantish.rarity = "Standard", Giantish.typicalSpeakers = { Ogre, Giant }, Giantish.script = "Dwarven" };
GameLanguage Gnomish{ Gnomish.name = "Gnomish", Gnomish.rarity = "Standard", Gnomish.typicalSpeakers = { Gnome }, Gnomish.script = "Dwarven" };
GameLanguage Goblinish{ Goblinish.name = "Gobin", Goblinish.rarity = "Standard", Goblinish.typicalSpeakers = { Goblinoid }, Goblinish.script = "Dwarven" };
GameLanguage Halflingish{};
GameLanguage Orcish{};

GameLanguage Abyssal{};
GameLanguage Celestial{};
GameLanguage Draconic{};
GameLanguage DeepSpeech{};
GameLanguage Infernal{};
GameLanguage Primordial{};
GameLanguage Sylvan{};
GameLanguage Undercommon{};

vector<GameLanguage> Languages = {Dwarvish, Elvish, Giantish, Gnomish, Goblinish, Halflingish, Orcish};
vector<GameLanguage> ExoticLanguages = {Abyssal, Celestial, Draconic, DeepSpeech, Infernal, Primordial, Sylvan, Undercommon};

struct CharClass {
	string className;
	int hitDie;
};

CharClass Barbarian{ Barbarian.className = "Barbarian", Barbarian.hitDie = 4 };
CharClass Bard{ Bard.className = "Bard", Bard.hitDie = 4 };
CharClass Cleric{ Cleric.className = "Cleric", Cleric.hitDie = 4 };
CharClass Druid{ Druid.className = "Druid", Druid.hitDie = 4 };
CharClass Fighter{ Fighter.className = "Fighter", Fighter.hitDie = 4 };
CharClass Monk{ Monk.className = "Monk", Monk.hitDie = 4 };
CharClass Paladin{ Paladin.className = "Paladin", Paladin.hitDie = 4 };
CharClass Ranger{ Ranger.className = "Ranger", Ranger.hitDie = 4 };
CharClass Rogue{ Rogue.className = "Rogue", Rogue.hitDie = 4 };
CharClass Sorceror{ Sorceror.className = "Sorceror", Sorceror.hitDie = 4 };
CharClass Warlock{ Warlock.className = "Warlock", Warlock.hitDie = 4 };
CharClass Wizard{ Wizard.className = "Wizard", Wizard.hitDie = 4 };

CharClass Merchant{};

vector<CharClass> PlayerClasses = {Barbarian, Bard, Cleric, Druid, Fighter, Monk, Paladin, Ranger, Rogue, Sorceror, Warlock, Wizard};
vector<CharClass> NonplayerClasses = {Merchant};


struct Spell {
	string description;
};

struct Inventory {
	vector<string> items;
	vector<string> equipment;
	vector<string> sundries;
	int copperPieces;
	int silverPieces;
	int goldPieces;
	int platinumPieces;
};

struct Character {

	//should eventually be made generic, and then instanced to hold character data.
	//Will NOT be a generator class, simply a place to hold the data.

	string name;
	string background;
	string alignment;
	string player;

	string ideals;
	string bonds;
	string flaws;

	Species species;
	CharClass charClass;

	Stats baseScores;
	Stats modifiers;

	//vector<Spell> spellbook;
	
	int maxHP;
	int currentHP;
	int speed;

	int proficiency;
	int armorClass;

	float experience;
	int level{};

	Inventory inventory;

	//functions for returning things that are computed from other things
	//Passive Perception
	//flatfooted or touch AC
	//initiative
	//speed and speed derivatives
};

#endif


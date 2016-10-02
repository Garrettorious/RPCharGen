//Types.h
//Defines all basic data types

#ifndef TYPES_H
#define TYPES_H

#include <vector>
#include <string>

using namespace std;

/*------------------------BASICS---------------------------*/

struct Names { //species specific Name containers, Filled with Generic Data

	vector<string> male;
	vector<string> female;
	vector<string> agender;

	vector<string> clan;

	vector<string> prefix;
	vector<string> suffix;

	/*Names() : 
		male { "Gene", "Harold", "Jeremiah", "Uldrik", "Aragorn", "Frodo", "Barry" },
		female { "Gena", "Maude", "Tabitha", "Urda", "Emelia", "Gwendolyn", "Gwuinivere" },
		agender { "Generico", "Pat", "Astor", "Dendel", "Oda", "Chud", "Antari" },
		clan { "Bluejeans", "Ironback", "Underhill", "Took", "Napier", "Gildroven", "Erikkson" },
		prefix { "Doctor", "Professor", "Captain", "Jolly", "Goodie", "The Magnificent", "Brother", "Judge", "Sergeant", "Pastor", "High Lord", "King" },
		suffix { "The Feebleminded", "The Strong", "The Ugly", "The Powerful", "The Great", "Of The Many Arrows", "The RedHanded", "The Stained" }
	{
		
	}

	Names(vector<string> male_names, vector<string> female_names, vector<string> agender_names, vector<string> clans, vector<string> prefixes, vector<string> suffixes):
		male { male_names },
		female { female_names },
		agender { agender_names },
		clan { clans },
		prefix { prefixes },
		suffix { suffixes }
	{

	}*/

	/*Names(vector<string> male_names, vector<string> female_names, vector<string> agender_names, vector<string> clans, vector<string> prefixes, vector<string> suffixes)
	{
		male = male_names;
		female = female_names;
		agender = agender_names;
		clan = clans;
		prefix = prefixes;
		suffix = suffixes;
	}*/
};

const Names default_names
{
	{ "Gene", "Harold", "Jeremiah", "Uldrik", "Aragorn", "Frodo", "Barry" },
	{ "Gena", "Maude", "Tabitha", "Urda", "Emelia", "Gwendolyn", "Gwuinivere" },
	{ "Generico", "Pat", "Astor", "Dendel", "Oda", "Chud", "Antari" },
	{ "Bluejeans", "Ironback", "Underhill", "Took", "Napier", "Gildroven", "Erikkson" },
	{ "Doctor", "Professor", "Captain", "Jolly", "Goodie", "The Magnificent", "Brother", "Judge", "Sergeant", "Pastor", "High Lord", "King" },
	{ "The Feebleminded", "The Strong", "The Ugly", "The Powerful", "The Great", "Of The Many Arrows", "The RedHanded", "The Stained" }
};

struct Age { //the Aging profile for a given race, Filled with Generic Data
	int youth;// = 20;
	int midlife;// = 45;
	int old; // = 60;
	int venerable;// = 100;
	int maximum;// = RollDice(2, 6, venerable); //to be calculated per species 
};
const Age DummyAge {20, 45, 60, 100, 105};




vector<string> Genders = {"Male", "Female", "Agender"};

vector<string> TypeList = { "PC", "NPC" };

enum Stat
{
	STRENGTH,
	DEXTERITY,
	WISDOM,
	INTELLIGENCE,
	CHARISMA,
	CONSTITUTION,
	NUM_STATS
};

struct Stats { //Filled With Generic Data
	int strength;// = 10;
	int dexterity;// = 10;
	int wisdom;// = 10;
	int intelligence;// = 10;
	int charisma;// = 10;
	int constitution;// = 10;
};

Stats DummyStats{ //Stat should be ability
	DummyStats.strength = 10,
	DummyStats.dexterity = 10,
	DummyStats.wisdom  = 10,
	DummyStats.intelligence = 10,
	DummyStats.charisma = 10,
	DummyStats.constitution = 10
	
};

//A Basic Skill
struct Skill 
{ 
	string name; // The friendly name of he skill
	Stat stat; // the base abiility score used for the skill
	string description; // a one sentence description of the skill
};

const Skill skills[] // The [] syntax introduces an array, and this pattern can be used to represent a "table" of stuff
{
	// Name				Stat		Description
	{"Acrobatics",		STRENGTH,	"Leaping, twisting, and cavorting about. "},
	{"Animal Handling", WISDOM,		"Horse whispering, dog training, that sort of thing. "},
	{"Intimidation",	CHARISMA,	"Being mean for meanness sake."}
};

Skill Arcana{
	Arcana.name = "Arcana",
	Arcana.stat = STRENGTH,
	Arcana.description = "???",
};

Skill Athletics{
};
Skill Deception{
};
Skill History{
};
Skill Insight{};
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

vector<Skill> SkillList = { Arcana, Athletics, Deception, History, Insight, Investigation, Medicine, Nature, Perception, Performance, Persuasion, Religion, SleightOfHand, Stealth, Survival };

/*------------------------SPECIES---------------------------*/

struct Species { //A generic Species

	string speciesName;
	int stat_modifiers[NUM_STATS];
	int weight;
	float height; 
	Age age;
	string gameSize;
	int speed;
	Names names;
	vector<string> languages;
	vector<Species> subSpecies;

};

const Names elf_names
{ 
	{"Legolas", "Gildor"},
	{"Arwen", "Galadriel"},
	{"Dendel"},
	{"Quendi", "Sindarin"},
	{"Lord", "Lady"},
	{"Greenleaf", "Evenstar"}
};
const Species Elf
{
	"Elf", 
	{0, 0, +2, 0, 0, 0},
	120, 1.56f, 
	{100, 225, 300, 500, 550}, 
	"Medium", 
	30,
	elf_names,
	{ "Quenya", "Sindarin", "Noldor" },
	{}
};

/*

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
*/

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

struct Weapon
{
	string name;
	Stat stat;
	Dice damage;
	float weight;
};
const Weapon weapons[]
{
	// Name			// Stat		// Damage	// Weight
	{"Greataxe",	STRENGTH,	2*d6,		10.0f},
	{"Bow",			DEXTERITY,	d8,			4.0f}
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


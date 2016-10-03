//Types.h
//Defines all basic data types

#ifndef TYPES_H
#define TYPES_H

#include <vector>
#include <string>

using namespace std;

/*------------------------BASICS---------------------------*/

vector<string> type_list = { "PC", "NPC" };
vector<string> genders = {"Male", "Female", "Agender"};

enum Gender
{
	MALE,
	FEMALE,
	AGENDER,
	NUM_GENDERS
};

enum GameSize
{
	FINE,
	DIMINUTIVE,
	TINY,
	SMALL,
	MEDIUM,
	LARGE,
	RPHUGE,
	GARGANTUAN,
	COLOSSAL,
	COLOSSALPLUS,
	NUM_SIZES,
};

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

const Stats default_scores{ 10, 10, 10, 10, 10, 10 };

struct Names { //Names Container
	vector<string> male;
	vector<string> female;
	vector<string> agender;
	vector<string> clan;
	vector<string> prefix;
	vector<string> suffix;
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

struct GameLanguage { //A Language container
	string name;
	string rarity;
	string script;
};
//								Name		Rarity			Script
const GameLanguage Common{		"Common",		"Standard",		"Common"	 };
const GameLanguage Dwarvish{	"Dwarvish",		"Standard",		"Dwarvish"	 };
const GameLanguage Elvish{		"Elvish",		"Standard",		"Elvish"	 };
const GameLanguage Giantish{	"Giant",		"Standard",		"Dwarven"	 };
const GameLanguage Gnomish{		"Gnomish",		"Standard",		"Dwarven"	 };
const GameLanguage Goblinish{	"Gobin",		"Standard",		"Dwarven"	 };
const GameLanguage Halflingish{	"Halfling",		"Standard",		"Common"	 };
const GameLanguage Orcish{		"Orcish",		"Standard",		"Dwarven"	 };
																			 
const GameLanguage Abyssal{		"Abyssal",		"Exotic",		"Abyssal"	 };
const GameLanguage Celestial{	"Celestial",	"Exotic",		"Celestial"	 };
const GameLanguage Draconic{	"Draconic",		"Exotic",		"Draconic"	 };
const GameLanguage DeepSpeech{	"DeepSpeech",	"Exotic",		"Deeprunes"	 };
const GameLanguage Infernal{	"Infernal",		"Exotic",		"Infernal"	 };
const GameLanguage Primordial{	"Primordial",	"Exotic",		"Primoridal" };
const GameLanguage Sylvan{		"Sylvan",		"Exotic",		"Sylvan"	 };	
const GameLanguage Undercommon{	"Undercommon",	"Exotic",		"Undercommon"};

vector<GameLanguage> languages = {Dwarvish, Elvish, Giantish, Gnomish, Goblinish, Halflingish, Orcish};
vector<GameLanguage> exotic_languages = {Abyssal, Celestial, Draconic, DeepSpeech, Infernal, Primordial, Sylvan, Undercommon};

struct Ages {  //Age Progression
	int youth;
	int midlife;
	int old;
	int venerable;
	Dice maximum;
};
const Ages default_age {20, 45, 60, 100, 105};


//------------------------SKILLS---------------------------//
struct Skill 
{ 
	string name; // The name of the skill
	Stat stat; // the base stat used for the skill
	string description; // a brief of the skill
};

const Skill skills[] // The [] syntax introduces an array, and this pattern can be used to represent a "table" of stuff
{
	// Name				Stat		Description
	{"Acrobatics",		STRENGTH,	"Leaping, twisting, and cavorting about."},
	{"Animal Handling", WISDOM,		"Horse whispering, dog training, that sort of thing."},
	{"Intimidation",	CHARISMA,	"Being mean for meanness sake."},
	{"Arcana",			WISDOM,		"The knowledge of magic."},
	{"Athletics",		STRENGTH,	"Jumping, climbing, lifting."},
	{"Deception",		CHARISMA,	"Lying and stuff."},
	{"History",			STRENGTH,	"Knowledge of history."},
	{"Insight",			STRENGTH,	"Seeing past deception."},
	{"Investigation",	STRENGTH,	"Solving spooky mysteries."},
	{"Medicine",		STRENGTH,	"Healing the sick."},
	{"Nature",			STRENGTH,	"Understanding the natural world."},
	{"Perception",		STRENGTH,	"Seeing hidden things or small details."},
	{"Performance",		STRENGTH,	"Entertaining, acting, mimery."},
	{"Persuasion",		STRENGTH,	"Subtly manipulating others through speech or action."},
	{"Religion",		STRENGTH,	"Knowledge of religous history."},
	{"Sleight of Hand",	STRENGTH,	"Pickpocketing, prestidigitation, and nimble fingers."},
	{"Stealth",			STRENGTH,	"Hiding unseen in the shadows and lurking quitely out of sight."},
	{"Survival",		STRENGTH,	"Living off the land, orienteering, and simple cooking."},
};
//------------------------ABILITIES---------------------------//

struct Ability {
	string name;
	string description;
};

const Ability Hambone {"Hambone", "To clap and slap upon your own body in a masterfully annoying rhythm."};

const Ability Darkvision {"Darkvision", "You can see in dim light within 60 feet as if it were bright light, and in darkness as if it were dim light."};

const Ability DwarvenResilience {};
const Ability CombatTraining {};
const Ability Toughness {};
const Ability DwarvenArmorTraining {};
const Ability ToolProficiency {};
const Ability Stonecunning {};
const Ability KeenSenses {};
const Ability FeyAncestry{};


//------------------------SPECIES---------------------------//

struct Species { //A species container

	string name;
	int modifiers[NUM_STATS];
	//Species abilities
	int weight;
	float height; 
	Ages ages;
	GameSize size;
	int speed;
	Names names;
	vector<GameLanguage> languages;
	vector<Species> parent_species;

};

//DWARVES
const Ages dwarf_ages
{60, 125, 188, 250, 2*d100};

const Names dwarf_names
{
	//Male
	{"Balund", "Kilrim", "Adrik", "Alberich", "Baern", "Barendd", "Brottor", "Bruenor",
	"Dain", "Darrak", "Delg", "Eberk", "Einkil", "Fargrim", "Flint", "Gardain", "Harbek",
	"Kildrak", "Morgran", "Orsik", "Oskar", "Rangrim", "Rurik", "Taklinn", "Thoradin",
	"Thorin", "Tordek", "Trauborn", "Travok", "Ulfbor", "Veit", "Vongal"},
	//Female
	{"Amber", "Artin", "Audhild", "Bardryn", "Dagnal", "Diesa", "Eldeth", "Falkrunn",
	"Finellen", "Gunnloda", "Gurdis", "Helja", "Hlin", "Kathra", "Kristryd", "Ilde",
	"Liftrasa", "Mardred", "Riswynn", "Sannl", "Torbera", "Torgga", "Vistra"},
	//Agender
	{"Arto", "Deverus", "Risot", "Hilnak", "Bartok"},
	//Clan
	{"Balderk", "Battlehammer", "Brawnanvil", "Dankil", "Fireforge", "Frostbeard",
	"Gorunn", "Holderhek", "Ironfist", "Loderr", "Lutgehr", "Rumnaheim", "Strakeln", "Torunn", "Ungart"},
	//Prefix
	{"Lord", "Shieldmaiden", "Arbiter", "Duke", "High King",},
	//Suffix
	{"The Stalwart", "The Lodestone", "The Low Burning", "The Stoneshaper", "The Immovable Sheild", "of the Flaming Hammer"},
};
const Species Dwarf{ 
	"Dwarf",
//	 S	D  W  I  C  Co
	{0, 0, 0, 0, 0,+2},
	140, 1.2f,
	dwarf_ages,
	MEDIUM,
	30,
	dwarf_names,
	{Dwarvish, Common},	//languages
	{},	

};

const Species HillDwarf{
	"Hill Dwarf",
//	 S	D  W  I  C  Co
	{0, 0, 0, 0, 0,+2},
	140, 1.2f,
	dwarf_ages,
	MEDIUM,
	30,
	dwarf_names,
	{Dwarvish, Common},	//languages
	{Dwarf},
};

const Species MountainDwarf{
	"Mountain Dwarf",
//	 S	D  W  I  C  Co
	{0, 0, 0, 0, 0,+2},
	140, 1.2f,
	dwarf_ages,
	MEDIUM,
	30,
	dwarf_names,
	{Dwarvish, Common},	
	{Dwarf},
};
const Species Duergar{
	"Duergar",
//	  S	 D	W  I  C  Co
	{ 0, 0, 0, 0, 0, +2},
	140, 1.2f,
	dwarf_ages,
	MEDIUM,
	30,
	dwarf_names,
	{Dwarvish, Undercommon, DeepSpeech},	
	{Dwarf},
};

//ELVES//
const Ages elf_ages{80, 175, 263, 350, 4*d100};

const Names elf_names
{ 
	//Male
	{"Adran", "Aelar", "Aramil", "Arannis", "Aust", "Beiro", "Berrian", "Carric",
	"Enialis", "Erdan", "Ereven", "Galinndan", "Hadarai", "Heian","Himo", "Inmeral",
	"Ivellios", "Laucian", "Mindartis", "Paelias", "Peren", "Quarion", "Riardon",
	"Rolen", "Soveliss", "Thamior", "Tharivol", "Theren", "Varis", "Legolas", "Gildor", "Elrond"},
	//Female
	{"Adrie", "Althaea", "Anastrianna", "Andraste", "Antinua", "Bethrynna", "Birel", "Caelynn",
	"Drusilia", "Enna", "Felosial", "Ielenia", "Jelenneth", "Keyleth", "Leshanna", "Lia", "Meriele",
	"Mialee", "Naivara", "Quelenna", "Quillathe", "Sariel", "Shanairra", "Shava", "Silaqui", "Theirastra", 
	"Thia", "Vadania", "Valanthe", "Xanaphia", "Arwen", "Galadriel"},
	//Agender
	{"Dendel", "Vadannar", "Alorox"},
	//Clan
	{"Quendi", "Sindarin", "Amakiir", "Amastacia", "Galanodel", "Holimion", "Ilphelkiir", "Liadon", "Meliamne", "Nailo", "Siannodel", "Xiloscient"},
	//Prefix
	{"Lord", "Lady", "Nightsinger"},
	//Suffix
	{"The Greenleaf", "The Evenstar", "Of The Morning"}
};
const Species Elf
{
	"Elf",
//	 S	 D	W  I   C  Co
	{0, +2, 0, 0, 0, 0},
	120, 1.56f, 
	elf_ages, 
	MEDIUM, 
	30,
	elf_names,
	{Elvish, Common},
	{}
};

const Species HighElf{};
const Species WoodElf{};
const Species DarkElf{};

//HALFLING
const Ages halfling_ages{30, 50, 75, 100, 5*d20};
const Names halfling_names{
	{"Alton", "Ander", "Cade", "Corrin", "Eldon", "Errich", "Finnan","Garrett",//Male
	"Lindal", "Lyle", "Merric", "Milo", "Osborn", "Perrin", "Reed", "Roscoe", "Wellby"},
	{"Andry", "Bree", "Callie", "Cora", "Euphemia", "Jillian", "Kithri", "Lavinia",//Female
	"Lidda", "Merla", "Nedda", "Paela", "Portia", "Seraphina", "Shaena", "Tyrm", "Vani", "Verna"},
	{"Tag", "Londal", "Burbi"},//Agender
	{"Brushgatherer", "Goodbarrel", "Proudfoot", "Greenbottle", "High-hill", "Hilltopple"},//Clan
	{"Fancy", "Rough Boy", "Honest", "Sneaky"},//Prefix
	{"The Elder", "The Younger", "The Oakheart"}//Suffix
};

const Species Halfling
{
	"Halfling",
//	 S	 D	W  I  C  Co
	{0, +2, 0, 0, 0, 0},
	30, 0.76f,
	halfling_ages, 
	SMALL, 
	30,
	halfling_names,
	{Halflingish, Common},
	{}
};

const Species Lightfoot{};
const Species Stout{};

//HUMANS
const Ages human_ages{18, 35, 53, 70, 2*d20};
const Names human_calishite_names
{{"Aseir", "Bardeid", "Haseid", "Khemed", "Mehmen", "Sudeiman", "Zasheir"},
{"Atala", "Ceidil", "Hama", "Jasmal", "Meilil", "Seipora", "Yasheira", "Zasheida"},
{"Basha", "Dumein", "Jassan", "Khalid", "Mostana", "Pashar", "Rein"},{},{},{}};
const Names human_chondathan_names
{{"Darvin", "Dorn", "Evendur", "Gorstag", "Grim", "Helm", "Malark", "Morn", "Randal", "Stedd"},
{"Arveene", "Esvele", "Jhessail", "Kerri", "Lureene", "Miri", "Rowan", "Shandri", "Tessele"},
{"Amblecrown", "Buckman", "Dundragon", "Evenwood", "Greycastle", "Tallstag"},{},{},{}};
const Names human_damaran_names
{{"Bor", "Fodel", "Glar", "Grigor", "Igan", "Ivor", "Kosef", "Mival", "Orel", "Pavel", "Sergor"},
{"Alethra", "Kara", "Katernin", "Mara", "Natali", "Olma", "Tana", "Zora"},
{"Bersk", "Chernin", "Dotsk", "Kulenov", "Marsk", "Nemetsk", "Shemov", "Starag"},{},{},{}};
const Names human_illuskan_names
{{"Ander", "Blath", "Bran", "Frath", "Geth", "Lander", "Luth", "Malcer", "Stor", "Taman", "Urth"},
{"Amafrey", "Betha", "Cefrey", "Kethra", "Mara", "Olga", "Silifrey", "Westra"},
{"Brightwood", "Helder", "Hornraven", "Lackman", "Stormwind", "Windrivver"},{},{},{}};
const Names human_mulan_names
{{"Aoth", "Bareris", "Ehput-Ki", "Kethoth", "Mumed", "Ramas", "So-Kehur", "Thazar-De", "Urhur"},
{"Arizima", "Chathi", "Nephis", "Nulara", "Murithi", "Sefris", "Thola", "Umara", "Zolis"},
{"Ankhalab", "Anskuld", "Fezim", "Hahpet", "Nathandem", "Sepret", "Uuthrakt"},{},{},{}};
const Names human_rashemi_names
{{"Borivik", "Faurgar", "Jandar", "Kanithar", "Madislak", "Ralmevik", "Shaumar", "Vladislak"},
{"Fyevarra", "Hulmarra", "Immith", "Imzel", "Navarra", "Shevarra", "Tammith", "Yuldra"},
{"Chergoba", "Dyernina", "Iltazyara", "Murnyethara", "Stayanoga", "Ulmokina"},{},{},{}};
const Names human_shou_names
{{"An", "Chen", "Chi", "Fai", "Jiang", "Jun", "Lian", "Long", "Meng", "On", "Shan", "Shui", "Wen"},
{"Bai", "Chao", "Jia", "Lei", "Mei", "Qiao", "Shui", "Tai"},
{"Chien", "Huang", "Kao", "Kung", "Lao", "Ling", "Mei", "Pin", "Shin", "Sum", "Tan", "Wan"},{},{},{}};
const Names human_tethyrian_names = human_chondathan_names;
const Names human_turami_names
{{"Anton", "Diero", "Marcon", "Pieron", "Rimardo", "Romero", "Salazar", "Umbero"},
{"Balama", "Dona", "Faila", "Jalana", "Luisa", "Marta", "Quara", "Selise", "Vonda"},
{"Agosto", "Astorio", "Calabra", "Domine", "Falone", "Marivaldi", "Pisacar", "Ramondo"},{},{},{}};

const Species Human
{
	"Human",
//	  S	  D	  W   I   C   Co
	{+1, +1, +1, +1, +1, +1},
	130, 1.56f, 
	human_ages, 
	MEDIUM, 
	30,
	default_names,
	{Common},
	{}
};

//DRAGONBORN
const Ages dragonborn_ages{18, 35, 53, 70, 2*d20};
const Names dragonborn_names
{	
	{"Drukka", "Gorestomp"},//Male
	{"Bilga", "Drillette"},
	{"Boingo", "Scaly"},
	{"Muckraker", "Ironhide", "Razorclaw"},
	{"Master", "Sir", "Cheiftan"},
	{"The Unwavering", "The Strong"}
};

const Species Dragonborn
{
	"Dragonborn",
//	  S	 D	W  I   C  Co
	{+2, 0, 0, 0, +1, 0},
	120, 1.56f, 
	dragonborn_ages, 
	MEDIUM, 
	30,
	dragonborn_names,
	{ Draconic, Common },
	{}
};


const Species Gnome{"Gnome" };
const Species HalfElf{"HalfElf" };
const Species HalfGiant{"HalfGiant" };
const Species HalfOrc{"HalfOrc" };
const Species Tiefling{"Tiefling" };

const Species Ogre{};
const Species Giant{};
const Species Goblinoid{};

//SUBSPECIES//

//Elf

//Halfling


//const vector<Species> standard_species = { Elf, Dragonborn, Dwarf, Gnome, HalfElf, Halfling, HalfOrc, Human, Tiefling };
const vector<Species> standard_species = {Elf, Dwarf, Halfling, Human, Dragonborn};

//----------------------------------CLASSES---------------------------------------//

struct CharClass {
	string class_name;
	Dice hit_dice;
	Stat save_profficiencies[2];
	string description;
};

const CharClass char_classes[] 
{	//	Name			HitDie	Saving Throw Profficiencies		Description
	{	"Barbarian",	d12,	{STRENGTH, CONSTITUTION},		"A fierce warrior of primitive background who can enter a battle rage." },
	{	"Bard",			d8,		{DEXTERITY, CHARISMA},			"An inspiring magician whose power echoes the music of creation."},
	{	"Cleric",		d8,		{WISDOM, CHARISMA},				"A priestly champion who weilds divine magic in service of a higher power." },
	{	"Druid",		d8,		{INTELLIGENCE, WISDOM},			"A priest of the Old Faith, wielding the powers of nature-- moonlight and plant growth, fire and lightning-- and adopting animal forms."},
	{	"Fighter",		d10,	{STRENGTH, CONSTITUTION},		"A master of martial combat, skilled with a variety of weapons and armor."},
	{	"Monk",			d8,		{STRENGTH, DEXTERITY},			"A master of martial arts, harnessing the power of the body in pursuit of spiritual and physical enlightenment."  },
	{	"Paladin",		d10,	{WISDOM, CHARISMA},				"A holy warrior bound to a sacred oath." },
	{	"Ranger",		d10,	{STRENGTH, DEXTERITY},			"A warrior who uses martial prowess and nature magic to combat threats on the edges of civilization." },
	{	"Rogue",		d8,		{DEXTERITY, INTELLIGENCE},		"A scoundrel who uses stealth and trickery to overcome obstacles and enemies." },
	{	"Sorceror",		d6,		{CONSTITUTION, CHARISMA},		"A spellcaster who draws on inherent magic from a gift or bloodline."  },
	{	"Warlock",		d8,		{WISDOM, CHARISMA},				"A weilder of magic that is derived from a pact with an extraplanar entity."  },
	{	"Wizard",		d6,		{INTELLIGENCE, WISDOM},			"A sccholarly magic user capable of manipulating the structure of reality."  }
};

const CharClass npc_classes[]
{
	{	"Merchant",		d4	},
	{	"Shopkeep",		d4	},
	{	"Blacksmith",	d4	},
};

//----------------------------SPELLS-----------------------------------------//
struct Spell {
	int casting_time;
	int duration;
	string components;
	string description;
	Dice damage;
	string range;
	int level;
};

struct Weapon
{
	string name; // The name of the weapon
	Stat stat; // the primary modifier used when rolling attacks and damage
	Dice damage; // The damage dice used when rolling damage
	float weight; // the in game weight of the object
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
	int copper_pieces;
	int silver_pieces;
	int gold_pieces;
	int platinum_pieces;
};


//----------------------CHARACTERSHEET-------------------------------//
struct Character {

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

	//spellbook;
	
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


//operator overloads
std::ostream & operator << (std::ostream & out, Dice dice)
{
	out << dice.count << 'd' << dice.sides;
	if(dice.modifier > 0) out << '+' << dice.modifier;
	if(dice.modifier < 0) out << dice.modifier;
	return out;
}

std::ostream & operator << (std::ostream & out, Stat stat)
{
	switch(stat)
	{

	case STRENGTH: return out << "strength";
	case DEXTERITY: return out << "dexterity";
	case INTELLIGENCE: return out << "intelligence";
	case WISDOM: return out << "wisdom";
	case CONSTITUTION: return out << "constitution";
	case CHARISMA: return out << "charisma";
	default: throw std::logic_error("bad stat enum");
	}
}

std::ostream & operator << (std::ostream & out, Gender gender)
{
	switch(gender)
	{

	case MALE: return out << "Male";
	case FEMALE: return out << "Female";
	case AGENDER: return out << "Agender";
	default: throw std::logic_error("unlisted Gender enum");
	}
}

std::ostream & operator << (std::ostream & out, const Skill & skill)
{
	return out << skill.name << " (" << skill.stat << "): " << skill.description;
}

std::ostream & operator << (std::ostream & out, const CharClass & char_class)
{
	return out << char_class.class_name << " : " << char_class.description;
}


#endif


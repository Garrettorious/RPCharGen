#include <iostream>
#include "Generator.h"
//#include "Dice.h"

using namespace std;

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

std::ostream & operator << (std::ostream & out, const Skill & skill)
{
	return out << skill.name << " (" << skill.stat << "): " << skill.description;
}


int main() try
{
	for(Skill s : skills)
	{
		std::cout << s << std::endl;
		std::cout << "   An elf would have a bonus of +" << Elf.stat_modifiers[s.stat]/2 << " due to their +" << Elf.stat_modifiers[s.stat] << " " << s.stat << " bonus." << std::endl;
	}

	auto wep = PickRandom(weapons);
	std::cout << "We start with a " << wep.name << " (" << wep.damage << "). We swing it an an orc, and do " << wep.damage.roll() << " damage!" << std::endl;

	//Elf.stat_modifiers[AnimalHandling.stat];

//	Stats myModifiers;
	Generator generator;
	//Character myCharacter = generator.CreateCharacter();
	
	generator.CreateCharacter("PC", true, 15, Elf, Rogue, "Male");

	//So these currently don't print. I think it has something to do with the way I'm creating the structs.
	//I'm currently trying to print a member variable of a struct. 

	//Species * mySpecies; //Made a species pointer...

	
	//mySpecies & Dwarf;

	cout << Dwarf.speciesName << "<----  This should say Dwarf." << endl; //These dont work... WHY???
	cout << Rogue.className << "<---- This should say Rogue." << endl;


	system("pause");
	return EXIT_SUCCESS;

}
catch(const std::exception & e)
{
	std::cerr << "Caught exception: " << e.what() << std::endl;
	return EXIT_FAILURE;
}
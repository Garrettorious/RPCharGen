//Generator.h
#ifndef	GENERATOR_H
#define GENERATOR_H

#include <string>
#include <iostream>
#include "Dice.h"
#include "Types.h"

class Generator
{
	
public:
	Character CreateCharacter();
	Character CreateCharacter(std::string type, bool optimised, int level, Species species, CharClass char_class);
	Character CreateCharacter(std::string type, int level, CharClass char_class, std::string gender);
	Character CreateCharacter(int level);
	Character CreateCharacter(std::string type);

	int RollHitPoints(int level, CharClass char_class);
	
};

Character Generator::CreateCharacter(std::string type, bool optimized, int level, Species species, CharClass char_class) {
	
	Character my_character;
	std::string my_name;
	std::string my_clan;
	std::string my_suffix = "";
	std::string my_prefix = "";
	Gender my_gender;
	Species my_species;

	my_gender = static_cast<Gender>(rand() % NUM_GENDERS);

	switch(my_gender)
	{
	case MALE:
		my_name = PickRandom(species.names.male);

		break;
	case FEMALE:
		my_name = PickRandom(species.names.female);
		break;
	case AGENDER:
		my_name = PickRandom(species.names.agender);
		break;
	default : throw std::logic_error("unlisted gender enum");
	}

	//A 25% chance that the character will get a prefix
	if (d100.roll() <= 25) 
	{
		my_prefix = PickRandom(species.names.prefix) + " " ;
	}
	//A 25% chance that the character will get a suffix
	if (d100.roll() <= 25) 
	{
		my_suffix = " " + PickRandom(species.names.suffix);
	}
	//choose a clan name
	my_clan = PickRandom(species.names.clan);


	std::cout << my_prefix << my_name << " " << my_clan <<  my_suffix <<", " << "A level " << level << " "
		<< species.name << " " <<  char_class.class_name << " " << "who presents as " << my_gender << std::endl;
	std::cout << "---------------------------------------------------------------------------" << std::endl;

	/*
	**Logic**
	Am I a Player or an NPC ?

	If I am a Player :
	Am I an Optimized, or Random character ? (Do I always pick the optimal mechanical choice etc.)

	If I am an **Optimized** Character :
	What Species am I ?
	Am I a Subspecies ?
	What are my Species specific Abilities ?

	What are my basic physical traits ? Gender ? How Old ? What Weight ? Hair and Eyecolor ?
	What is my Name ?

	What Level am I ?

	Am I Multiclassed ?
	If not, what Class am I ?
	If I am Multiclassed, how many levels of each, and in what order ?

	What are my Class specific Abilities ?

	What was my background ?
	What Languages do I speak ?
	What are my Flaws and Traits ?

	What equipment and items do I own ?

	*/
	return my_character;
}
Character Generator::CreateCharacter(std::string type, int level, CharClass char_class, std::string gender) { return CreateCharacter(type, true, level, PickRandom(standard_species), char_class);}
Character Generator::CreateCharacter(int level) { return CreateCharacter("PC",true, level, PickRandom(standard_species), PickRandom(char_classes));}
Character Generator::CreateCharacter(std::string type) { return CreateCharacter( type , true, RollDice(/*Random Level from 1 - 20 */), PickRandom(standard_species), PickRandom(char_classes));}
Character Generator::CreateCharacter() {return CreateCharacter( PickRandom(type_list), true, d20.roll(), PickRandom(standard_species), PickRandom(char_classes));}

int Generator::RollHitPoints(int level, CharClass char_class) //Determine the Proper MaxHp for the character given Class, Race, Level, and any relevant Modifiers.
{
	int max_hitpoints = (char_class.hit_dice.roll()); // WRONG??? Constitution modifier must be added at each level, and computed correctly based on when that modifier was gained... Complicated.
	return max_hitpoints;
}

#endif
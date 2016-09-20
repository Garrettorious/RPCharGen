//Generator.h
#ifndef	GENERATOR_H
#define GENERATOR_H
#include <string>
#include <iostream>
#include "Dice.h"
#include "Types.h"

class Generator
{
	//Main Character loop and it's overloads
public:

	Dice dice;
	Names names;
	Abilities baseAbilities;
	//Skills baseSkills;
	Gender gender;
	Character character;
	CharClass charClass;




	Character CreateCharacter();
	Character CreateCharacter(string type, bool optimised, int level, Species species, CharClass charClass, Gender gender);
	Character CreateCharacter(string type, int level, CharClass charClass, Gender gender);
	Character CreateCharacter(int level);
	Character CreateCharacter(string type);

	int RollHitPoints(int level, CharClass charClass);
	
};

#endif
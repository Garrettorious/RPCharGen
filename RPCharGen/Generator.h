//Generator.h
#ifndef	GENERATOR_H
#define GENERATOR_H

#include "Dice.h"
#include "Types.h"

class Generator
{
	//Main Character loop and it's overloads
public:

	Character character;
	CharClass charClass;
	Dice dice;


	Character CreateCharacter();
	Character CreateCharacter(string type, int level, Species species, CharClass charClass, Gender gender);
	Character CreateCharacter(string type,int level, CharClass charClass, Gender gender);
	Character CreateCharacter(int level);
	Character CreateCharacter(string type);

	int RollHitPoints(int level, CharClass charClass);
	
};

#endif
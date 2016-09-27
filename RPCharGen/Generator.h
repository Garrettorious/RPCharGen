//Generator.h
#ifndef	GENERATOR_H
#define GENERATOR_H

#include <string>
#include <iostream>
#include "Dice.h"
#include "Types.h"

class Generator
{
	Character character;
public:
	Character CreateCharacter();
	Character CreateCharacter(string type, bool optimised, int level, Species species, CharClass charClass, string gender);
	Character CreateCharacter(string type, int level, CharClass charClass, string gender);
	Character CreateCharacter(int level);
	Character CreateCharacter(string type);

	int RollHitPoints(int level, CharClass charClass);
	
};

//-----------------------------------------------------------------
//Declarations

Character Generator::CreateCharacter(string type, bool optimized, int level, Species species, CharClass charClass, string gender) {
	cout << endl;
	cout << "Creating " << type << ": " << "A " << "level " << level << " " << charClass.className << " " << species.speciesName << " known as " << PickRandom(species.names.male) << ", who identifies as " << gender << endl;
	/*
	**Logic**
	Am I a Player or an NPC ?

	If I am a Player :
	Am I an Optimized, or Random character ? (Do I always pick the optimal mechanical choice etc.)

	If I am an **Optimized** Character :
	What Class am I?
	What Species am I ?
	Am I a Subspecies ?

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
	return character;
}
Character Generator::CreateCharacter(string type, int level, CharClass charClass, string gender) { return CreateCharacter(type, true, level, PickRandom(StandardSpecies), charClass, gender);}
Character Generator::CreateCharacter(int level) { return CreateCharacter("PC",true, level, PickRandom(StandardSpecies), PickRandom(PlayerClasses), PickRandom(Genders));}
Character Generator::CreateCharacter(string type) { return CreateCharacter( type , true, RollDice(/*Random Level from 1 - 20 */), PickRandom(StandardSpecies), PickRandom(PlayerClasses), PickRandom(Genders));}
Character Generator::CreateCharacter() {return CreateCharacter( PickRandom(TypeList), true, RollDice(/*Random Level from 1 - 20 */), PickRandom(StandardSpecies), PickRandom(PlayerClasses), PickRandom(Genders));}

int Generator::RollHitPoints(int level, CharClass charClass) //Determine the Proper MaxHp for the character given Class, Race, Level, and any relevant Modifiers.
{
	int maxHitPoints = (RollDice(level, charClass.hitDie, (character.baseScores.constitution + charClass.hitDie) )); // WRONG??? Constitution modifier must be added at each level, and computed correctly based on when that modifier was gained... Complicated.
	return maxHitPoints;
}

#endif
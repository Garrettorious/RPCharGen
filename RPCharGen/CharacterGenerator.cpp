//Class containing functions for generating 5th Edition Dungeons and Dragons Characters using the Core Rulebook
#include "CharacterGenerator.h"
#include "Dice.h"

class CharacterGenerator {

CharClass charClass;
Species species;
Abilities abilities;
Character character;
Dice dice;

/*Need to make GenerateCharacter() have default arguments and overloads, so things can be either specified or not.

Example:
CreateCharacter(PC, 10, Dwarf, Cleric, Male);
CreateCharacter(NPC, 5, Dwarf, Soldier, Female);
CreateCharacter(5); //Defaults to Player Character unless NPC is specified
CreateCharacter(NPC);
CreateCharacter(

**Thoughts**

Ideally this would be done in a way that neednt be completely "trickle down".

Example:
Generate a character with a certain physical appearance early on.
Later, the class they are given requires that they be covered in tattoos.
The gameClass can go back an add tattoos property of their physical appearance.
The problem with this is if anything else was depending on something that was changed,
this might require te writing of some kind of callback or update event to trickle changes across the Character.

**Logic**
Am I a Player or an NPC?

If I am a Player:
Am I an Optimized, or Random character? (Do I always pick the optimal mechanical choice etc.)

If I am an **Optimized** Character:
What Species am I? Am I a Subspecies?

What are my basic physical traits? Gender? How Old? What Weight? Hair and Eyecolor?
What is my Name?

What Level am I?

Am I Multiclassed?
If not, what Class am I?
If I am Multiclassed, how many levels of each, and in what order?

What are my Class specific Abilities?

What was my background?
What Languages do I speak?
What are my Flaws and Traits?

*/






int RollHitPoints(int level) //Determine the Proper MaxHp for the character given Class, Race, Level, and any relevant Modifiers.
	{

	

		int maxHitPoints = (charClass.hitDie + level) * (dice.Roll(level, charClass.hitDie, character.abilities.constitution));

		return maxHitPoints;

	}




};


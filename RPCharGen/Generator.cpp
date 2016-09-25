//Generator.cpp
//Class containing functions for generating 5E Tabletop Characters
#include "Generator.h"
#include "Dice.h" 

/* *Thoughts*
Ideally this would be done in a way that neednt be completely "trickle down".

Example:
Generate a character with a certain physical appearance early on.
Later, the class they are given requires that they be covered in tattoos.
The gameClass can go back an add tattoos property of their physical appearance.
The problem with this is if anything else was depending on something that was changed,
this might require te writing of some kind of callback or update event to trickle changes across the Character.
*/

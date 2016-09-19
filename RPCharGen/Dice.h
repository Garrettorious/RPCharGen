//Dice.h
#ifndef DICE_H
#define DICE_H


#include <random>
#include <time.h>


//Dice Declaration:
class Dice
{
public:
	
	int Roll(int amount, int sides, int modifier);
	int Roll(int ammount, int sides);
	int Roll(int sides);
	int Roll();
};

#endif
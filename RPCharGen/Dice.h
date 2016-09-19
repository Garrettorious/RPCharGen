//Dice.h
#ifndef DICE_H
#define DICE_H


#include <random>
#include <time.h>


//Dice Declaration:
class Dice
{
	int r;
	int totalRolls;

public:
	int result;
	int Roll(int amount, int sides, int modifier);
};

#endif
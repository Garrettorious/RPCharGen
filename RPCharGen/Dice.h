//Dice.h
#ifndef DICE_H
#define DICE_H


#include <random>
#include <time.h>

// A variety of different functions for rolling dice
int RollDice(int amount, int sides, int modifier);
int RollDice(int amount, int sides);
int RollDice(int sides);
int RollDice();

#endif
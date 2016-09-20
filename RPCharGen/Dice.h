//Dice.h
#ifndef DICE_H
#define DICE_H

#include <vector>

// A variety of different functions for rolling dice
int RollDice(int amount, int sides, int modifier);
int RollDice(int amount, int sides);
int RollDice(int sides);
int RollDice();

// Define a template for functions which takes a vector of instances of some type T and which return a single instance of T
template<class T> 
T PickRandom(const std::vector<T> & things) 
{
    int index = RollDice((int)things.size()); // Roll a dice with one face for every "thing" in the container
    return things[index - 1]; // Use the result to index into the container (and remember that array indexing is zero-based in C/C++)
}

#endif
//Dice.h
#ifndef DICE_H
#define DICE_H

#include <vector>
#include <ctime> // For time()
#include <random> // For std::mt19937, std::uniform_int_distribution, etc.

// A variety of different functions for rolling dice
int RollDice(int amount, int sides, int modifier);
int RollDice(int amount, int sides);
int RollDice(int sides);
int RollDice();

// Define a template for functions which takes a vector of instances of some type T and which return a single instance of T

template<class T> 
auto PickRandom(const T & things) 
{
	auto first = std::begin(things);
	auto last = std::end(things);
	auto num_things = std::distance(first, last);

    int index = RollDice(num_things); // Roll a dice with one face for every "thing" in the container
	std::advance(first, index-1);
    return *first; // Use the result to index into the container (and remember that array indexing is zero-based in C/C++)
}

/*template<class T> 
T PickRandom(const std::vector<T> & things) 
{
    int index = RollDice((int)things.size()); // Roll a dice with one face for every "thing" in the container
    return things[index - 1]; // Use the result to index into the container (and remember that array indexing is zero-based in C/C++)
}*/

//---------------------------

// Declare a global random number generator using the standard Mersenne Twister algorithm, and seed it with the current time
std::mt19937 rng{ (unsigned int)time(0) }; // Note that you could also declare this in main() or your Generator class, and pass it to RollDice by reference

int RollDice(int amount, int sides, int modifier) {

	// A distribution that will yield a number between 1 and <sides>, inclusive, with each possibility having equal probability
	const std::uniform_int_distribution<int> rollDistribution{ 1, sides };

	int totalRolls = 0;

	// C++ programmers tend to prefer ++i over i++. It's irrelevant when using ints, but can be significant (or even necessary) when looping via iterators
	for (int i = 0; i < amount; ++i) {

		// a += b is shorthand for a = a + b, useful when you have longer variable names
		totalRolls += rollDistribution(rng); // Can make use of the random number immediately without storing it in a variable first
	}

	return totalRolls + modifier; // No need to define a variable before returning, return can take any expression, even calls to other functions (see below)
}

int RollDice(int amount, int sides) { return RollDice(amount, sides, 0); } // If no modifier given, assumed to be zero
int RollDice(int sides) { return RollDice(1, sides, 0); } // If only sides given, assume one die with no modifier
int RollDice() { return RollDice(1, 20, 0); } // Overload with no arguments, assumes 1 d20 +0

struct Dice 
{ 
	int count, sides, modifier; 
	int roll() const { return RollDice(count, sides, modifier); }
};
Dice operator* (int mult, Dice d) { return {d.count*mult, d.sides, d.modifier*mult}; }
Dice operator+ (Dice d, int mod) { return {d.count, d.sides, d.modifier + mod}; }
const Dice d4 {1,4,0}, d6 {1,6,0}, d8 {1,8,0}, d10 {1,10,0}, d12 {1,12,0}, d20 {1,20,0}, d100 {1,100,0};

#endif
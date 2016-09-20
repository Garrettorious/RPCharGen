#include "Dice.h"

#include <random>

// Declare a global random number generator using the standard Mersenne Twister algorithm
std::mt19937 rng; // Note that you could also declare this in main or your Generator class, and pass it in

int RollDice(int amount, int sides, int modifier) {

    // A distribution that will yield a number between 1 and <sides>, inclusive, with each possibility having equal probability
    const std::uniform_int_distribution<int> rollDistribution {1, sides};

	//Roll The correct Number of times
    int totalRolls = 0;
	for (int i = 0; i < amount; i++) {

		int currentRoll = rollDistribution(rng); // Sample the distribution using the random number generator
		//std::cout << "Roll " << "d" << sides << " #" << i + 1 << " = " << currentRoll << std::endl;
		totalRolls = totalRolls + currentRoll;

	}

	//add the modifier
	int result = totalRolls + modifier;
	return result;

}

int RollDice(int amount, int sides) { return RollDice(amount, sides, 0); } // If no modifier given, assumed to be zero
int RollDice(int sides) { return RollDice(1, sides, 0); } // If only sides given, assume one die with no modifier
int RollDice() { return RollDice(1, 20, 0); } // Overload with no arguments, assumes 1 d20 +0
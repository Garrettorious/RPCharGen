#include "Dice.h"

int RollDice(int amount, int sides, int modifier ) {

    int r = rand();
    int result;
    int totalRolls = 0;

	//roll a correct sided dice 'amount' times, and apply the modifier
	static int const max = RAND_MAX / sides*sides;

	//Roll The correct Number of times
	for (int i = 0; i < amount; i++) {

		
		while (r >= max) { r = rand(); }
		int currentRoll = r%sides + 1;
		//std::cout << "Roll " << "d" << sides << " #" << i + 1 << " = " << currentRoll << std::endl;
		totalRolls = totalRolls + currentRoll;

	}

	//add the modifier
	result = totalRolls + modifier;
	return result;

}

int RollDice(int amount, int sides) { return RollDice(amount, sides, 0); } // If no modifier given, assumed to be zero
int RollDice(int sides) { return RollDice(1, sides, 0); } // If only sides given, assume one die with no modifier
int RollDice() { return RollDice(1, 20, 0); } // Overload with no arguments, assumes 1 d20 +0
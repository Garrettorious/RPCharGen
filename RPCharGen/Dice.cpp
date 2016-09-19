#include "Dice.h"

int r = rand();
int result;
int totalRolls = 0;

int Dice::Roll(int amount = 1, int sides = 20, int modifier = 0 ) {

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

//Overload with no modifier given
int Dice::Roll(int amount = 1, int sides = 20) {

	static int const max = RAND_MAX / sides*sides;

	//Roll The correct Number of times
	for (int i = 0; i < amount; i++) {

		
		while (r >= max) { r = rand(); }
		int currentRoll = r%sides + 1;
		//std::cout << "Roll " << "d" << sides << " #" << i + 1 << " = " << currentRoll << std::endl;
		totalRolls = totalRolls + currentRoll;

	}

	//add the modifier
	result = totalRolls;
	return result;

}

//Overload with only the number of sides given
int Dice::Roll(int sides = 20) {

	//roll a correct sided dice 'amount' times, and apply the modifier
	static int const max = RAND_MAX / sides*sides;

	while (r >= max) { r = rand(); }
	int result = r%sides + 1;

	return result;
}


//Overload with no arguments, assumes 1 d20 +0
int Dice::Roll() {

	int sides = 20;
	//roll a correct sided dice 'amount' times, and apply the modifier
	static int const max = RAND_MAX / sides*sides;

	while (r >= max) { r = rand(); }
	int result = r%sides + 1;

	return result;
}
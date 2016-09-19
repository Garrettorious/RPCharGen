#include "Dice.h"



int Dice::Roll(int amount = 1, int sides = 20, int modifier = 0 ) {

	int result;
	int r;
	int totalrolls;
	int currentRolls;


	//roll a correct sided dice 'amount' times, and apply the modifier
	static int const max = RAND_MAX / sides*sides;


	int r = rand();
	while (r >= max) { r = rand(); }
	int totalRolls = 0;
	int result = 0;

	//Roll The correct Number of times
	for (int i = 0; i < amount; i++) {

		int r = rand();
		while (r >= max) { r = rand(); }
		int currentRoll = r%sides + 1;
		//std::cout << "Roll " << "d" << sides << " #" << i + 1 << " = " << currentRoll << std::endl;
		totalRolls = totalRolls + currentRoll;

	}

	//add the modifier
	result = totalRolls + modifier;
	return result;

}

//Overload
int Dice::Roll(int amount = 1, int sides = 20) {

	//roll a correct sided dice 'amount' times, and apply the modifier
	static int const max = RAND_MAX / sides*sides;

	int r = rand();
	while (r >= max) { r = rand(); }
	int totalRolls = 0;
	int result = 0;

	//Roll The correct Number of times
	for (int i = 0; i < amount; i++) {

		int r = rand();
		while (r >= max) { r = rand(); }
		int currentRoll = r%sides + 1;
		//std::cout << "Roll " << "d" << sides << " #" << i + 1 << " = " << currentRoll << std::endl;
		totalRolls = totalRolls + currentRoll;

	}

	//add the modifier
	result = totalRolls;
	return result;

}

//Overload
int Dice::Roll(int sides = 20) {

	//roll a correct sided dice 'amount' times, and apply the modifier
	static int const max = RAND_MAX / sides*sides;



	int r = rand();
	while (r >= max) { r = rand(); }
	int result = 0;



	int r = rand();
	while (r >= max) { r = rand(); }
	int result = r%sides + 1;

	return result;
}
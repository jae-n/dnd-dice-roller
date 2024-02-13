#include "die.h"
#include "cstdlib"
#include "ctime"

//constructor take arguement for number of side and perform a roll
die::die(int numSides) {
	unsigned seed = time(0);

	//see the random number generator
	srand(seed);

	//set the number of sides
	sides = numSides;

	//perform an intial roll
	roll();
}

//member function roll,roll the die
void die::roll() {
	//const for the min die value
	const int MIN_VALUE = 1;
	//get random vale for the die
	value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;
}

//member get side function return the number for the id
int die::getSides() {
	return sides;
}

//get value member function return the die value
int die::getValue() {
	return value;
}

//void die::die() {}

void die::dieFour() {
	//const for the min die value
	const int MIN_VALUE = 1;
	//get random vale for the die
	value = (rand() % (4 - MIN_VALUE + 1)) + MIN_VALUE;
}

int die::getFour() {
	return value;
}

void die::diesix() {
	//const for the min die value
	const int MIN_VALUE = 1;
	//get random vale for the die
	value = (rand() % (6 - MIN_VALUE + 1)) + MIN_VALUE;
}
int die::getsix() {
	return value;
}
void die::dieEight() {
	//const for the min die value
	const int MIN_VALUE = 1;
	//get random vale for the die
	value = (rand() % (8 - MIN_VALUE + 1)) + MIN_VALUE;
}

int die::getEight() {
	return value;
}
void die::dietweleve() {
	//const for the min die value
	const int MIN_VALUE = 1;
	//get random vale for the die
	value = (rand() % (12 - MIN_VALUE + 1)) + MIN_VALUE;
}
int die::gettweleve() {
	return value;
}

void die::dietwenty() {
	//const for the min die value
	const int MIN_VALUE = 1;
	//get random vale for the die
	value = (rand() % (20 - MIN_VALUE + 1)) + MIN_VALUE;
}

int die::gettwenty() {
	return value;
}

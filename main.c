// C program for the above approach
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function that generate a number in
// the range [1, N] and checks if the
// generated number is the same as the
// guessed number or not

void guess(int N)
{
	int number, guess, numberofguess = 0;

	//Seed random number generator
	srand(time(NULL));

	// Generate a random number
	number = rand() % N;

}

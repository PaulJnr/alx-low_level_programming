#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	// Extract the last digit of n
	int lastDigit = abs(n) % 10;

	// Print the last digit with the corresponding message
	printf("The last digit of %d is ", n);

	if (lastDigit > 5)
	printf("%d and is greater than 5\n", lastDigit);
	else if (lastDigit == 0)
	printf("%d and is 0\n", lastDigit);
	else
	printf("%d and is less than 6 and not 0\n", lastDigit);

	return (0);
}


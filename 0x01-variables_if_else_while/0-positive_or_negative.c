#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - This program will assign a random number to the variable 'n'
 * each time it is executed,
 * and then print whether the number stored in the variable n is positive
 * or negative.
 * 
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
	printf("is positive");
	}
	else if (n < 0)
	{
	printf("is zero");
	}
	else
	{
	printf("is negative");
	}
	return (0);
}

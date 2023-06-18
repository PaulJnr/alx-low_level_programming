#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - This program will assign a random number to the variable 'n' 
 * each time it is executed,
 * and then print whether the number stored in the variable n is positive or negative.
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 5)
	{
	printf("Last digit of %d is greater than 5\n", n);
	}
	else if (n == 0)
	{
	printf("Last digit of %d is 0\n", n);
	}
	 else
	{
	printf("Last digit of %d is less than 5 and not 0\n", n);
	}
	return (0);
}

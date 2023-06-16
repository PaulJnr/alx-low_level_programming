#include <stdio.h>
/**
 * main - a program that prints the size of various computer types
 * Return: Always 0 (success)
 */
int main(void)
{

printf("Size of char: %d byte(s)\n", (unsigned long)sizeof(char));
printf("Size of int: %d byte(s)\n", (unsigned long)sizeof(int));
printf("Size of long int: %d byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of long long int: %d byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of float: %d byte(s)\n", (unsigned long)sizeof(float));
return (0);
}

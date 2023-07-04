#include "main.h"

/**
* main - the entry point of the program
*
* Return: Always 0 (success)
*/

void print_alphabet(void)
{
	char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}; 
	unsigned char i;
	for (i = 0; i < 26; ++i)
	{
		_putchar(alphabet[i]);
	};
	_putchar('\n');	
}

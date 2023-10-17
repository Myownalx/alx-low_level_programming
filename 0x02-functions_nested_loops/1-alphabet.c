#include "main.h"

/**
 * print_alphabet - name of function
 */

void print_alphabet(void) 
{
	char letter = 'a';

	while ( letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar("\n");
}	

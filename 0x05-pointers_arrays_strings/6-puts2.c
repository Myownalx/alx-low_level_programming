#include "main.h"

/**
 * puts2 - This is the function name
 * @str: This is the parameter of the function
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
	}
		_putchar ('\n');
}

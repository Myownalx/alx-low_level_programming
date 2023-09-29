#include "main.h"

/**
 * _puts_recursion - function name
 * @s: parameter of the function
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}

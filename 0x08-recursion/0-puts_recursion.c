#include "main.h"

/**
 * _puts_recursion - function name
 * @s: parameter of function
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

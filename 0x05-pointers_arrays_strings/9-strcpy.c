#include "main.h"

/**
 * _strcpy - name of function
 * @dest:first  parameter of functions
 * @src: second parameter of the function
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

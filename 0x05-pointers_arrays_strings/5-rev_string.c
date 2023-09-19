#include "main.h"

/**
 * rev_string - This is the function name
 * @s: This is the parameter of the function
 */

void rev_string(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = 0; i < count / 2; i++)
	{
		char j;

		j = s[i];

		s[i] = s[count - 1 - i];
		s[count - 1 - i] = j;
	}
}

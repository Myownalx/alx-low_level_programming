#include "main.h"
#include <stdio.h>

/**
 * print_array - This is the name of the function
 * @a: First parameter of the function
 * @n: Second parameter of the function
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
	{
	if (i < n - 1)
	printf(", ");

	}
	printf("\n");
	}
}

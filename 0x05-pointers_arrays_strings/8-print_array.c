#include "holberton.h"
#include <stdio.h>
/**
 * print_array - code entry point
 * Description: Function that prints `n` elements of an array of integers
 * @a: int type
 * @n: int type
 * Return: 0
 */
void print_array(int *a, int n)
{


	int i;

	for (i = 0; i < n; i++)
	{


		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");

	}

	printf("\n");

}

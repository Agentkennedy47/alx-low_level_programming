#include "holberton.h"
/**
 * print_rev - code entry point
 * Description: Function that prints a string in reverse
 * @s: string type
 * Return: 0
 */
void print_rev(char *s)
{


	int x, y, size = 0;
	char rev[];

	while (*s[size] != '\0')
	{

		size++;
	}

	y = size - 1;

	for (x = 0; x < size; x++)
	{

		rev[x] = *s[y];
		y--;

	}

	_putchar('\n');

}

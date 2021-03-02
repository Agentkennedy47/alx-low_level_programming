#include "holberton.h"
/**
 * puts_half - code entry point
 * Description: Function that prints half of a string
 * @str: string type
 * Function should print the second half of the string
 * Return: 0
 */
void puts_half(char *str)
{


	int size = 0;
	int i, j;

	while (*str != '\0')
	{
		str++;
		size++;
	}

	j = size;

	while (j != 0)
	{
		str--;
		j--;
	}

	if ((size % 2) != 0)
	{
		size += 1;
	}

	for (i = size / 2; i < size; i++)
	{

		if (str[i] != 0)
			_putchar(str[i]);
	}

	_putchar('\n');

}

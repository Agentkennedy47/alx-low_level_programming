#include "holberton.h"
/**
 * rev_string - code block entry
 * Description: Function that reverses a string
 * @s: string type
 * Return: 0
 */
void rev_string(char *s)
{


	int size = 0;
	int i, j;

	while (*s != '\0')
	{

		s++;
		size++;
	}

	i = size;

	while (i != 0)
	{

		i--;
		s--;
	}

	for (j = 1; j <= size / 2; j++)
	{

		i = s[(j - 1)];
		s[(j - 1)] = s[(size - j)];
		s[(size - j)] = i;

	}

}

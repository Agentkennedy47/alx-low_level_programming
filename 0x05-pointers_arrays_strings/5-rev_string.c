#include "holberton.h"
/**
 * rev_string - code block entry
 * Description: Function that reverses a string
 * @s: string type
 * Return: 0
 */
void rev_string(char *s)
{


	int i, size = 0;

	i = size - 1;

	while (*s != '\0')
	{

		while (i >= 0)
		{
			i--;
			size--;

		}

		s++;
		size++;
	}

}
